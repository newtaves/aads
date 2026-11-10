#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int partition_( int A[], int p, int r );
int random_partition( int A[], int p, int r );
int random_select( int A[], int p, int r, int k );

int main( void )
{
    srand( time( 0 ) );

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if( n <= 0 )
    {
        cout << "Invalid array size";
        return 0;
    }

    int *A = new int[ n ];

    cout << "Enter array elements: ";

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> A[ i ];
    }

    int k;

    cout << "Enter the rank to find (1 to " << n << "): ";
    cin >> k;

    if( k < 1 || k > n )
    {
        cout << "Invalid rank";
        delete[] A;
        return 0;
    }

    int result = random_select( A, 0, n - 1, k );

    cout << "\n" << k << "-th smallest element: " << result << endl;

    delete[] A;

    return 0;
}

/* ------- implementations ------- */

int partition_( int A[], int p, int r )
{
    int pivot = A[ r ];
    int i = p - 1;

    for( int j = p ; j < r ; j++ )
    {
        if( A[ j ] <= pivot )
        {
            i++;
            swap( A[ i ], A[ j ] );
        }
    }

    swap( A[ i + 1 ], A[ r ] );

    return i + 1;
}

// partition around a random pivot
int random_partition( int A[], int p, int r )
{
    int i = p + rand() % ( r - p + 1 );

    swap( A[ i ], A[ r ] );

    return partition_( A, p, r );
}

// randomized select
int random_select( int A[], int p, int r, int k )
{
    if( p == r )
        return A[ p ];

    int q = random_partition( A, p, r );

    // rank of the pivot inside A[p..r]
    int rank = q - p + 1;

    if( k == rank )
        return A[ q ];

    else if( k < rank )
        return random_select( A, p, q - 1, k );

    else
        return random_select( A, q + 1, r, k - rank );
}

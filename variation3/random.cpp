#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int cmp_count = 0;

int partition_( int A[], int p, int r );
int random_partition( int A[], int p, int r );
void quick_sort( int A[], int p, int r );

int main( void )
{
    srand( time( 0 ) );

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *A = new int[ n ];

    cout << "Enter array elements: ";

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> A[ i ];
    }

    cout << "\nOriginal Array: ";

    for( int i = 0 ; i < n ; i++ )
    {
        cout << A[ i ] << " ";
    }

    cmp_count = 0;

    quick_sort( A, 0, n - 1 );

    cout << "\n\nSorted Array: ";

    for( int i = 0 ; i < n ; i++ )
    {
        cout << A[ i ] << " ";
    }

    cout << "\n\nNumber of Comparisons: " << cmp_count << endl;

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
        cmp_count++;

        if( A[ j ] <= pivot )
        {
            i++;
            swap( A[ i ], A[ j ] );
        }
    }

    swap( A[ i + 1 ], A[ r ] );

    return i + 1;
}

// partition around a randomly chosen pivot
int random_partition( int A[], int p, int r )
{
    int i = p + rand() % ( r - p + 1 );

    swap( A[ i ], A[ r ] );

    return partition_( A, p, r );
}

void quick_sort( int A[], int p, int r )
{
    if( p < r )
    {
        int q = random_partition( A, p, r );

        quick_sort( A, p, q - 1 );
        quick_sort( A, q + 1, r );
    }
}

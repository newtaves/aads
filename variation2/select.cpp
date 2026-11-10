#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// function prototypes (implementations are at the bottom)
int Partition(int A[], int p, int r);
int randomPartition(int A[], int p, int r);
int randomizedSelect(int A[], int p, int r, int i);

// ==================== main ====================

int main()
{
    srand(time(0));

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size";
        return 0;
    }

    int *A = new int[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) { cin >> A[i]; }

    int rankWanted;

    cout << "Enter the rank to find (1 to " << n << "): ";
    cin >> rankWanted;

    if (rankWanted < 1 || rankWanted > n)
    {
        cout << "Invalid rank";
        delete[] A;
        return 0;
    }

    int result = randomizedSelect(A, 0, n - 1, rankWanted);

    cout << "\n" << rankWanted << "-th smallest element: " << result << endl;

    delete[] A;

    return 0;
}

// ==================== Partition ====================

// the normal partition function (same as in quicksort)
int Partition(int A[], int p, int r)
{
    int pivot = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[r]);

    return i + 1;
}

// ==================== randomPartition ====================

int randomPartition(int A[], int p, int r)
{
    int randomIndex = p + rand() % (r - p + 1);

    swap(A[randomIndex], A[r]);

    return Partition(A, p, r);
}

// ==================== randomizedSelect ====================

// finds the i-th smallest element of the array
int randomizedSelect(int A[], int p, int r, int i)
{
    if (p == r)
        return A[p];

    int q = randomPartition(A, p, r);

    // rank of the pivot inside the subarray A[p..r]
    int pivotRank = q - p + 1;

    if (i == pivotRank)
        return A[q];

    else if (i < pivotRank)
        return randomizedSelect(A, p, q - 1, i);

    else
        return randomizedSelect(A, q + 1, r, i - pivotRank);
}

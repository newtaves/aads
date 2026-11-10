#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int comparisons = 0;

// function prototypes (implementations are at the bottom)
int Partition(int A[], int p, int r);
int randomPartition(int A[], int p, int r);
void randomQuickSort(int A[], int p, int r);

// ==================== main ====================

int main()
{
    srand(time(0));

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *A = new int[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) { cin >> A[i]; }

    cout << "\nOriginal Array: ";

    for (int i = 0; i < n; i++) { cout << A[i] << " "; }

    comparisons = 0;

    randomQuickSort(A, 0, n - 1);

    cout << "\n\nSorted Array: ";

    for (int i = 0; i < n; i++) { cout << A[i] << " "; }

    cout << "\n\nNumber of Comparisons: " << comparisons << endl;

    delete[] A;

    return 0;
}

// ==================== Partition ====================

int Partition(int A[], int p, int r)
{
    int pivot = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        comparisons++;   // counting every comparison here

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

    swap(A[randomIndex], A[r]);   // send the random pivot to the end

    return Partition(A, p, r);
}

// ==================== randomQuickSort ====================

void randomQuickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = randomPartition(A, p, r);

        randomQuickSort(A, p, q - 1);
        randomQuickSort(A, q + 1, r);
    }
}

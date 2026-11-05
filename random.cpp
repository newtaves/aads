
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int comparisons = 0;

// Partition Function
int Partition(int A[], int p, int r)
{
    int pivot = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        comparisons++;

        if (A[j] <= pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[r]);

    return i + 1;
}

// Randomized Partition Function
int rand_Partition(int A[], int p, int r)
{
    int i = p + rand() % (r - p + 1);

    swap(A[i], A[r]);

    return Partition(A, p, r);
}

// Randomized Quick Sort
void rand_QuickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = rand_Partition(A, p, r);

        rand_QuickSort(A, p, q - 1);
        rand_QuickSort(A, q + 1, r);
    }
}

// Main Function
int main()
{
    srand(time(0));

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *A = new int[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "\nOriginal Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    comparisons = 0;

    rand_QuickSort(A, 0, n - 1);

    cout << "\n\nSorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << "\n\nNumber of Comparisons: "
         << comparisons << endl;

    delete[] A;

    return 0;
}

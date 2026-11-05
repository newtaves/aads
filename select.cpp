
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// Partition function
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

// Randomized partition
int rand_Partition(int A[], int p, int r)
{
    int i = p + rand() % (r - p + 1);

    swap(A[i], A[r]);

    return Partition(A, p, r);
}

// Randomized Select
int rand_Select(int A[], int p, int r, int i)
{
    if (p == r)
        return A[p];

    int q = rand_Partition(A, p, r);

    // Rank of pivot in current subarray
    int k = q - p + 1;

    if (i == k)
        return A[q];

    else if (i < k)
        return rand_Select(A, p, q - 1, i);

    else
        return rand_Select(A, q + 1, r, i - k);
}

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

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int i;

    cout << "Enter the rank to find (1 to " << n << "): ";
    cin >> i;

    if (i < 1 || i > n)
    {
        cout << "Invalid rank";
        delete[] A;
        return 0;
    }

    int result = rand_Select(A, 0, n - 1, i);

    cout << "\n" << i << "-th smallest element: "
         << result << endl;

    delete[] A;

    return 0;
}

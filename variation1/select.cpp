#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int part(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p - 1;

    for(int j=p;j<r;j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);

    return i+1;
}

// random pivot partition
int randPart(int arr[], int p, int r)
{
    int idx = p + rand()%(r-p+1);

    swap(arr[idx], arr[r]);

    return part(arr, p, r);
}

int randSelect(int arr[], int p, int r, int k)
{
    if(p == r)
        return arr[p];

    int q = randPart(arr, p, r);

    int rank = q - p + 1;    // rank of the pivot

    if(k == rank)
        return arr[q];

    else if(k < rank)
        return randSelect(arr, p, q-1, k);

    else
        return randSelect(arr, q+1, r, k-rank);
}

int main() {

    srand(time(0));

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid array size";
        return 0;
    }

    int *arr = new int[n];

    cout << "Enter array elements: ";

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int k;

    cout << "Enter the rank to find (1 to " << n << "): ";
    cin >> k;

    if(k < 1 || k > n) {
        cout << "Invalid rank";
        delete[] arr;
        return 0;
    }

    int res = randSelect(arr, 0, n-1, k);

    cout << "\n" << k << "-th smallest element: " << res << endl;

    delete[] arr;

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int cmp = 0;

int part(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p-1;

    for(int j=p; j<r; j++) {
        cmp++;

        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[r]);

    return i+1;
}

int randPart(int arr[], int p, int r) {
    int i = p + rand()%(r-p+1);

    swap(arr[i], arr[r]);    // random pivot at the end

    return part(arr, p, r);
}

void rquicksort(int arr[], int p, int r) {
    if(p < r) {
        int q = randPart(arr, p, r);

        rquicksort(arr, p, q-1);
        rquicksort(arr, q+1, r);
    }
}

int main()
{
    srand(time(0));

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements: ";

    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "\nOriginal Array: ";

    int k = 0;
    while(k < n) {
        cout << arr[k] << " ";
        k++;
    }

    cmp = 0;

    rquicksort(arr, 0, n-1);

    cout << "\n\nSorted Array: ";

    k = 0;
    while(k < n) {
        cout << arr[k] << " ";
        k++;
    }

    cout << "\n\nNumber of Comparisons: " << cmp << endl;

    delete[] arr;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

// KMP Failure Function (LPS Array)
void KMPFailureFunction(string P, int f[])
{
    int m = P.length();

    int i = 1;
    int j = 0;

    f[0] = 0;

    while (i < m)
    {
        if (P[j] == P[i])
        {
            f[i] = j + 1;
            i++;
            j++;
        }
        else if (j > 0)
        {
            j = f[j - 1];
        }
        else
        {
            f[i] = 0;
            i++;
        }
    }
}

// KMP Search Function
void KMP_Search(string T, string P)
{
    int n = T.length();
    int m = P.length();

    if (m == 0)
    {
        cout << "Empty pattern" << endl;
        return;
    }

    int *f = new int[m];

    KMPFailureFunction(P, f);

    int i = 0, j = 0;

    while (i < n)
    {
        if (T[i] == P[j])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            cout << "Pattern found at index: "
                 << i - j << endl;

            j = f[j - 1];
        }
        else if (i < n && T[i] != P[j])
        {
            if (j > 0)
            {
                j = f[j - 1];
            }
            else
            {
                i++;
            }
        }
    }

    delete[] f;
}

// Main Function
int main()
{
    string T, P;

    cout << "Enter Text: ";
    getline(cin, T);

    cout << "Enter Pattern: ";
    getline(cin, P);

    KMP_Search(T, P);

    return 0;
}

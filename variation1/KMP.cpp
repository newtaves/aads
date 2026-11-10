#include <iostream>
#include <string>
using namespace std;

// lps table
void lpsFn(string pat, int lps[])
{
    int m = pat.size();
    int i = 1;
    int j = 0;

    lps[0] = 0;

    while(i < m)
    {
        if(pat[j] == pat[i]) {
            lps[i] = j+1;
            i++; j++;
        }
        else if(j > 0) {
            j = lps[j-1];
        }
        else {
            lps[i] = 0;
            i++;
        }
    }
}

void kmpSearch(string txt, string pat)
{
    int n = txt.size();
    int m = pat.size();

    if(m == 0) {
        cout << "Empty pattern" << endl;
        return;
    }

    int *lps = new int[m];
    lpsFn(pat, lps);

    int i=0, j=0;

    while(i < n) {
        if(txt[i] == pat[j]) {
            i++;
            j++;
        }

        if(j == m) {
            cout << "Pattern found at index: " << i-j << endl;
            j = lps[j-1];
        }
        else if(i < n && txt[i] != pat[j]) {
            if(j > 0)
                j = lps[j-1];
            else
                i++;
        }
    }

    delete[] lps;
}

int main() {
    string txt, pat;

    cout << "Enter Text: ";
    getline(cin, txt);

    cout << "Enter Pattern: ";
    getline(cin, pat);

    kmpSearch(txt, pat);

    return 0;
}

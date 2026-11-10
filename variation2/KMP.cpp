#include <iostream>
#include <string>
using namespace std;

// function prototypes (implementations are at the bottom)
void computeFailureTable(string pattern, int failureTable[]);
void KMP_Search(string text, string pattern);

// ==================== main ====================

int main()
{
    string text, pattern;

    cout << "Enter Text: ";
    getline(cin, text);

    cout << "Enter Pattern: ";
    getline(cin, pattern);

    KMP_Search(text, pattern);

    return 0;
}

// ==================== computeFailureTable ====================

// builds the failure table (also known as the LPS array) of the pattern
void computeFailureTable(string pattern, int failureTable[])
{
    int patternLength = pattern.length();

    int i = 1;
    int j = 0;

    failureTable[0] = 0;

    while (i < patternLength)
    {
        if (pattern[j] == pattern[i])
        {
            failureTable[i] = j + 1;
            i++; j++;
        }
        else if (j > 0)
        {
            // fall back using the already built part of the table
            j = failureTable[j - 1];
        }
        else
        {
            failureTable[i] = 0;
            i++;
        }
    }
}

// ==================== KMP_Search ====================

void KMP_Search(string text, string pattern)
{
    int textLength = text.length();
    int patternLength = pattern.length();

    if (patternLength == 0)
    {
        cout << "Empty pattern" << endl;
        return;
    }

    int *failureTable = new int[patternLength];

    computeFailureTable(pattern, failureTable);

    int i = 0, j = 0;

    while (i < textLength)
    {
        if (text[i] == pattern[j])
        {
            i++; j++;
        }

        if (j == patternLength)
        {
            cout << "Pattern found at index: " << i - j << endl;

            // continue searching for more matches
            j = failureTable[j - 1];
        }
        else if (i < textLength && text[i] != pattern[j])
        {
            if (j > 0)
            {
                j = failureTable[j - 1];
            }
            else
            {
                i++;
            }
        }
    }

    delete[] failureTable;
}

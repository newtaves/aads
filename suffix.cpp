
#include <iostream>
#include <string>
using namespace std;

const int ALPHABET_SIZE = 256;

struct TrieNode
{
    TrieNode* child[ALPHABET_SIZE];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;

        for (int i = 0; i < ALPHABET_SIZE; i++)
            child[i] = NULL;
    }
};

class SuffixTrie
{
private:
    TrieNode* root;

    // Insert one suffix into the trie
    void insertSuffix(const string& suffix)
    {
        TrieNode* current = root;

        for (int i = 0; i < suffix.length(); i++)
        {
            unsigned char ch = suffix[i];

            if (current->child[ch] == NULL)
                current->child[ch] = new TrieNode();

            current = current->child[ch];
        }

        current->isEnd = true;
    }

public:

    SuffixTrie()
    {
        root = new TrieNode();
    }

    // Brute force suffix trie construction
    void bruteForceSuffixTrie(const string& text)
    {
        for (int i = 0; i < text.length(); i++)
        {
            string suffix = text.substr(i);
            insertSuffix(suffix);
        }
    }

    // Search a pattern
    bool search(const string& pattern)
    {
        TrieNode* current = root;

        for (int i = 0; i < pattern.length(); i++)
        {
            unsigned char ch = pattern[i];

            if (current->child[ch] == NULL)
                return false;

            current = current->child[ch];
        }

        return true;
    }
};

int main()
{
    SuffixTrie tree;

    string text, pattern;

    cout << "Enter the text: ";
    cin >> text;

    tree.bruteForceSuffixTrie(text);

    cout << "\nEnter the pattern: ";
    cin >> pattern;

    if (tree.search(pattern))
        cout << "\nPattern found in the text.";
    else
        cout << "\nPattern not found in the text.";

    return 0;
}

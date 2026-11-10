#include <iostream>
#include <string>
using namespace std;

const int ALPHABET_SIZE = 256;

// ==================== TrieNode struct ====================

struct TrieNode
{
    TrieNode* child[ALPHABET_SIZE];
    bool isEndOfSuffix;

    TrieNode();
};

TrieNode::TrieNode()
    : isEndOfSuffix(false)
{
    for (int i = 0; i < ALPHABET_SIZE; i++) { child[i] = NULL; }
}

// ==================== SuffixTrie class ====================

class SuffixTrie
{
private:
    TrieNode* rootNode;

    // puts one single suffix inside the trie
    void insertSingleSuffix(const string& suffix);

public:

    SuffixTrie();
    void bruteForceSuffixTrie(const string& text);
    bool search(const string& pattern);
};

// ---------- SuffixTrie methods ----------

SuffixTrie::SuffixTrie()
    : rootNode(new TrieNode())
{
}

void SuffixTrie::insertSingleSuffix(const string& suffix)
{
    TrieNode* current = rootNode;

    for (int i = 0; i < suffix.length(); i++)
    {
        unsigned char ch = suffix[i];

        if (current->child[ch] == NULL)
            current->child[ch] = new TrieNode();

        current = current->child[ch];
    }

    current->isEndOfSuffix = true;
}

void SuffixTrie::bruteForceSuffixTrie(const string& text)
{
    // insert every suffix of the text one by one
    for (int i = 0; i < text.length(); i++)
    {
        string suffix = text.substr(i);
        insertSingleSuffix(suffix);
    }
}

bool SuffixTrie::search(const string& pattern)
{
    TrieNode* current = rootNode;

    for (int i = 0; i < pattern.length(); i++)
    {
        unsigned char ch = pattern[i];

        if (current->child[ch] == NULL)
            return false;

        current = current->child[ch];
    }

    return true;
}

// ==================== main ====================

int main()
{
    SuffixTrie tree;

    string text, pattern;

    cout << "Enter the text: ";
    cin >> text;

    tree.bruteForceSuffixTrie(text);

    cout << "\nEnter the pattern: ";
    cin >> pattern;

    if (tree.search(pattern)) { cout << "\nPattern found in the text."; }
    else { cout << "\nPattern not found in the text."; }

    return 0;
}

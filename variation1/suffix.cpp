#include<iostream>
#include<string>
using namespace std;

const int MAXC = 256;

struct Node
{
    Node* nxt[MAXC];
    bool last;

    Node();
};

Node::Node()
{
    last = false;
    for(int i=0;i<MAXC;i++)
        nxt[i] = NULL;
}

class SuffixTrie
{
    Node* root;

    // put one suffix in the trie
    void addSuffix(const string& suf);

public:
    SuffixTrie();
    void bruteForceSuffixTrie(const string& txt);
    bool search(const string& pat);
};

SuffixTrie::SuffixTrie() { root = new Node(); }

void SuffixTrie::addSuffix(const string& suf) {
    Node* cur = root;

    for(int i=0;i<suf.length();i++) {
        unsigned char c = suf[i];

        if(cur->nxt[c] == NULL)
            cur->nxt[c] = new Node();

        cur = cur->nxt[c];
    }

    cur->last = true;
}

void SuffixTrie::bruteForceSuffixTrie(const string& txt) {
    for(int i=0;i<txt.length();i++) {
        string suf = txt.substr(i);
        addSuffix(suf);
    }
}

bool SuffixTrie::search(const string& pat) {
    Node* cur = root;

    for(int i=0;i<pat.length();i++) {
        unsigned char c = pat[i];

        if(cur->nxt[c] == NULL)
            return false;

        cur = cur->nxt[c];
    }

    return true;
}

int main() {

    SuffixTrie tree;

    string txt, pat;

    cout << "Enter the text: ";
    cin >> txt;

    tree.bruteForceSuffixTrie(txt);

    cout << "\nEnter the pattern: ";
    cin >> pat;

    if(tree.search(pat))
        cout << "\nPattern found in the text.";
    else
        cout << "\nPattern not found in the text.";

    return 0;
}

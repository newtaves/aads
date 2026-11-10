#include <iostream>
using namespace std;

class TrieNode {
public:
    TrieNode* nxt[26];
    bool isEnd;

    TrieNode();
};

TrieNode::TrieNode() {
    isEnd = false;

    for(int i=0;i<26;i++)
        nxt[i] = nullptr;
}

class Trie {
    TrieNode* root;

public:
    Trie();
    void insert(string word);
    bool search(string word);
};

Trie::Trie() { root = new TrieNode(); }

void Trie::insert(string word) {

    TrieNode* cur = root;

    for(char c : word) {

        int idx = c - 'a';

        if(cur->nxt[idx] == nullptr)
            cur->nxt[idx] = new TrieNode();

        cur = cur->nxt[idx];
    }

    cur->isEnd = true;

    cout << "Word inserted successfully.\n";
}

bool Trie::search(string word) {

    TrieNode* cur = root;

    for(char c : word) {

        int idx = c - 'a';

        if(cur->nxt[idx] == nullptr)
            return false;

        cur = cur->nxt[idx];
    }

    return cur->isEnd;
}

int main() {

    Trie trie;
    int choice;
    string word;

    do {

        cout << "\n----- TRIE OPERATIONS -----\n";
        cout << "1. Insert a word\n";
        cout << "2. Search a word\n";
        cout << "3. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter word to insert: ";
            cin >> word;

            trie.insert(word);
            break;

        case 2:
            cout << "Enter word to search: ";
            cin >> word;

            if(trie.search(word))
                cout << "Word found in Trie.\n";
            else
                cout << "Word not found in Trie.\n";

            break;

        case 3:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}

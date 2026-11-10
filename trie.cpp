
#include <iostream>
using namespace std;

// Trie Node
class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;

        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

// Trie Class
class Trie {
    TrieNode* root;

public:

    Trie() {
        root = new TrieNode();
    }

    // Insert a word into Trie
    void insert(string word) {

        TrieNode* current = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }

            current = current->children[index];
        }

        current->isEndOfWord = true;

        cout << "Word inserted successfully.\n";
    }

    // Search for a word in Trie
    bool search(string word) {

        TrieNode* current = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (current->children[index] == nullptr)
                return false;

            current = current->children[index];
        }

        return current->isEndOfWord;
    }
};

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

        switch (choice) {

            case 1:
                cout << "Enter word to insert: ";
                cin >> word;

                trie.insert(word);
                break;

            case 2:
                cout << "Enter word to search: ";
                cin >> word;

                if (trie.search(word))
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

    } while (choice != 3);

    return 0;
}

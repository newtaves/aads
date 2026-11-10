#include <iostream>
using namespace std;

class TrieNode
{
public:
    TrieNode* child[ 26 ];
    bool is_end;

    TrieNode();
};

class Trie
{
    TrieNode* root;

public:

    Trie();
    void insert( string word );
    bool search( string word );
};

int main( void )
{
    Trie trie;
    int choice;
    string word;

    do
    {
        cout << "\n----- TRIE OPERATIONS -----\n";
        cout << "1. Insert a word\n";
        cout << "2. Search a word\n";
        cout << "3. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch( choice )
        {
            case 1:
                cout << "Enter word to insert: ";
                cin >> word;

                trie.insert( word );
                break;

            case 2:
                cout << "Enter word to search: ";
                cin >> word;

                if( trie.search( word ) )
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

    } while( choice != 3 );

    return 0;
}

/* ------- implementations ------- */

TrieNode::TrieNode()
{
    is_end = false;

    for( int i = 0 ; i < 26 ; i++ )
        child[ i ] = NULL;
}

Trie::Trie()
{
    root = new TrieNode();
}

void Trie::insert( string word )
{
    TrieNode* node = root;

    for( char ch : word )
    {
        int idx = ch - 'a';

        if( node->child[ idx ] == NULL )
            node->child[ idx ] = new TrieNode();

        node = node->child[ idx ];
    }

    node->is_end = true;

    cout << "Word inserted successfully.\n";
}

bool Trie::search( string word )
{
    TrieNode* node = root;

    for( char ch : word )
    {
        int idx = ch - 'a';

        if( node->child[ idx ] == NULL )
            return false;

        node = node->child[ idx ];
    }

    return node->is_end;
}

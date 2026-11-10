#include <iostream>
#include <string>
using namespace std;

const int ALPHABET_SIZE = 256;

struct TrieNode
{
    TrieNode* child[ ALPHABET_SIZE ];
    bool is_end;

    TrieNode();
};

class SuffixTrie
{
    TrieNode* root;

    // insert one suffix into the trie
    void insert_suffix( const string& s );

public:

    SuffixTrie();
    void build_trie( const string& text );
    bool search( const string& p );
};

int main( void )
{
    SuffixTrie trie;

    string text, pattern;

    cout << "Enter the text: ";
    cin >> text;

    trie.build_trie( text );

    cout << "\nEnter the pattern: ";
    cin >> pattern;

    if( trie.search( pattern ) )
        cout << "\nPattern found in the text.";
    else
        cout << "\nPattern not found in the text.";

    return 0;
}

/* ------- implementations ------- */

TrieNode::TrieNode()
{
    is_end = false;

    for( int i = 0 ; i < ALPHABET_SIZE ; i++ )
        child[ i ] = NULL;
}

SuffixTrie::SuffixTrie()
{
    root = new TrieNode();
}

void SuffixTrie::insert_suffix( const string& s )
{
    TrieNode* node = root;

    for( int i = 0 ; i < s.length() ; i++ )
    {
        unsigned char ch = s[ i ];

        if( node->child[ ch ] == NULL )
            node->child[ ch ] = new TrieNode();

        node = node->child[ ch ];
    }

    node->is_end = true;
}

// insert every suffix of the text into the trie
void SuffixTrie::build_trie( const string& text )
{
    for( int i = 0 ; i < text.length() ; i++ )
    {
        string s = text.substr( i );
        insert_suffix( s );
    }
}

bool SuffixTrie::search( const string& p )
{
    TrieNode* node = root;

    for( int i = 0 ; i < p.length() ; i++ )
    {
        unsigned char ch = p[ i ];

        if( node->child[ ch ] == NULL )
            return false;

        node = node->child[ ch ];
    }

    return true;
}

#include <iostream>
using namespace std;

class BTreeNode
{
    int *data;
    int deg;
    BTreeNode **c;
    int num;
    bool is_leaf;

public:

    BTreeNode( int deg1, bool leaf1 );
    void traverse();
    BTreeNode* search( int val );
    void split_child( int i, BTreeNode *node );
    void insert_nonfull( int val );

    friend class BTree;
};

class BTree
{
    BTreeNode *root;
    int deg;

public:

    BTree( int deg1 );
    void traverse();
    bool search( int val );
    void insert( int val );
};

int main( void )
{
    int deg, n, val;

    cout << "Enter minimum degree of B-Tree: ";
    cin >> deg;

    if( deg < 2 )
    {
        cout << "Minimum degree must be at least 2.\n";
        return 0;
    }

    BTree tree( deg );

    cout << "Enter number of keys: ";
    cin >> n;

    cout << "Enter keys:\n";

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> val;
        tree.insert( val );
    }

    cout << "\nB-Tree traversal:\n";
    tree.traverse();

    cout << "\nEnter key to search: ";
    cin >> val;

    if( tree.search( val ) )
        cout << "Key " << val << " found in B-Tree.\n";
    else
        cout << "Key " << val << " not found in B-Tree.\n";

    return 0;
}

/* ------- implementations of BTreeNode ------- */

BTreeNode::BTreeNode( int deg1, bool leaf1 )
{
    deg = deg1;
    is_leaf = leaf1;

    data = new int[ 2 * deg - 1 ];
    c = new BTreeNode*[ 2 * deg ];

    num = 0;
}

void BTreeNode::traverse()
{
    int i;

    for( i = 0 ; i < num ; i++ )
    {
        if( ! is_leaf )
            c[ i ]->traverse();

        cout << data[ i ] << " ";
    }

    if( ! is_leaf )
        c[ i ]->traverse();
}

BTreeNode* BTreeNode::search( int val )
{
    int i = 0;

    while( i < num && val > data[ i ] )
        i++;

    if( i < num && data[ i ] == val )
        return this;

    if( is_leaf )
        return nullptr;

    return c[ i ]->search( val );
}

void BTreeNode::split_child( int i, BTreeNode *node )
{
    BTreeNode *node2 = new BTreeNode( node->deg, node->is_leaf );

    node2->num = deg - 1;

    // copy the last deg-1 keys of node into node2
    for( int j = 0 ; j < deg - 1 ; j++ )
        node2->data[ j ] = node->data[ j + deg ];

    // copy the last deg children of node into node2
    if( ! node->is_leaf )
    {
        for( int j = 0 ; j < deg ; j++ )
            node2->c[ j ] = node->c[ j + deg ];
    }

    node->num = deg - 1;

    // create space for the new child
    for( int j = num ; j >= i + 1 ; j-- )
        c[ j + 1 ] = c[ j ];

    c[ i + 1 ] = node2;

    for( int j = num - 1 ; j >= i ; j-- )
        data[ j + 1 ] = data[ j ];

    // the middle key moves up into this node
    data[ i ] = node->data[ deg - 1 ];

    num++;
}

void BTreeNode::insert_nonfull( int val )
{
    int i = num - 1;

    if( is_leaf )
    {
        // find the correct position for val
        while( i >= 0 && data[ i ] > val )
        {
            data[ i + 1 ] = data[ i ];
            i--;
        }

        data[ i + 1 ] = val;
        num++;
    }

    else
    {
        while( i >= 0 && data[ i ] > val )
            i--;

        i++;

        // split the child first when it is full
        if( c[ i ]->num == 2 * deg - 1 )
        {
            split_child( i, c[ i ] );

            if( data[ i ] < val )
                i++;
        }

        c[ i ]->insert_nonfull( val );
    }
}

/* ------- implementations of BTree ------- */

BTree::BTree( int deg1 )
{
    root = NULL;
    deg = deg1;
}

void BTree::traverse()
{
    if( root != NULL )
        root->traverse();

    cout << endl;
}

bool BTree::search( int val )
{
    return ( root != NULL && root->search( val ) != NULL );
}

void BTree::insert( int val )
{
    // the tree is empty
    if( root == NULL )
    {
        root = new BTreeNode( deg, true );

        root->data[ 0 ] = val;
        root->num = 1;
    }

    else
    {
        // the root is full
        if( root->num == 2 * deg - 1 )
        {
            BTreeNode *node = new BTreeNode( deg, false );

            node->c[ 0 ] = root;

            node->split_child( 0, root );

            int i = 0;

            if( node->data[ 0 ] < val )
                i++;

            node->c[ i ]->insert_nonfull( val );

            root = node;
        }

        else
        {
            root->insert_nonfull( val );
        }
    }
}

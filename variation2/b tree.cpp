#include <iostream>
using namespace std;

// ==================== BTreeNode class ====================

class BTreeNode
{
    int *keysArray;           // array of all the keys of this node
    int minimumDegree;        // the minimum degree of the tree
    BTreeNode **childArray;   // array of pointers to the children
    int numberOfKeys;         // how many keys this node has right now
    bool isLeafNode;          // true when the node is a leaf

public:

    BTreeNode(int degree, bool leafStatus);
    void traverse();
    BTreeNode* search(int keyToFind);
    void splitChild(int i, BTreeNode *fullChild);
    void insertNonFull(int keyToInsert);

    friend class BTree;
};

// ---------- BTreeNode methods ----------

BTreeNode::BTreeNode(int degree, bool leafStatus)
    : minimumDegree(degree), numberOfKeys(0), isLeafNode(leafStatus)
{
    keysArray = new int[2 * minimumDegree - 1];
    childArray = new BTreeNode*[2 * minimumDegree];
}

void BTreeNode::traverse()
{
    int i;

    for (i = 0; i < numberOfKeys; i++)
    {
        if (!isLeafNode)
            childArray[i]->traverse();

        cout << keysArray[i] << " ";
    }

    // print the subtree of the last child also
    if (!isLeafNode)
        childArray[i]->traverse();
}

BTreeNode* BTreeNode::search(int keyToFind)
{
    int i = 0;

    while (i < numberOfKeys && keyToFind > keysArray[i])
        i++;

    if (i < numberOfKeys && keysArray[i] == keyToFind)
        return this;

    if (isLeafNode)
        return nullptr;

    return childArray[i]->search(keyToFind);
}

void BTreeNode::splitChild(int i, BTreeNode *fullChild)
{
    // new right node after the split
    BTreeNode *rightNode = new BTreeNode(fullChild->minimumDegree, fullChild->isLeafNode);

    rightNode->numberOfKeys = minimumDegree - 1;

    // copying the last (t-1) keys of fullChild into rightNode
    for (int j = 0; j < minimumDegree - 1; j++)
        rightNode->keysArray[j] = fullChild->keysArray[j + minimumDegree];

    // copying the last t children of fullChild into rightNode
    if (!fullChild->isLeafNode)
    {
        for (int j = 0; j < minimumDegree; j++)
            rightNode->childArray[j] = fullChild->childArray[j + minimumDegree];
    }

    fullChild->numberOfKeys = minimumDegree - 1;

    // creating space for the new child pointer
    for (int j = numberOfKeys; j >= i + 1; j--)
        childArray[j + 1] = childArray[j];

    childArray[i + 1] = rightNode;

    for (int j = numberOfKeys - 1; j >= i; j--)
        keysArray[j + 1] = keysArray[j];

    // moving the middle key up into the parent
    keysArray[i] = fullChild->keysArray[minimumDegree - 1];

    numberOfKeys++;
}

void BTreeNode::insertNonFull(int keyToInsert)
{
    int i = numberOfKeys - 1;

    if (isLeafNode)
    {
        // first find the correct place for the new key
        while (i >= 0 && keysArray[i] > keyToInsert)
        {
            keysArray[i + 1] = keysArray[i];
            i--;
        }

        keysArray[i + 1] = keyToInsert;
        numberOfKeys++;
    }

    else
    {
        while (i >= 0 && keysArray[i] > keyToInsert)
            i--;

        i++;

        // split the child first if it has become full
        if (childArray[i]->numberOfKeys == 2 * minimumDegree - 1)
        {
            splitChild(i, childArray[i]);

            if (keysArray[i] < keyToInsert)
                i++;
        }

        childArray[i]->insertNonFull(keyToInsert);
    }
}

// ==================== BTree class ====================

class BTree
{
    BTreeNode *rootNode;
    int minimumDegree;

public:

    BTree(int degree);
    void traverse();
    bool search(int keyToFind);
    void insert(int keyToInsert);
};

// ---------- BTree methods ----------

BTree::BTree(int degree)
    : rootNode(nullptr), minimumDegree(degree)
{
}

void BTree::traverse()
{
    if (rootNode != nullptr)
        rootNode->traverse();

    cout << endl;
}

bool BTree::search(int keyToFind)
{
    return (rootNode != nullptr && rootNode->search(keyToFind) != nullptr);
}

void BTree::insert(int keyToInsert)
{
    // when the tree is completely empty
    if (rootNode == nullptr)
    {
        rootNode = new BTreeNode(minimumDegree, true);
        rootNode->keysArray[0] = keyToInsert;
        rootNode->numberOfKeys = 1;
    }

    else
    {
        // the root is full so the tree has to grow upwards
        if (rootNode->numberOfKeys == 2 * minimumDegree - 1)
        {
            BTreeNode *newRoot = new BTreeNode(minimumDegree, false);

            newRoot->childArray[0] = rootNode;

            newRoot->splitChild(0, rootNode);

            int i = 0;

            if (newRoot->keysArray[0] < keyToInsert)
                i++;

            newRoot->childArray[i]->insertNonFull(keyToInsert);

            rootNode = newRoot;
        }

        else
        {
            rootNode->insertNonFull(keyToInsert);
        }
    }
}

// ==================== main ====================

int main()
{
    int degree, n, key;

    cout << "Enter minimum degree of B-Tree: ";
    cin >> degree;

    if (degree < 2)
    {
        cout << "Minimum degree must be at least 2.\n";
        return 0;
    }

    BTree tree(degree);

    cout << "Enter number of keys: ";
    cin >> n;

    cout << "Enter keys:\n";

    for (int i = 0; i < n; i++) { cin >> key; tree.insert(key); }

    cout << "\nB-Tree traversal:\n";
    tree.traverse();

    cout << "\nEnter key to search: ";
    cin >> key;

    if (tree.search(key))
        cout << "Key " << key << " found in B-Tree.\n";
    else
        cout << "Key " << key << " not found in B-Tree.\n";

    return 0;
}

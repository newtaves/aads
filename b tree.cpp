
#include <iostream>
using namespace std;

class BTreeNode {
    int *keys;          // Array of keys
    int t;              // Minimum degree
    BTreeNode **C;      // Array of child pointers
    int n;              // Current number of keys
    bool leaf;          // True if node is leaf

public:

    BTreeNode(int t1, bool leaf1) {
        t = t1;
        leaf = leaf1;

        keys = new int[2 * t - 1];
        C = new BTreeNode*[2 * t];

        n = 0;
    }

    // Traverse the B-Tree
    void traverse() {
        int i;

        for (i = 0; i < n; i++) {
            if (!leaf)
                C[i]->traverse();

            cout << keys[i] << " ";
        }

        if (!leaf)
            C[i]->traverse();
    }

    // Search for a key
    BTreeNode* search(int k) {
        int i = 0;

        while (i < n && k > keys[i])
            i++;

        if (i < n && keys[i] == k)
            return this;

        if (leaf)
            return nullptr;

        return C[i]->search(k);
    }

    // Split a full child
    void splitChild(int i, BTreeNode *y) {

        BTreeNode *z = new BTreeNode(y->t, y->leaf);

        z->n = t - 1;

        // Copy last t-1 keys of y to z
        for (int j = 0; j < t - 1; j++)
            z->keys[j] = y->keys[j + t];

        // Copy last t children of y to z
        if (!y->leaf) {
            for (int j = 0; j < t; j++)
                z->C[j] = y->C[j + t];
        }

        y->n = t - 1;

        // Create space for new child
        for (int j = n; j >= i + 1; j--)
            C[j + 1] = C[j];

        C[i + 1] = z;

        // Move keys to create space
        for (int j = n - 1; j >= i; j--)
            keys[j + 1] = keys[j];

        // Move middle key to parent
        keys[i] = y->keys[t - 1];

        n++;
    }

    // Insert key into a non-full node
    void insertNonFull(int k) {
        int i = n - 1;

        if (leaf) {

            // Find correct position
            while (i >= 0 && keys[i] > k) {
                keys[i + 1] = keys[i];
                i--;
            }

            keys[i + 1] = k;
            n++;
        }

        else {

            while (i >= 0 && keys[i] > k)
                i--;

            i++;

            // Split child if it is full
            if (C[i]->n == 2 * t - 1) {

                splitChild(i, C[i]);

                if (keys[i] < k)
                    i++;
            }

            C[i]->insertNonFull(k);
        }
    }

    friend class BTree;
};

class BTree {
    BTreeNode *root;
    int t;

public:

    BTree(int t1) {
        root = nullptr;
        t = t1;
    }

    // Traverse the tree
    void traverse() {
        if (root != nullptr)
            root->traverse();

        cout << endl;
    }

    // Search for a key
    bool search(int k) {
        return (root != nullptr &&
                root->search(k) != nullptr);
    }

    // Insert a key
    void insert(int k) {

        // If tree is empty
        if (root == nullptr) {

            root = new BTreeNode(t, true);
            root->keys[0] = k;
            root->n = 1;
        }

        else {

            // If root is full
            if (root->n == 2 * t - 1) {

                BTreeNode *s = new BTreeNode(t, false);

                s->C[0] = root;

                // Split old root
                s->splitChild(0, root);

                int i = 0;

                if (s->keys[0] < k)
                    i++;

                s->C[i]->insertNonFull(k);

                root = s;
            }

            else {
                root->insertNonFull(k);
            }
        }
    }
};

int main() {

    int t, n, key;

    cout << "Enter minimum degree of B-Tree: ";
    cin >> t;

    if (t < 2) {
        cout << "Minimum degree must be at least 2.\n";
        return 0;
    }

    BTree tree(t);

    cout << "Enter number of keys: ";
    cin >> n;

    cout << "Enter keys:\n";

    for (int i = 0; i < n; i++) {
        cin >> key;
        tree.insert(key);
    }

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

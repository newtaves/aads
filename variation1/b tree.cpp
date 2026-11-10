#include<iostream>
using namespace std;

class BTreeNode {
  int *key;      // keys
  int m;         // min degree
  BTreeNode **ch;
  int cnt;       // number of keys
  bool lf;

public:
  BTreeNode(int temp, bool flag);
  void traverse();
  BTreeNode* search(int x);
  void splitChild(int i, BTreeNode *y);
  void insertNonFull(int x);

  friend class BTree;
};

BTreeNode::BTreeNode(int temp, bool flag) {
     m = temp;
     lf = flag;
     key = new int[2*m-1];
     ch = new BTreeNode*[2*m];
     cnt=0;
}

void BTreeNode::traverse() {
   int i;
   for(i=0;i<cnt;i++) {
      if(!lf)
         ch[i]->traverse();
      cout<<key[i]<<" ";
   }
   if(!lf)
   ch[i]->traverse();
}

BTreeNode* BTreeNode::search(int x) {
int i=0;
while(i<cnt && x>key[i])
i++;
if(i<cnt && key[i]==x)
return this;
if(lf)
return nullptr;
return ch[i]->search(x);
}

// split a full child
void BTreeNode::splitChild(int i, BTreeNode *y) {
        BTreeNode *z = new BTreeNode(y->m,y->lf);
        z->cnt = m-1;
        for(int j=0;j<m-1;j++)
        z->key[j] = y->key[j+m];   // copy last keys
        if(!y->lf) {
            for(int j=0;j<m;j++)
                z->ch[j] = y->ch[j+m];
        }
        y->cnt = m-1;
        // make space for new child
        for(int j=cnt; j>=i+1; j--)
            ch[j+1] = ch[j];
        ch[i+1] = z;
        for(int j=cnt-1;j>=i;j--)
        key[j+1] = key[j];
        key[i] = y->key[m-1];      // middle key up
        cnt++;
}

void BTreeNode::insertNonFull(int x) {
    int i = cnt-1;
    if(lf) {
    while(i>=0 && key[i]>x) {
        key[i+1] = key[i];
        i--;
    }
    key[i+1] = x;
    cnt++;
    }
    else {
        while(i>=0 && key[i]>x)
        i--;
        i++;
        if(ch[i]->cnt == 2*m-1) {   // child full
            splitChild(i, ch[i]);
            if(key[i] < x)
                i++;
        }
        ch[i]->insertNonFull(x);
    }
}

class BTree {
    BTreeNode *root;
    int m;

public:
    BTree(int temp);
    void traverse();
    bool search(int x);
    void insert(int x);
};

BTree::BTree(int temp) { root = nullptr; m = temp; }

void BTree::traverse() {
    if(root != nullptr)
    root->traverse();
    cout << endl;
}

bool BTree::search(int x) {
    return (root != nullptr && root->search(x) != nullptr);
}

void BTree::insert(int x) {
    if(root == nullptr) {
        root = new BTreeNode(m, true);
        root->key[0] = x;
        root->cnt = 1;
    }
    else {
        if(root->cnt == 2*m-1) {
            BTreeNode *tmp = new BTreeNode(m, false);
            tmp->ch[0] = root;
            tmp->splitChild(0, root);   // split old root
            int i = 0;
            if(tmp->key[0] < x)
                i++;
            tmp->ch[i]->insertNonFull(x);
            root = tmp;
        }
        else
        root->insertNonFull(x);
    }
}

int main()
{
    int m,n,x;

    cout<<"Enter minimum degree of B-Tree: ";
    cin>>m;

    if(m < 2) {
        cout << "Minimum degree must be at least 2.\n";
        return 0;
    }

    BTree tree(m);

    cout<<"Enter number of keys: ";
    cin>>n;
    cout<<"Enter keys:\n";

    for(int i=0;i<n;i++) {
        cin>>x;
        tree.insert(x);
    }

    cout<<"\nB-Tree traversal:\n";
    tree.traverse();

    cout<<"\nEnter key to search: ";
    cin>>x;

    if(tree.search(x))
        cout<<"Key "<<x<<" found in B-Tree.\n";
    else
        cout<<"Key "<<x<<" not found in B-Tree.\n";

    return 0;
}

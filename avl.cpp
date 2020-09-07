#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data, height;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
        height = 1;
    }

};

Node *rightRotate (Node *N );
Node *leftRotate (Node *N );
int height (Node *N);
int getBalance (Node *N) ;
Node *newNode (int data);
Node *insert (Node *root, int key) ;
void preOrder(struct Node *root);



Node *rightRotate (Node *N ){
    Node *x, *y;
    x = N->left;
    y = x->right;

    x->right = N;
    N->left = y;
    N->height = 1 + max(height(N->left), height(N->right));
    x->height = 1 + max(height(x->left), height(x->right));
    return x;
}

Node *leftRotate (Node *x) {
    Node *y, *t;
    y = x->right;
    t = y->right;

    y->right = x;
    x->left = t;

    x->height = 1+ max(height(x->left), height(x->right));
    y->height = 1+ max(height(y->left), height(y->right));
    return y;
}

int height (Node *N) {
    if (N == NULL) return 0;
    return N->height;
}

int getBalance (Node *N) {
    if (N == NULL) return 0;
    return height(N->left) - height(N->right);
}

Node *newNode (int data) {
    Node *pt = new Node (data);
    return pt;
}


Node *insert (Node *root, int key) {
    if (root == NULL) return newNode(key);
    else if (key < root->data) root->left = insert(root->left, key);
    else if (key > root->data) root->right = insert(root->right, key);
    else return root;
    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);

    if (balance > 1 && key < root->left->data) return rightRotate (root);
    if (balance < -1 && key < root->right->data) return leftRotate(root);
    if (balance < 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance > -1 && key > root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
}

void preOrder(struct Node *root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
  struct Node *root = NULL;
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);

  printf("Preorder traversal of the constructed AVL"
         " tree is \n");
  preOrder(root);

  return 0;
}

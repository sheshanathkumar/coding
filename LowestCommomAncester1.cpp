#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left = NULL, *right= NULL;
};
typedef struct node Node;

Node *createBST(Node *root, int info){
    if (root == NULL) {
        Node *temp = new Node;
        temp -> data = info;
        root = temp;
    }
    else if (root -> data > info) root->left = createBST(root ->left, info);
    else root -> right = createBST(root -> right, info);
    return root;
}

Node * LCA (Node *root, int a, int b){
    if (root == NULL) return NULL;
    else if ( root -> data > a && root -> data > b) return LCA(root -> left, a,b);
    else if (root -> data < a && root -> data <b) return LCA (root -> right, a,b);
    return root;
}

void inorder (Node *root){
    if (root == NULL) return;
    inorder (root ->left);
    cout<<root -> data<<" ";
    inorder (root -> right);
}

int main (){
    Node *root = NULL;
    root = createBST(root , 25);
    root = createBST(root , 10);
    root = createBST(root , 28);
    root = createBST(root , 6);
    root = createBST(root , 12);
    root = createBST(root , 27);
    root = createBST(root , 36);
    root = createBST(root , 5);
    root = createBST(root , 8);
    root = createBST(root , 11);
    inorder (root);
    cout<<"\n";
    Node *T = LCA(root, 5,28);
    cout<<T->data;
    return 0;
}

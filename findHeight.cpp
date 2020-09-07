#include <bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node *left;
    struct node *right;
};
 typedef struct node Node;

Node *createBST (Node *root, int data){
    if (root == NULL){
        Node *temp = new Node;
        temp -> info = data;
        temp->left = NULL;
        temp->right = NULL;
        root  = temp;
    }
    else if (root -> info > data) root->left = createBST(root->left, data);
    else if (root -> info < data) root -> right = createBST(root->right, data);
    else printf("Dupicate entry\n");
    return root;
}

void inorder (Node *root){
    if (root == NULL) return ;
    inorder(root-> left);
    cout <<root->info<<" ";
    inorder(root-> right);
}

int heightOfTree (Node *root){
    if (root == NULL) return 0;
    int h_Left = heightOfTree(root -> left);
    int h_Right = heightOfTree(root -> right);
    if ( h_Left > h_Right) return 1 + h_Left;
    else return 1 + h_Right;
}

int main (){
    Node *root = NULL;
    root = createBST(root, 12);
    root = createBST(root, 2);
    root = createBST(root, 10);
    root = createBST(root, 22);
    root = createBST(root, 21);
    root = createBST(root, 15);
    root = createBST(root, 43);
    root = createBST(root, 20);
    inorder(root);
    cout<<endl<<heightOfTree(root);
    return 0;
}

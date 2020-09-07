#include <bits/stdc++.h>
using namespace std;

struct node {
    int info;
    struct node *left = NULL, *right = NULL;
};
typedef struct node Node;

Node *createBST( Node *root, int data){
    if (root == NULL) {
        Node *temp = new Node;
        temp -> info = data;
        root = temp;
    }
    else if (root -> info > data) root -> left = createBST(root->left, data);
    else if (root -> info < data) root -> right = createBST(root -> right, data);
    else printf ("Duplicacy not allowed");
    return root;
}

void deleteTree (Node *root){
    if (root == NULL) return ;

    deleteTree(root->left);
    deleteTree(root ->right);
    cout<<"\ndeleted node "<<root->info;
    delete (root);
}

void postorder (Node *root){
    if (root == NULL) return ;
    postorder(root -> left);
    postorder(root -> right);
    cout<<root ->info<<" ";
}

int main(){
    Node *root1 = NULL;
    root1 = createBST(root1, 12);
    root1 = createBST(root1, 2);
    root1 = createBST(root1, 10);
    root1 = createBST(root1, 22);
    root1 = createBST(root1, 21);
    root1 = createBST(root1, 15);
    root1 = createBST(root1, 43);
    root1 = createBST(root1, 20);
    postorder(root1);
    cout<<"\n\n";
    deleteTree(root1);
    postorder(root1);
    return 0;
}

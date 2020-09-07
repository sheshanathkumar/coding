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



int main(){
    Node *root = NULL;
    root = createBST(root, 45);
    root = createBST(root, 30);
    root = createBST(root, 60);
    root = createBST(root, 22);
    root = createBST(root, 35);
    root = createBST(root, 50);
    root = createBST(root, 80);
    root = createBST(root, 20);
    root = createBST(root, 25);
    root = createBST(root, 70);
    root = createBST(root, 90);
    printKthNode(root, 3);
    return 0;
}

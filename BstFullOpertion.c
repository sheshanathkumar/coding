#include <stdio.h>
#include <stdlib.h>

struct tree {
    int data;
    struct tree *left , *right ;
};
typedef struct tree Tree;

Tree *createBst(Tree *root, int data){
    if(root == NULL){
        Tree *temp = (Tree *)malloc (sizeof(Tree));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
    }
    else if(root->data > data) root->left = createBst(root->left,data);
    else if(root->data < data) root->right = createBst(root->right, data);
    else {
        printf("Duplicate Entry, Not Allowed:- \n");
        return root;
    }
    return root;
}

void preorder(Tree *root){
    if(root == NULL)
        return ;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

Tree *minNode(Tree *root){
    if(root == NULL) return;
    if(root->left) minNode(root->left);
    return root;
}

Tree *maxNode(Tree *root){
    if(root == NULL) return;
    if(root->right) maxNode(root->right);
    else
    return root;
}

Tree *search (Tree *root, int key){
    if(root ->data  == key){
        printf("Present\n");
        return root;
    }
    else if(root->data > key) root->left = search(root->left, key);
    else if(root->data < key) root->right = search(root->right, key);
    else printf("no match found:- \n");
    return root;
}

void inorder(Tree *root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

Tree *deleteTree(Tree *root, int key){
    if(root == NULL){
        printf("Not Present\n");
        return root;
    }
    else if (root->data > key) root->left = deleteTree(root->left, key);
    else if(root->data < key) root->right = deleteTree(root->right, key);
    else{
        if(root->right == NULL && root->left == NULL){
            free (root);
            root = NULL;
        }
        else if(root->left == NULL){
            Tree *temp = root;
            root = root->right;
            free (temp);
        }
        else if(root->right == NULL){
            Tree *temp = root;
            root = root->left;
            free (temp);
        }
        else{
            Tree *temp = minNode(root->right);
            root->data = temp->data;
            root->right = deleteTree(root->right, temp->data);
        }
    }
    return root;
}

int main(){
    Tree *root = NULL;
    root =createBst(root, 12);
    root =createBst(root, 1);
    root =createBst(root, 14);
    root =createBst(root, 3);
    root =createBst(root, 5);
    root =createBst(root, 7);
    root =createBst(root, 4);
    root =createBst(root, 9);
    preorder(root);
    printf("\n");
    printf("%d ",minNode(root)->data);

    printf("%d ",maxNode(root)->data);
    printf("\n");
    root = search(root, 14);
    printf("\n");
    root = deleteTree(root, 5);
    inorder(root);
    printf("\n");
    return 0;
}

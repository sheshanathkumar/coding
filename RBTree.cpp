#include <bits/stdc++.h>
using namespace std;

enum Color  {Red, Black};

struct Node {
    int data;
    bool color;
    Node *left, *right, *parent;

    Node (int data) {
        this->data = data;
        left = right = parent = NULL;
        //color = Red;
    }
};

class RBTree {
    Node *root;
protected:
    void leftRotate (Node *&, Node*&);
    void rightRotate (Node *&, Node*&);
    void fixViolation (Node *&, Node*&);

public:
    RBTree () { root = NULL;}
    void inorder();
    void insert (const int &n);
};

//----------------Creating Tree------------------------

Node *BSTinsert(Node *root, Node *pt) {
    if (root == NULL) return pt;
    else if (pt -> data < root -> data) {
        root -> left = BSTinsert(root -> left, pt);
        root -> left -> parent = root;
    }
    else if(pt -> data > root -> data) {
        root -> right = BSTinsert(root->right, pt);
        root -> right -> parent = root;
    }
    return root;
}

//--------------Inserting Data --------------------

void RBTree :: insert (const int & key) {
    Node *pt = new Node (key);
    root = BSTinsert(root, pt);
    fixViolation(root, pt);
}


//--------------Violation Fixing -------------------
void RBTree ::fixViolation(Node* &root, Node* &pt) {
    Node *fat = NULL;
    Node *grand = NULL;

    while ( (pt!=root) && (pt->color != Black) &&
            (pt->parent->color == Red)){
                fat = pt->parent;
                grand = pt->parent->parent;

                if (fat == grand->right && grand->left != NULL){
                    Node *uncle = grand->left;
                    if (uncle->color == Red){
                        grand->color = Red;
                        uncle->color= Black;
                        fat->color = Black;
                        pt = grand;

                    }else {
                        if (pt == fat->left) {
                            rightRotate(root, fat);
                            pt = fat;
                            fat = pt->parent;
                        }
                        leftRotate(root, grand);
                        swap (fat->color, grand->color);
                        pt = fat;
                    }
                }else {
                    Node *uncle = grand->right;
                    if(uncle->color == Red) {
                        grand->color = Red;
                        uncle->color= Black;
                        fat->color = Black;
                        pt = grand;
                    }else {
                        if (pt == fat->right) {
                            leftRotate(root, fat);
                            pt = fat;
                            fat = pt->parent;
                        }
                        rightRotate(root, grand);
                        swap (fat->color, grand->color);
                        pt = fat;
                    }
                }
            }
    root->color = Black;
}

void inorderHelper(Node *root) {
    if (root == NULL) return ;
    inorderHelper(root->left);
    cout<<root->data<<" "<<root->color<<"     ";
    inorderHelper(root->right);
}


void RBTree::leftRotate(Node *&root, Node *&pt){
    Node *pt_right = pt->right;

    pt->right = pt_right->left;

    if (pt->right != NULL)
        pt->right->parent = pt;

    pt_right->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_right;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_right;

    else
        pt->parent->right = pt_right;

    pt_right->left = pt;
    pt->parent = pt_right;
}

void RBTree::rightRotate(Node *&root, Node *&pt){
    Node *pt_left = pt->left;

    pt->left = pt_left->right;

    if (pt->left != NULL)
        pt->left->parent = pt;

    pt_left->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_left;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_left;

    else
        pt->parent->right = pt_left;

    pt_left->right = pt;
    pt->parent = pt_left;
}

void RBTree::inorder(){  inorderHelper(root);}

int main(){
    RBTree tree;

    tree.insert(7);
    tree.insert(6);
    tree.insert(5);
    tree.insert(4);
    tree.insert(3);
    tree.insert(2);
    tree.insert(1);
    cout << "Inoder Traversal of Created Tree\n";
    tree.inorder();

    return 0;
}

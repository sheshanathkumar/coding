#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    struct node *next = NULL;
};

typedef struct node Node;

Node *push (Node *start, int data){
    Node *t = new Node ();
    t -> val = data;
    Node *current;
    if (start == NULL){
        start = t;
        current = start;
    }
    else {
        current -> next = t;
        current = t;
    }
    return start;
}

void display (Node *start){
    Node *t = start;
    while (t != NULL){
        cout <<t->val<<" ";
        t = t -> next;
    }
    cout <<"\n";
}


void Add2List (Node *a, Node *b){

    Node *start, *c;
    while (a != NULL || b != NULL){
        int res = a -> val + b -> val;

        Node *t = new Node ();
        if ( res >= 10){
            res = res % 10;
            a->next->val ++;
        }

        t -> val = res;
        if (start == NULL){
            start = t;
            c = start;
        }
        else{
            c -> next = t;
            c = t;
        }
        a = a->next, b = b->next;
    }
    display(start);
}


int main (){
    Node *s = NULL, *p = NULL, *z;
    s = push(s, 1);
    s = push(s, 4);
    s = push(s, 2);
    s = push(s, 3);
    display(s);
    p = push(p, 1);
    p = push(p, 8);
    p = push(p, 2);
    p = push(p, 3);
    display(p);
    Add2List(s, p);
    //display(z);
    return 0;
}

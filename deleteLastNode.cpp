#include <bits/stdc++.h>
using namespace std;


struct node {
        int val;
        struct node *next = NULL;
};
typedef struct node Node;

Node * push (Node * start, int data){
    Node *t = new Node();
    Node *c;
    t -> val = data;
    if (start == NULL){
        start = t;
        c = start;
    }
    else {
        c -> next = t;
        c = t;
    }
    return start;
}

void disp (Node *start){
    Node *t = start;
    while (t != NULL){
        cout << t -> val <<" ";
        t = t->next;
    }
    cout<<"\n";
}

Node * deleteLastNode (Node *start, int n){
    int i = 0;
    Node *ptr = start, *xptr, *t;
    while (ptr != NULL){
        i ++;
        ptr = ptr->next;
    }
    //cout <<i <<"\n";
    if (n > i) return NULL;
    if (n == 1 && i == 1) {
        delete start;
        return NULL;
    }
    ptr = start;
    n = i - n + 1;
    i = 1;
    if ( n == 1){
        Node *t = start;
        start = start ->next;
        t -> next = NULL;
        delete t;
        return start;
    }
    else {
        while ( i != n){
            i ++;
            xptr = ptr;
            ptr = ptr -> next;
        }
        if ( ptr -> next){
            xptr ->next = ptr -> next;
            delete ptr;
        }
        else {
            xptr -> next = NULL;
            delete ptr;
        }
    }
    return start;
}

int main (){
    Node *a = NULL;
    a = push (a,1);
    a = push (a,2);
    a = push (a,3);
    a = push (a,4);
    a = push (a,5);
    a = push (a,6);
    disp(a);
    a = deleteLastNode (a, 1);
    disp (a);
    return 0;

}

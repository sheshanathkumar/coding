#include <bits/stdc++.h>
using namespace std;

struct node{
    char ch;
    struct node *next;
}*start, *current;
typedef struct node Node;

Node *push(Node *start, char ch){
    Node *temp = new Node();
    temp->ch = ch;
    temp->next = NULL;
    if(start == NULL){
        start = temp;
        current = start;
    }
    else{
        current->next = temp;
        current = temp;
    }
    return start;
}

void print(Node *start){
    Node *ptr = start;
    while (ptr!=NULL){
        cout<<ptr->ch<<" ";
        ptr= ptr->next;
    }
    cout<<"\n";
}

int CompareString(Node *start1, Node *start2){
    Node *ptr = start1, *xptr = start2;
    while (ptr != NULL  || xptr != NULL){
        if(xptr->ch == ptr->ch){
            xptr = xptr->next;
            ptr = ptr->next;
        }
        else if(ptr->ch > xptr->ch) return 1;
        else return -1;
    }
}

int main(){
    Node *start1 = NULL, *start2 = NULL;
    char ch;
    cout<<"Create 1st string (Press 1 to quit):-\n";
    do{
        cin>>ch;
        if ( ch == '1') break;
        start1= push(start1, ch);
    }while (1);
    print(start1);
    cout<<"Create 2nd string (Press 1 to quit):-\n";
    do{
        cin>>ch;
        if(ch == '1') break;
        start2= push(start2, ch);
    }while (1);
    print(start2);
    cout<<CompareString(start1, start2);
    return 0;
}

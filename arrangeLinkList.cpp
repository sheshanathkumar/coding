#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*start = NULL, *current;
typedef struct node Node;

Node *push(Node *start,int value){
        Node *ptr = new Node();
        ptr->data = value;
        ptr->next = NULL;
        if(start == NULL){
            start = ptr;
            current = start;
        }
        else{
            current->next = ptr;
            current = ptr;
        }
        return start;
}

void print(Node *start){
    Node *ptr = start;
    while(ptr!= NULL){
        cout<<ptr->data<<"  ";
        ptr= ptr->next;
    }
    cout<<"\n";
}

void arrangeEvenOdd(Node *start){
    Node *ptr1 = start, *ptr;
    while(ptr1!=NULL){
        ptr = ptr1;
        int count = 0;
        while(ptr->next!=NULL){
            if(ptr->data %2 == 0 && ptr->next->data %2 !=0){
                count = 1;
                int temp = ptr->next->data;
                ptr->next->data = ptr->data;
                ptr->data = temp;
            }
            ptr = ptr->next;
        }
        if(cout == 0) break;
        ptr1 = ptr1->next;
    }
    print(start);
}

int main(){
    Node *start=NULL;
    int value;
    for(int i =0; i<8; i++){
        cin>>value;
        start = push(start, value);
    }
    print(start);
    arrangeEvenOdd(start);
    //print(start);
    return 0;
}


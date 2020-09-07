#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *prev, *next;
}*current;
typedef struct node Node;

Node *create(Node *start, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(start == NULL){
        start = temp;
        current = start;
    }
    else{
        current->next = temp;
        temp->prev = current;
        current = temp;
    }
    return start;
}

Node *insertBeg(Node *start, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    temp->next = start;
    start->prev = temp;
    start = temp;
    return start;
}

Node *insertEnd(Node *start, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    current->next = temp;
    temp->prev = current;
    current = temp;
    return start;
}

Node *insertAfter(Node *start, int data, int find){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    Node *ptr = start;
    while(ptr->data != find){
        ptr = ptr->next;
        if(ptr == NULL){
            cout<<"Node Not Present\n";
            return start;
        }
    }
    temp->next = ptr->next;
    ptr->next->prev = temp;
    ptr->next = temp;
    temp->prev = ptr;
    return start;
}

Node *deleteBeg(Node *start){
    Node *ptr = start;
    start = ptr->next;
    start ->prev = NULL;
    delete ptr;
    ptr->next = NULL;
    return start;
}

Node *deleteEnd(Node *start){
    Node *ptr = current;
    current = ptr->prev;
    current->next=NULL;
    delete ptr;
    return start;
}

Node *deleteAfter(Node *start, int find){
    Node *ptr = start;
    while ( ptr->data != find){
        ptr = ptr->next;
        if(ptr == NULL){
            cout<<"Node Not found\n";
            return start;
        }
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    delete ptr;
    ptr->next = NULL;
    ptr->prev = NULL;
    return start;
}

Node *reverse(Node *start){
    Node *p1 = start, *p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while(p2 != NULL){
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
    cout<<"Reverse list is:-\n";
    return start;
}

void display(Node *start){
    Node *ptr = start;
    while (ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

int main(){
    Node *start = NULL;
    int a = 1;
    for(int i=0; i<10; i++) start = create(start, a++);
    display(start);
    start = insertBeg(start,0);
    display(start);
    start = insertEnd(start,11);
    display(start);
    start = insertAfter(start, 1000,6);
    display(start);
    start = deleteBeg(start);
    display(start);
    start = deleteEnd(start);
    display(start);
    start = deleteAfter(start, 1000);
    display(start);
    start = reverse(start);
    display(start);
    return 0;
}

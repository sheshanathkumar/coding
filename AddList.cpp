#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*current;
typedef struct node Node;

Node *push(Node *start, int data){
    Node *temp = new Node();
    temp->data = data;
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
    Node *ptr= start;
    while (ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

int evaluate(Node *start){
    Node *ptr = start;
    int value = 0;
    while(ptr != NULL){
        value = value * 10+ ptr->data;
        ptr = ptr->next;
    }
    return value;
}

Node *pushBeg(Node *start, int data){
    Node *temp = new Node();
    temp ->data = data;
    temp->next = NULL;
    if(start == NULL)
        start = temp;
    else {
        temp->next = start;
        start = temp;
    }
    return start;
}

Node *sumList(int data){
    Node *start = NULL;
    while(data > 0){
        start = pushBeg(start, data%10);
        data/=10;
    }
    return start;
}

int main(){
    Node *start1 = NULL , *start2 = NULL;
    start1 = push(start1,5);
    push(start1,6);
    push(start1,3);
    print(start1);
    start2 = push(start2, 8);
    push(start2, 4);
    push(start2, 2);
    print(start2);
    int sum = evaluate(start1) + evaluate(start2);
    Node *start3 = sumList(sum);
    print(start3);
    return 0;
}

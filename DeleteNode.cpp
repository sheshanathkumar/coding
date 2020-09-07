#include <iostream>
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

Node *DeleteNode(Node *start, int beg, int upTo){
    Node *preptr, *ptr = start;
    for(int i=1; ptr!= NULL; i++){
        preptr = ptr;
        ptr = ptr->next;
        if(i == beg){
            while(upTo--){
                Node *temp = ptr;
                ptr = ptr->next;
                delete temp;
            }
            break;
        }
    }
    preptr->next = ptr;
    return start;
}

int main(){
    Node *start = NULL;
    int beg, upTo;
    start = push(start, 1);
    start = push(start, 2);
    start = push(start, 3);
    start = push(start, 4);
    start = push(start, 5);
   // start = push(start, 11);
    start = push(start, 6);
    start = push(start, 7);
    start = push(start, 8);
    print(start);
    cin>>beg>>upTo;
    DeleteNode(start, beg, upTo);
    print(start);
    return 0;
}

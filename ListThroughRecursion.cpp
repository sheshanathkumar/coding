#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next = NULL;
}*xptr;
typedef struct node Node;

Node *push(Node *start, int data){
    if(start == NULL){
        Node *temp = new Node();
        temp->data = data;
        return temp;
    }
    start->next = push(start->next, data);
    return start;
}

Node *deletionPosition(Node *ptr, int position){
    static int count = 1;

        if(position == 1){
            Node *temp = ptr;
            ptr = ptr->next;
            delete temp;
            temp = NULL;
            return ptr;
        }
        else if(count == position){

            xptr->next = ptr->next;
            delete temp;
            temp = NULL;
            return ptr;
        }
        else{
            count++;
            xptr = ptr;

            ptr->next = deletionPosition(ptr->next, position);
        }
    return ptr;
}

void print(Node *start){
    if(start == NULL) return;
    cout<<start->data<<" ";
    print(start->next);
}

int main(){
    Node *start= NULL;
    start = push(start, 10);
    start = push(start, 40);
    start = push(start, 60);
    start = push(start, 80);
    start = push(start, 20);
    start = push(start, 30);
    print(start);
    cout<<"\n";
    start = deletionPosition(start, 4);
    print(start);
    return 0;
}

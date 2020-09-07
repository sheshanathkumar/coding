#include <bits/stdc++.h>
#include <ctime>
using namespace std;

struct node {
    int data;
    struct node *next;
} *current;
typedef struct node Node;

Node *push(Node *start, int value){
    Node *temp = new Node();
    temp ->data = value;
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

void printRandom(Node *start){
    if(start == NULL)
        return;
    Node *ptr = start;
    srand(time(NULL));
    int res = start->data;
    for(int n =2; ptr!=NULL; n++){
        if(rand() % n == 0)
            res= ptr->data;
        ptr=ptr->next;
    }
    cout<<"Randomly Selected:-  "<<res<<endl;
}

void print(Node *start){
    Node *pr=start;
    while (pr!=NULL){
        cout<<pr->data<<" ";
        pr =pr->next;
    }
}

int main(){
    Node *start = NULL;
   /* int value;
    for(int j=0; j<5; j++){
        cin>>value;
        start = push(start, value);
    }*/
    start=push(start, 10);
    start=push(start, 40);
    start=push(start, 20);
    start=push(start, 70);
    print(start);
    printRandom(start);
    return 0;
}

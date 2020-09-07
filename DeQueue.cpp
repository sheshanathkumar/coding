#include <iostream>
#include <cstdlib>
#define max 10
using namespace std;

int Dq[max];
int rear = -1;
int front = -1;
void insertFront(int data);
void insertBack (int data);
int delFront();
int delBack();
void print();
int isEmpty();
int isFull();5

void insertFront(int data){
    if(isFull()){
        cout<<"Queue Overflow\n";
        return;
    }
    if(front == -1){
        front= 0;
        rear = 0;
    }
    else if(front == 0)
        front = max-1;
    else front--;
    Dq[front] = data;
    cout<<front<<" " <<rear<<endl;
}

void insertBack(int data){
    if(isFull()){
        cout<<"Queue Overflow\n";
        return;
    }
     if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear == max-1) rear = 0;
    else rear++;
    Dq[rear] = data;
    cout<<front<<" " <<rear<<endl;
}

int delBack(){
    if(isEmpty()){
        cout<<"Queue Underflow\n";
        exit (1);
    }
    int data = Dq[rear];
    if(rear == 0) rear = max-1;
    else if(front == rear) {
        front = -1;
        rear = -1;
    }
    else rear--;
    cout<<front<<" " <<rear<<endl;
    return data;
}

int delFront(){
    if(isEmpty()){
        cout<<"Queue Underflow\n";
        exit (1);
    }
    int data = Dq[front];
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if (front == max-1) front = 0;
    else front ++;
    cout<<front<<" " <<rear<<endl;
    return data;
}

int isFull(){
    if((front == 0 && rear == max-1) || (front == rear +1))
        return 1;
    return 0;
}

int isEmpty(){
    if(front == -1) return 1;
    return 0;
}

void print(){
    if(isEmpty()){
        cout<<"Queue Underflow\n";
        print();
    }
    if(front <= rear ){
        for(int i=front; i<=rear; i++) cout<<Dq[i]<<" ";
    }
    else{
        for(int i = front; i<= max-1; i++) cout<<Dq[i] << " ";
        for(int i=0; i<= rear; i++) cout<<Dq[i] << " ";
    }
    cout<<"\n";

}

int main(){
    int choice, data;
    while(1){
        cout<<"\n\nPress\n1-Insert From front\n2-Insert from Back\n3-Delete From Front\n4-Insert From Back\n5-Print Queue\nAny 0ther-Exit------ ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter data:- ";
            cin >> data;
            insertFront(data);
            break;
        case 2:
            cout<<"Enter data:- ";
            cin >> data;
            insertBack(data);
            break;
        case 3:
            cout<<"Deleted Item:- "<<delFront();
            break;
        case 4:
            cout<<"Deletd Item:- "<<delBack();
            break;
        case 5:
            print();
            break;
        default:
            exit (1);
        }
    }
}

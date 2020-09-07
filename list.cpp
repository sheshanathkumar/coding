#include <iostream>
using namespace std;

class node {
    int data;
    node *next;
public:
    node () {}
    void setData (int x) { data = x;}
    void setNext (node *aNext) {next = aNext;}
    int Data() {return data;}
    int Next() {return next;}
};

class List {
    node *head;

public:
    List () {
        head = NULL;
    }
    void add (int x) {
        node *newNode = new Node ();
        newNode->setData(x);
        newNode->setNext(NULL);
        Node *tmp = head;

        while (tmp->Next() != NULL) {
            tmp = tmp->Next();
        }
        tmp->setNext(newNode);
    }
};

This Program is not complete..............................................

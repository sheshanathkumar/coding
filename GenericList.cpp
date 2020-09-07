#include <iostream>
using namespace std;

struct node{
    void *data;
    struct node *next;
}*current;
typedef struct node Node;

Node *push(Node *start, void *data)

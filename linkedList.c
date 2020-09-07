#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;
};

struct list *addData (struct list *start, int val);
void display (struct list *start);

int main () {
    struct list *start = NULL;
    start = addData(start, 5);
    start = addData(start, 8);
    start = addData(start, 20);
    start = addData(start, 23);
    start = addData(start, 5);
    start = addData(start, 8);
    start = addData(start, 20);
    start = addData(start, 23);
    display(start);
    return 0;
}

struct list *addData(struct list *start, int val) {
    struct list *temp = (struct list *)malloc(sizeof(struct list));
    temp->data = val;
    temp->next = NULL;
    if (start == NULL) {
        start = temp;

    } else {
        struct list *ptr = start;
        while (ptr -> next != NULL) ptr = ptr -> next;
        ptr -> next = temp;
    }
    return start;
}

void display (struct list *start ){
    struct list *ptr = start;
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

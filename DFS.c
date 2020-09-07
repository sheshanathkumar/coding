#include <stdio.h>
#include <stdlib.h>
#define max 100
#define initial 1
#define visited 2

int n;
int adj[max][max];
int state[max];
void creatGraph();
void DFT();
void DFS(int);
void push(int);
int pop();
int isEmpty();
int stack[max];
int top = -1;

void DFT(){
    int i, v;
    for(i=0; i<n; i++) state[i] = initial;
    printf("Enter starting vertex:  ");
    scanf("%d",&v);
    DFS(v);
}

void DFS(int v){
    int i;
    push(v);
    while(!isEmpty()){
        v = pop();
        if(state[v] == initial){
            printf("%d ",v);
            state[v] = visited;
        }
        for(i=n-1; i>=0; i--){
            if(adj[v][i] == 1 && state[i] == initial)
                push(i);
        }
    }
    printf("\n");
}

void push(int a){
    if(top== max-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = a;
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow");
        return;
    }
    return stack[top--];
}

int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}

void creatGraph(){
    int origin, destin, maxEdge, i;
    printf("Enter Number of Vertex:-  ");
    scanf("%d",&n);
    maxEdge = (n * (n-1));
    for(i =1; i<=maxEdge; i++){
        printf("Enter edge between (Press -1 -1 to quit):- ");
        scanf("%d %d",&origin, &destin);
        if(origin == -1 && destin == -1) break;
        else if(origin < 0 || destin < 0 || origin >=n || destin >= n){
            printf("Invalid Lov=cation Try Again\n ");
            i--;
        }
        else adj[origin][destin] = 1;
    }
}

int main(){
    creatGraph();
    DFT();
}

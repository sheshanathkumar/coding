#include <stdio.h>
#include <stdio.h>
#define max 100
#define initial 1
#define waiting 2
#define visited 3

int n,adj[max][max], state[max];
int front = -1, rear = -1, q[max];

void BFT();
void BFS(int v);
void createGraph();

void insertQ(int data);
int deleteQ();
int isEmpty();

void insertQ(int data){
    if(rear == max-1){
        printf("Queue Overflow\n");
        return;
    }
    else{
        if(front == -1) front = 0;
        rear++;
        q[rear]= data;
    }
}

int deleteQ(){
    if(isEmpty() ){
        printf("Queue Underflow\n");
        return;
    }
    return q[front++];
}

int isEmpty(){
    if(front == -1 || front> rear)
        return 1;
    return 0;
}

void BFT(){
    int v, i, connect = 1;
    for(i=0; i<n; i++) state[i] = initial;
    printf("Enter the starting vertex:-  ");
    scanf("%d",&n);
    BFS(v);
  /*  for(v=0; v<n; v++){
        if(state[v] == initial){
            connect = 0;
            break;
        }
    }
    if(connect) printf("Graph is CONNECTED\n");
    else printf("Graph is DISCONNECTED\n");*/
}

void BFS(int v){
    insertQ(v);
    int i;
    state[v] = waiting;
    while(!isEmpty()){
        v = deleteQ();
        state[v] = visited;
        printf("%d\n",v);
        for(i=0; i<n; i++){
            if(adj[v][i] == 1 && state[i] == initial){
                insertQ(i);
                state[i] = waiting;
            }
        }
    }
}

void createGraph(){
    int origin, destine, maxEdge,i;
    printf("Enter number of vertex:-  ");
    scanf("%d",&n);
    maxEdge = (n * (n-1));
    for(i=0; i<maxEdge; i++){
        printf("(Press -1 -1 to quit)Enter edge between:- ");
        scanf("%d %d",&origin, &destine);
        if(origin == -1 && destine == -1) break;
        else if(origin >= n || destine >= n || origin <0 || destine <0){
           printf("Invalid Location \n");
            i--;
        }
        else adj[origin][destine] = 1;
    }
}

int main(){
    createGraph();
    BFT();
    return 0;
}

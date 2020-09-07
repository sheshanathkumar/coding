#include <stdio.h>
#include <stdlib.h>
#define max 100
#define initial 1
#define waiting 2
#define visited 3
#define nil -1
#define infinity 9999
#define s(x) scanf("%d",&x)

int q[max];
int rear = -1, front = -1;
void insertQ(int x);
int deleteQ();
int isEmpty();

int n;
int adj[max][max];
int state[max];
int predecessor[max];
int dist[max];
int path[max];
void createGraph();
void BFS(int x);
void BFT();

void insertQ(int x){
    if(rear == max-1) printf("Queue Overflow\n");
    else{
        if(front == -1) front = 0;
        rear+=1;
        q[rear]=x;
    }
}

int deleteQ(){
    if(isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }
    int delItem = q[front];
    front+=1;
    return delItem;
}

int isEmpty(){
    if(front == -1 || front > rear) return 1;
    return 0;
}

void BFT(){
    int i,v;
    for(i =0; i<n; i++) {
        state[i] = initial;
        predecessor[i] = nil;
        dist[i] = infinity;
    }
    printf("Enter starting vertex:-  ");
    s(v);
    BFS(v);
}

void BFS(int v){
    int i;
    insertQ(v);
    state[v] = waiting;
    dist[v] = 0;
    predecessor[v] = nil;
    while(!isEmpty()){
        v = deleteQ();
        state[v] = visited;
        for(i=0; i<n; i++){
            if(adj[v][i] == 1 && state[i]== initial){
                insertQ(i);
                state[i] = waiting;
                predecessor[i]=v;
                dist[i] = dist[v]+1;
            }
        }
    }
}

void createGraph(){
    int i,origin, destine, maxEdge;
    printf("ENter number of Vertex:-  ");
    s(n);
    maxEdge = n*(n-1);
    for(i=0; i<maxEdge; i++){
        printf("(Press -1 -1 to exit) Enter vertex between:-  ");
        s(origin);
        s(destine);
        if(origin == -1 || destine == -1) break;
        else if(origin >= n || destine >= n|| origin <0|| destine <0){
            printf("Invalid Location try again:-  ");
            i--;
        }
        else adj[origin][destine] = 1;
    }
}

int main(){
    createGraph();
    BFT();
   int count, i, u, v;
    while (1){
        count =0;
        printf("Enter destination vertex:-  ");
        s(v);
        if(v >= n || v<-1) {
            printf("Wrong Location");
            continue;
        }
        else if(v == -1) break;
        else if(dist[v] == infinity) printf("No path available:--\n");
        else {
            while(v!=nil){
                path[count++] = v;
                u = predecessor[v];
                v = u;
            }
            printf("\n------Shortest path--------\n");
            for(i =count-1; i>=0; i--)
                printf("%d->", path[i]);
            printf("\b\b");
            printf("\n");
        }
    }
    return 0;
}

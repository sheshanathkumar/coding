#include <bits/stdc++.h>
#define N 4
using namespace std;

bool solveMaze( int maze[N][N], int x, int y);
bool isSafe(int maze[N][N], int x, int y);
void printArr(int maze[N][N]);

int sol[N][N] = {0};

int main(){
    int maze[N][N] = { {1,1,0,0}, {1,1,1,0}, {0,1,1,0}, {0,0,1,1} };
    if (!solveMaze(maze, 0,0)  )return false;
    printArr(maze);
    cout<<"\n\n";
    printArr(sol);
    return 0;
}

bool solveMaze(int maze[N][N], int x, int y){
    if ( x == N-1 && y == N-1){
        sol[x][y] = 1;
        return true;
    }

    if(isSafe(maze, x, y)) {
        sol[x][y] = 1;
        if(solveMaze(maze, x+1, y) ) return true;
        if(solveMaze(maze, x, y+1)) return true;
        sol[x][y] = 0;
        return false;
    }
    return false;
}

bool isSafe(int maze[N][N], int x, int y){
    if ( x >= 0 && y >= 0 && x < N && y < N && maze[x][y] == 1) return true;
    return false;
}

void printArr(int maze[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            cout<<maze[i][j]<<" ";
        cout<<"\n";
    }
}

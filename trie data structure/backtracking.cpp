/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/
#include<bits/stdc++.h>
using namespace std;
void print(int ** solution,int n){
   for(int i=0; i<n;i++){
            for(int j =0; j<n;j++){
                cout<<solution[i][j]<<" ";
            }
        }
        cout<<endl; 
}
void mazehelp(int** maze,int n, int **solution,int x , int y){
    
    if(x==n-1|| y==n-1){
        solution[x][y] =1;
print(solution,n);
        solution[x][y] =0;
        return;
    }
    
    if(x<0||y<0|| x>=n||y>=n || maze[x][y]==0 || solution[x][y]==1){
        return ;
    }
    solution[x][y] =1;
    mazehelp(maze,n,solution,x-1,y);
    mazehelp(maze,n,solution,x+1,y);
    mazehelp(maze,n,solution,x,y-1);
    mazehelp(maze,n,solution,x,y+1);
    solution[x][y] =0;
}

void rateMaze(int **maze,int n){

    
    int ** solution = new int*[n];
    for(int i=0; i<n ; i++){
        solution[i] = new int[n];
    }
    
    for(int i =0; i<n;i++){
memset(solution[i],0,n*sizeof(int));
    }
    
    mazehelp(maze,n,solution,0,0);
}

int main() {
long int n;
cout<<"enter size<"<<" ";
    cin>>n;
    int ** maze = new int*[n];
    for(int i=0 ;i<n;i++){
        maze[i] = new int[n];
    }
    
   for(int i=0; i<n ; i++){
      for(int j=0; j<n ; j++){
          cin>>maze[i][j];
      }
      
   }
    

rateMaze(maze,n);
	return 0;
}

#include <iostream>
#include <stack>
using namespace std; 

void DFS(int u, int A[][8], int n){
    stack<int> S;
    int visited[8] {0};
    S.emplace(u);
 
    while (!S.empty()){
        u = S.top();
        S.pop();
        if (visited[u] != 1){
            cout << u << ", " << flush;
            visited[u] = 1;
            for (int v=n-1; v>=0; v--){
                if (A[u][v] == 1 && visited[v] == 0){
                    S.emplace(v);
                }
            }
        }
    }
}
int main (){
    int A[8][8] = {{0,0,0,0,0,0,0,0},
                   {0,0,1,0,1,1,0,0},
                   {0,1,0,1,0,1,0,0},
                   {0,0,1,0,0,1,1,1},
                   {0,1,0,0,0,1,0,0},
                   {0,1,1,1,1,0,1,0},
                   {0,0,0,1,0,1,0,1},
                   {0,0,0,1,0,0,1,0}};
 
    int u = 1;
    cout << "DFS From Vertex: " << u << " -> " << flush;
    DFS(u, A, 8);

return 0;
}
#include <iostream>
#define I 32767 
#define V 7 
#define E 7  
using namespace std;
 
void PrintMCST(int T[][V-1], int A[][E]){
    cout << "\nMinimum Cost Spanning Tree Edges\n" << endl;
    for (int i {0}; i<V-1; i++){
        cout << "[" << T[0][i] << "]-----[" << T[1][i] << "]" << endl;
    }
    cout << endl;
}
 
// Set operations: Union and Find
void Union(int u, int v, int s[]){
    if (s[u] < s[v]){
        s[u] += s[v];
        s[v] = u;
    } else {
        s[v] += s[u];
        s[u] = v;
    }
}
 
int Find(int u, int s[]){
    int x = u;
    int v = 0;
 
    while (s[x] > 0){
        x = s[x];
    }
 
    while (u != x){
        v = s[u];
        s[u] = x;
        u = v;
    }
    return x;
}
 
void KruskalsMCST(int A[V][V]){
    int T[2][V-1];  // Solution array
    int track[E] {0};  // Track edges that are included in solution
    int set[V+1] = {-1, -1, -1, -1, -1, -1, -1, -1};  // Array for finding cycle
 
    int i {0};
    while (i < V-1){
        int min = I;
        int u {0};
        int v {0};
        int k {0};
 
        // Find a minimum cost edge
        for (int j {0}; j<E; j++){
            if (track[j] == 0 && A[2][j] < min){
                min = A[2][j];
                u = A[0][j];
                v = A[1][j];
                k = j;
            }
        }
 
        // Check if the selected min cost edge (u, v) forming a cycle or not
        if (Find(u, set) != Find(v, set)){
            T[0][i] = u;
            T[1][i] = v;
 
            // Perform union
            Union(Find(u, set), Find(v, set), set);
            i++;
        }
        track[k] = 1;
    }
 
    PrintMCST(T, A);
}
 
int main() {
    int edges[V][V] = {{I,I,I,I,I,I,I},
                       {I,I,10,I,30,45,I},
                       {I,10,I,50,I,40,25},
                       {I,I,50,I,I,35,15},
                       {I,30,I,I,I,I,20},
                       {I,45,40,35,I,I,55},
                       {I,I,25,15,20,55,I}};
 
    KruskalsMCST(edges);
 
    return 0;
}
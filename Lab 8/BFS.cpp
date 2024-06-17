#include<bits/stdc++.h>
using namespace std;

/* Use for input:
1 2
1 4
1 3
2 6
4 7
3 8
3 7
6 10
9 10
9 7
7 8
8 5
10 5
 */

vector<int>Node_Vec[100];
int level[12]; // depends on the size of input

void BFS(int source)
{
    queue <int> Q;
    Q.push(source);
    level[source] = 0;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int j = 0; j < Node_Vec[u].size(); j++) // Same loop as printing
        {
            int v = Node_Vec[u][j];
            if(level[v] == -1)
            {
                level[v] = level[u] + 1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int node_no, edge_no;
    printf("Enter the number of nodes: ");
    scanf("%d", &node_no);
    printf("Enter the number of edges: ");
    scanf("%d", &edge_no);
    for(int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        scanf("%d %d", &nodeA, &nodeB);
        Node_Vec[nodeA].push_back(nodeB);
        Node_Vec[nodeB].push_back(nodeA); // for undirected graph
    }


// Print Node Adjacency List by traversing the list
    for(int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for(int j = 0; j < Node_Vec[i].size(); j++)
        {
            printf("%d ", Node_Vec[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i <= node_no; i++)
    {
        level[i] = -1;
    }
    BFS(1); // Assuming source = 1
    cout << endl << level[10] << endl; // Distance from source to 10
}


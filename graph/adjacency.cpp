#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> edges) {
    vector<int> ans[n];

    // Build the adjacency list
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];  // corrected from edges[i][j] to edges[i][0]
        int v = edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u); // because it's an undirected graph
    }

    // Format the adjacency list for output
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        adj[i].push_back(i); // include the node itself
        for (int j = 0; j < ans[i].size(); j++) {
            adj[i].push_back(ans[i][j]);
        }
    }

    return adj;
}

int main() {
    int n = 5; // number of nodes
    int m = 6; // number of edges

    // List of edges
    vector<vector<int>> edges = {
        {0, 1},
        {0, 4},
        {1, 2},
        {1, 3},
        {1, 4},
        {2, 3}
    };

    vector<vector<int>> adjList = printAdjacency(n, m, edges);

    // Print the adjacency list
    for (int i = 0; i < adjList.size(); i++) {
        cout << "Node " << adjList[i][0] << ": ";
        for (int j = 1; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

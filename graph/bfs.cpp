#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>

using namespace std;

// Function to prepare the adjacency list
void preparedAdjList(unordered_map<int, list<int>>& adjList, vector<pair<int, int>>& edges) {
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u); // undirected graph
    }
}

// Breadth-First Search function
void bfs(unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited, vector<int>& ans, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;  // corrected from == to =

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for (auto i : adjList[frontNode]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

// Main BFS function to handle disconnected components
vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    preparedAdjList(adjList, edges);

    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;
}

// Driver code
int main() {
    int vertex = 5;
    vector<pair<int, int>> edges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {2, 4}
    };

    vector<int> bfsTraversal = BFS(vertex, edges);

    cout << "BFS Traversal: ";
    for (int node : bfsTraversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

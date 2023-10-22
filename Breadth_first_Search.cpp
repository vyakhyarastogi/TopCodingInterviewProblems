

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <list>
using namespace std;
template <typename T>

class Graph
{
public:
    // storing neoghbpur of nodes
    // unordered_map<int,list<int>>adjList;-->unweighted
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction=0-->undirected graph
        // direction=1->directed graph

        //  create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // create a edge from v to u
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";

            for (auto neighbour : node.second)
            {
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }
    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << ",";

            // insert neighbours
            for (auto neighbour : adjList[node])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
};

int main()
{
    Graph<int> g;

    unordered_map<int, bool> visited;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(3, 7, 0);
    g.addEdge(7, 6, 0);
    g.addEdge(7, 4, 0);

    g.printAdjacencyList();

    cout << "--BFS Traversel--" << endl;

    for (int i = 0; i <= 7; i++)
    {
        if (!visited[i])
        {
            g.bfs(i, visited);
        }
    }
}
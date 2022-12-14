/*
1971. Find if Path Exists in Graph
Easy

There is a bi-directional graph with n vertices, where each vertex is labeled
from 0 to n - 1 (inclusive). The edges in the graph are represented as a 2D
integer array edges, where each edges[i] = [ui, vi] denotes a bi-directional
edge between vertex ui and vertex vi. Every vertex pair is connected by at most
one edge, and no vertex has an edge to itself.

You want to determine if there is a valid path that exists from vertex source to
vertex destination.

Given edges and the integers n, source, and destination, return true if there is
a valid path from source to destination, or false otherwise.
 */

#include <bits/stdc++.h>

using namespace std;

bool validPath(int n, vector<vector<int>> &edges, int source, int destination) {
  if (source == destination)
    return true;
  vector<set<int>> adjlst(n);
  vector<bool> visited(n, false);
  for (auto e : edges) {
    adjlst[e[0]].insert(e[1]);
    adjlst[e[1]].insert(e[0]);
  }
  queue<int> que;
  que.push(source);
  visited[source] = true;
  while (!que.empty()) {
    int head = que.front();
    visited[head] = true;
    for (auto node : adjlst[head]) {
      if (node == destination)
        return true;
      if (!visited[node])
        que.push(node);
    }
    que.pop();
  }
  return false;
}

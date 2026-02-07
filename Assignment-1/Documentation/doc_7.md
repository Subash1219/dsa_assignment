1. Data Structures
   A weighted graph is represented using an adjacency matrix:
   graph[i][j] stores the weight of the edge from vertex i to vertex j.
   A value of 0 indicates no edge.

2. Functions Implemented
   -> minDistance() :
      This finds the unvisited vertex with the minimum tentative distance. It scans all vertices selects the vertex with the smallest distance value that is not yet visited

   -> dijkstra(int src)
      This implements Dijkstra’s shortest path algorithm.It initializes distance of all vertices to infinity, Sets distance of source vertex to 0. Repeatedly selects the nearest unvisited vertex, Updates distances of its adjacent vertices if a shorter path is found and prints the shortest distance from the source to every vertex

3. Main()
   a. Input section for graph size and weights
   b. Input for source vertex
   c. Invocation of Dijkstra’s algorithm
   d. Output of shortest path distances

4. Output
   Enter number of vertices: 5
   Enter adjacency matrix (0 if no edge):
   0 10 0 30 100
   10 0 50 0 0
   0 50 0 20 10
   30 0 20 0 60
   100 0 10 60 0
   Enter source vertex: 0
   Vertex  Distance from Source
   0       0
   1       10
   2       50
   3       30
   4       60
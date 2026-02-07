1. Data STructure
   An undirected graph is represented using an adjacency matrix. The adjacency matrix is a 2D array adj[MAX][MAX]. If there is an edge between vertex i and vertex j, then:
   adj[i][j] = 1 and adj[j][i] = 1  
   If no edge exists, the value is 0.

2. Function implemented
   -> bfs(int start) :
      This performs Breadth First Search (BFS) traversal starting from a given vertex. It uses a queue to visit vertices level by level, Marks vertices as visited to avoid repetition and prints vertices in BFS order.
   
   -> dfs(int v) :
      It performs Depth First Search (DFS) traversal starting from a given vertex. It uses recursion, visits a vertex and explores as far as possible along each branch and uses the visited array to prevent revisiting vertices

3. Main()
   a. Reads number of vertices
   b. Reads adjacency matrix representation of the graph
   c. Takes starting vertex
   d. Calls bfs() function 
   e. Resets visited array
   f. Calls dfs() function
   g. Displays traversal outputs

4. Output
   Enter number of vertices: 4
   Enter adjacency matrix:
   0 1 1 0
   1 0 1 1
   1 1 0 1
   0 1 1 0
   Enter starting vertex: 0
#include <stdio.h>

#define MAX 10
#define INF 9999

int graph[MAX][MAX];
int dist[MAX];
int visited[MAX];
int n;

/* Find vertex with minimum distance */
int minDistance()
{
    int min = INF, min_index = -1;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0 && dist[i] < min)
        {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

/* Dijkstra’s Algorithm */
void dijkstra(int src)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int u = minDistance();
        visited[u] = 1;

        for (int v = 0; v < n; v++)
        {
            if (!visited[v] && graph[u][v] != 0 &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%d\n", i, dist[i]);
}

int main()
{
    int src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &src);

    dijkstra(src);

    return 0;
}


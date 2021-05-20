#include <stdio.h>

#define inf 9999

void main()
{
    int pre_defined_input_graph[4][4] = {{0, inf, -2, inf}, {4, 0, 3, inf}, {inf, inf, 0, 2}, {inf, -1, inf, 0}}; // Matrix according to the question.
    int v = 4;                       						// number of vertex.
    int all_pair_shortest_path_matrix[v][v];             	// All pair shortest path matrix.
	int i,j,k,a,b;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            all_pair_shortest_path_matrix[i][j] = pre_defined_input_graph[i][j];
        }
    }

    for (k = 0; k < v; k++)
    {
        for (i = 0; i < v; i++)
        {
            for (j = 0; j < v; j++)
            {
                if (all_pair_shortest_path_matrix[i][k] + all_pair_shortest_path_matrix[k][j] < all_pair_shortest_path_matrix[i][j])
                {
                    all_pair_shortest_path_matrix[i][j] = all_pair_shortest_path_matrix[i][k] + all_pair_shortest_path_matrix[k][j];
                }
            }
        }
    }

    printf("\n:: The final all pair shortest path matrix ::\n");
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            if (all_pair_shortest_path_matrix[i][j] == inf)
            {
                printf("inf");
            }
            else
            {
                printf(" %d\t", all_pair_shortest_path_matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("\The shortest path from A to B :- \n");
    printf("Enter the starting vertex : ");
    scanf("%d", &a);
    printf("Enter the ending vertex : ");
    scanf("%d", &b);
    printf("\nThe shortest Path between Vertex %d and Vertex %d is %d\n", a, b, all_pair_shortest_path_matrix[a][b]);
}

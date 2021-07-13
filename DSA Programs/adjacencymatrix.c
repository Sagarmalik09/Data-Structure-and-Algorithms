#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void un_directed_graph(int adj_matrix[MAX][MAX],int);
void directed_graph(int adj_matrix[MAX][MAX],int);
void print_matrix(int adj_matrix[MAX][MAX],int);
void init(int adj_matrix[MAX][MAX],int);
int main()
{
    int n,choice;
    int adj_matrix[MAX][MAX];
    printf("\nEnter total number of vertices...");
    scanf("%d",&n);
    init(adj_matrix,n);
    while(1)
    {
        printf("\n1.Undirected Graph...");
        printf("\n2.Directed Graph...");
        printf("\n3.Print Adjacency Matrix...);
        printf("\n4.Exit...");
        printf("\nEnter your choice...");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            un_directed_graph(adj_matrix,n);
            break;
            case 2:
            directed_graph(adj_matrix,n);
            break;
            case 3:
            print_matrix(adj_matrix,n);
            break;
            case 4:
            exit(1);
        }
    }
    return 0;
}
void init(int adj_matrix[MAX][MAX],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            adj_matrix[i][j]= -1;
        }
    }
}
void un_directed_graph(int adj_matrix[MAX][MAX],int n)
{
    int i,j;
    char adj;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(adj_matrix[i][j]==-1 || adj_matrix[j][i]==-1)
            {
                printf("\nvertex %d is adjacent or not to vertex %d",j,i);
                scanf("%c",&adj);
                if(adj=='y' || adj=='Y')
                {
                    adj_matrix[i][j]= 1;
                    adj_matrix[j][i]= 1;
                }
                else
                {
                    adj_matrix[i][j]= 0;
                    adj_matrix[j][i]= 0;
                }
            }
            
        }
    }
}
void directed_graph(int adj_matrix[MAX][MAX],int n)
{
    int i,j;
    char adj;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\nvertex %d is adjacent or not to vertex %d....",j,i);
            scanf("%c",&adj);
            if(adj=='y' || adj=='Y')
                adj_matrix[i][j]= 1;
            else 
                adj_matrix[i][j]= 0;
        }
    }
}
void print_matrix(int adj_matrix[MAX][MAX],int n)
{
    int i,j;
    printf("\nMatrix is...");
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            printf("\t%d",adj_matrix[i][j]);    
        }
    }
}
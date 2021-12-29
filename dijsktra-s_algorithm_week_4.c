#include <stdio.h>

int main()
{
    int n,i,j,p,v;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    int cost[n+1][n+1];
    printf("Enter cost matrix: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    printf("Enter end node(v): ");
    scanf("%d",&v);
    printf("Enter no. of paths: ");
    scanf("%d",&p);
    int path[p+1][n+1],dist[p+1];
    printf("Enter path matrix: \n");
    for(i=1;i<=p;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&path[i][j]);
        }
    }
    int row,col;
    for(i=1;i<=p;i++){
        dist[i]=0;
        row=1;
        for(j=1;j<=5;j++){
            if(row!=v){
                col = path[i][j+1];
                dist[i] = dist[i]+cost[row][col];
            }
            row=col;
        } 
    }
    int min = dist[1], index;
    for(i=1;i<=p;i++){
        if(dist[i]<=min){
            min = dist[i];
            index = i;
        }
    }
    printf("The min dist is %d\n",min);
    printf("min dist path:\n");
    for(i=1;i<=n;i++){
        if(path[index][i]!=0){
            printf("%d->",path[index][i]);
        }
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct packet{
    int atime;
    int size;
}p[50];

int main(){
    int i,n,m,k=0;
    int bsize,bfilled,outrate;
    printf("Enter the number of packets: ");
    scanf("%d",&n);
    printf("Enter packets in the order of their arrival time \n");
    for(i=0;i<n;i++){
        printf("ENter the time and size: ");
        scanf("%d %d",&p[i].atime,&p[i].size);
    }
    printf("Enter the bucket size: ");
    scanf("%d",&bsize);
    printf("Enter the output rate: ");
    scanf("%d",&outrate);
    m=p[i-1].atime;
    i=1;
    k=0;
    bfilled=0;
    while(i<=m || bfilled!=0){
        printf("\n\nAt time %d",i);
        if(p[k].atime == i){
            if(bsize >= bfilled + p[k].size){
                bfilled +=p[k].size;
                printf("\n%d byte packet is inserted",p[k].size);
                k++;
            }else{
                printf("\n%d byte packet is discarder",p[k].size);
                k++;
            }
        }
        if(bfilled == 0){
            printf("\n No packet to transmitte");
        }else if(bfilled >= outrate){
            bfilled -= outrate;
            printf("\n%d bytes transfered",outrate);
        }else{
            printf("\n%d bytes transfered",bfilled);
            bfilled=0;
        }
        printf("\nPackets in the bucket %d byte",bfilled);
        i++;
    }
    return 0;
}
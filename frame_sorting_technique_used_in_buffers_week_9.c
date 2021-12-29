#include <stdio.h>
#include<stdlib.h>
struct frame{
    int fslno;
    char finfo[20];
}arr[10];
int n;

void sort(){
    int i,j,ex;
    struct frame temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i].fslno > arr[j].fslno){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                ex++;
            }
            
        }
    }
}
int main()
{
    int i;
    printf("Enter no. of frames: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        arr[i].fslno = rand() % (50);
        printf("Enter the frame contents for sequence number %d : ",arr[i].fslno);
        scanf("%s",arr[i].finfo);
        
    }
    sort();
    printf("\n The frames in sequence \n");
    for(i=0;i<n;i++){
        printf("\n%d\t%s",arr[i].fslno,arr[i].finfo);
    }
    return 0;
}

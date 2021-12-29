//Frame sorting
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int fslno[20];
char finfo[20][20];
int n;

void sort(){
    int i,j;
    int temp;
    char temp1[20];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(fslno[i] > fslno[j]){
                temp = fslno[i];
                fslno[i] = fslno[j];
                fslno[j] = temp;
                strcpy(temp1,finfo[i]);
                strcpy(finfo[i],finfo[j]);
                strcpy(finfo[j],temp1);
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
        printf("Enter sequence number: ");
        scanf("%d",&fslno[i]);
        printf("Enter the frame contents for sequence number %d : ",fslno[i]);
        scanf("%s",finfo[i]);
        
    }
    sort();
    printf("\n The frames in sequence \n");
    for(i=0;i<n;i++){
        printf("\n%d\t%s",fslno[i],finfo[i]);
    }
    return 0;
}

/*
Enter no. of frames: 3
Enter sequence number: 3
Enter the frame contents for sequence number 3 : c
Enter sequence number: 1
Enter the frame contents for sequence number 1 : a
Enter sequence number: 2
Enter the frame contents for sequence number 2 : b

 The frames in sequence 

1       a
2       b
3       c
*/



/*#include <stdio.h>
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

*/

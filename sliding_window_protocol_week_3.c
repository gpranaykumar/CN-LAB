#include <stdio.h>

int main()
{
    int w,i,f,frames[50];
    printf("Enter window size: ");
    scanf("%d",&w);
    printf("Enter no of frames: ");
    scanf("%d",&f);
    printf("Enter %d frames : \n",f);
    
    for(i=1;i<=f;i++){
        scanf("%d",&frames[i]);
    }
    printf("\n\n");
    printf("With sliding window protocol the frames will be sent in the following manner(assuming no corruption of frames)\n");
    printf("After sending %d frames at each stage sender waits for acknowledgement sent by the reciever\n",w);
    
    for(i=1;i<=f;i++){
        if(i%w == 0){
            printf("%d ",frames[i]);
            printf("\nAcknowledgement of above frames sent is recieved by sender\n\n");
        }else{
            printf("%d ",frames[i]);
        }
    }
    if(f%w!=0){
        printf("\nAcknowledgement of above frames sent is recieved by sender\n\n");
    }

    return 0;
}

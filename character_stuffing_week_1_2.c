#include <stdio.h>
#include<string.h>
int main()
{
    char a[30],b[]="dle";
    int n,i,j,p,count=0;
    printf("Enter frame: ");
    scanf("%s",a);
    n=strlen(a);
    printf("Frame after stuffing : \n");
    printf("DLESTX ");
    for(i=0;i<n;i++){
        count=0;
        p=i;
        for(j=0;j<3;j++){
            if(a[i]==b[j]){
                count++;
                i++;
            }
        }
        if(count!=3){
            i=p;
        }
        if(count==3){
            printf("dledle");
            i--;
        }else{
            printf("%c",a[i]);
        }
    }
    printf(" DLEETX");
    
   
    
    return 0;
}

/*Week-7 Data encryption and data decryption */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main ()
{
    int i, ch, lp;
    char cipher[50], plain[50];
    char key[50];
    while (1)
    {
        printf ("\n\n-----MENU-----\n");
        printf ("\n1:Data Encryption\n2:Data Decryption\n3:Exit");
        printf ("\n\nEnter your choice:");
        scanf ("%d", &ch);
        switch (ch)
        {
            case 1:
                printf ("\nData Encryption");
                printf ("\nEnter the plain text:");
                scanf("%s",&plain);
                printf ("\nEnter the encryption key:");
                scanf("%s",&key);
                lp = strlen (key);
                for (i = 0; plain[i] != '\0'; i++)
                cipher[i] = plain[i] ^ lp;
                cipher[i] = '\0';
                printf ("\nThe encrypted text is:");
                for(i=0;cipher[i]!='\0';i++)
                printf("%c",cipher[i]);
                break;
            case 2:
                printf ("\nData decryption");
                for (i = 0; cipher[i] != '\0'; i++)
                plain[i] = cipher[i] ^ lp;
                printf ("\nDecrypted text is:");
                for(i=0;plain[i]!='\0';i++)
                printf("%c",plain[i]);
                break;
            case 3:
                exit (0);
        }
    }

}



/*

input:
1
computer
1234
2
3
*/
//PROGRAM FOR CYCLIC REDUNDENCY CHECK
#include<stdio.h>

int main () 
{
    int n, m;
    printf ("Enter frame length and key length: ");
    scanf ("%d %d", &n, &m);
    
    int fr[n], ky[m], rem[m], dupFr[n + m - 1], rec[n + m - 1];
    int i, j, y, z, dupFrLen = (n + m - 1);
    printf ("Enter Frame: ");
  
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &fr[i]);
    }
    printf ("Enter key: ");
  
    for (i = 0; i < m; i++)
    {
        scanf ("%d", &ky[i]);
    }
    for (i = 0; i < dupFrLen; i++)
    {
        if (i < n)
	    {
            dupFr[i] = fr[i];

        }
        else
	    {
            dupFr[i] = 0;

        }

    }
  
//division
    for (j = 0; j < n; j++)
    {
      
        if (dupFr[j] == 1)
    	{
	  
            for (y = 0, z = j; y < m; y++, z++)
	        {
                rem[y] = dupFr[z] ^ ky[y];
                dupFr[z] = rem[y];
	    
            }
	
        }
    
    }
  
    //print frame, key, dupFr
    printf ("----------------------\nFrame: ");
  
    for (i = 0; i < n; i++)
    {
        printf ("%d", fr[i]);
    }
    printf ("\nkey: ");
    for (i = 0; i < m; i++)
    {
        printf ("%d", ky[i]);
    }
    printf ("\nDupFr: ");
  
    for (i = 0; i < dupFrLen; i++)
    {
        printf ("%d", dupFr[i]);
    }
  
 
//reciver
    for (i = 0; i < dupFrLen; i++)
    {
        if (i < n)
    	{
            rec[i] = fr[i];
        }
        else
    	{
            rec[i] = dupFr[i];
        }
    }
    printf ("\nrecieved: ");
  
    for (i = 0; i < dupFrLen; i++)
    {
        printf ("%d", rec[i]);
    }
  
//division
    for (j = 0; j < n; j++)
    {
        if (rec[j] == 1)
	    {
            for (y = 0, z = j; y < m; y++, z++)
	        {
                rem[y] = rec[z] ^ ky[y];
                rec[z] = rem[y];
            }
        }
    }
  
//rec print
    printf ("\nrec rem : ");
    for (i = 0; i < dupFrLen; i++)
    {
        printf ("%d", rec[i]);
    }
    for (i = 0; i < dupFrLen; i++)
    {
        if (rec[i])
	    {
            printf ("\nRecieved frame is wrong");
            break;
        }
    }
    printf ("\nRecieved frame is correct");
    return 0;
}


 
/*
INPUT:
9 5
1 1 0 1 0 1 1 1 1
1 0 0 1 1

*/

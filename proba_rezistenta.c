#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    
    int n, i,j,barem,x=0;
    struct tip {
                    char nume[20];
                    char prenume[20];
                    int timp;
                
    };
    scanf("%d\n", &n);
    struct tip elevi[n], reusit[n], temp;
    for(i=0;i<n;i++)
        {
            scanf("%s %s %d\n", elevi[i].nume, elevi[i].prenume, &elevi[i].timp);
        }
    scanf("%d\n", &barem);    
        
    for(i=0;i<n;i++)
        {
            if(elevi[i].timp<=barem)
                {
                   
                    strcpy(reusit[x].nume,elevi[i].nume);
                    strcpy(reusit[x].prenume,elevi[i].prenume);
                    reusit[x].timp = elevi[i].timp;
                    x++;
                }
        }
    if(x==0)
        {
            printf("0");
            exit(0);
        }
    else {
        for(i=0;i<x-1;i++)
            {
                for(j=i+1;j<x;j++)
                    {
                        if(reusit[i].timp > reusit[j].timp)
                            {
                                temp = reusit[i];
                                reusit[i] = reusit[j];
                                reusit[j] = temp;
                            }
                    }
            }
         printf("%d\n", x);    
         for(i=0;i<x;i++)
            {
                
                printf("%s %s %d\n", reusit[i].nume, reusit[i].prenume, reusit[i].timp);
            }
    }    
        
        
}

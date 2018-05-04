#include<stdio.h>

int main()
{
    int n,k,i, p=0,v=0,min=0;
    scanf("%d %d", &n, &k);
    int t[k];
    
    for(i=0;i<k;i++)
        {  scanf("%d %d\n", &p, &v);
           t[i]  = (n-p)/v;
        }
        
    min = t[0];
    for(i=0;i<k;i++)
        {  if(t[i]<min)
           min = t[i];
        }       
    for(i=0;i<k;i++)       
        {  if (t[i]>min)
           t[i] = -1;  
        }            
    for(i=0;i<k;i++)   
        {       if(t[i]!= -1)
                printf("%d ", i+1);
        }
}

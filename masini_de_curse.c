#include<stdlib.h>
#include<stdio.h>
int n;


int main()
{
    
    
    int  i, k, min, min_initializat=0;
    scanf("%d %d\n", &n, &k);
    int p, v, timp[n];
    
    for(i=0;i<=n;i++)
        {
            scanf("%d %d\n", &p, &v);
            timp[i] = (n-p)/v;
            if (min_initializat == 0)
                {
                    min = timp[i];
                    min_initializat=1;
                }
            if(min>timp[i])
                {
                    min = timp[i];
                }    
        }
      for(i=0;i<=n;i++)
        {
            if(timp[i]==min)
                {
                    printf("%d ", i+1);
                }
        }
}

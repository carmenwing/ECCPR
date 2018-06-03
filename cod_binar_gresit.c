#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,i,x, cat, max,rest, toate=0, cat_local,rest_local,c=0;
    
    struct tip {
        int nr;
        int zerouri;
    };
    
    struct tip nr[n];
    scanf("%d\n", &n);
    for(i=0;i<n;i++)
        {
            nr[i].zerouri = 0;
            scanf("%d\n", &nr[i].nr);
            cat = nr[i].nr/2;
            x = nr[i].nr;
            if(cat==0)
                {
                    nr[i].zerouri = 8;
                }
            else
                {
                           
                        while(cat!=0)
                            {
                                rest =  x%2;
                                if (rest == 0) 
                                    {
                                        nr[i].zerouri++;
                                    }
                                x =  cat;  
                                cat = cat/2;
                                toate++;
                            }
                        nr[i].zerouri = nr[i].zerouri + (8-toate); 
 
                }
        }
    max =   nr[0].zerouri;
    for(i=1;i<n;i++)
        {
            if(nr[i].zerouri>max)
                {
                    max = nr[i].zerouri;
                }
        }
        
    for(i=1;i<n;i++)
        {
             if(nr[i].zerouri==max)
                {
                    printf("%d\n", nr[i].nr);
                }
        }
   
}

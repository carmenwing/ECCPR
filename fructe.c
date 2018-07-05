#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n, k, i, j, m, r, g, b, min, min_initializat, d, index;
    scanf("%d %d %d %d %d %d\n", &n, &k, &m, &r, &g, &b);
    struct tip {
                    int tip, m, r, g, b;
                };
    struct tip fruct[1000];     
    min_initializat = 0;
    for( i = 0; i < n; i++)
        {
            
            scanf("%d %d %d %d %d\n", &fruct[i].tip, &fruct[i].m, &fruct[i].r, &fruct[i].g, &fruct[i].b);
            d = sqrt( pow(( m - fruct[i].m),2) + pow(( r - fruct[i].r),2) + pow(( g - fruct[i].g),2) + pow(( b - fruct[i].b),2));
            if (min_initializat==0)
                {
                    min = d;
                    index = i;
                    min_initializat = 1;
                }
            else{
                     if ( d < min)
                        {
                            min = d;
                            index = i;
                        }
                }    
        }
        
    printf("%d\n", fruct[index].tip);
}

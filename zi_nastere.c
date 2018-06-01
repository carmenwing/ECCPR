#include<stdio.h>


int main()
{
    int n,i,j, zi,luna,nr=0,ok=0;
    struct tip{
                    int zi;
                    int luna;
               };
    
    scanf("%d\n", &n);
    struct tip aniv[n], afisare[n], min;

    for(i=0;i<n;i++)
        {   
                scanf("%d-%d\n", &zi, &luna);
                for(j=0;j<nr;j++)
                    {  
                        ok = 0;
                        if((zi==aniv[j].zi)&&(luna==aniv[j].luna))
                            {
                               ok = 1;
                               break;
                            }
                        
                    }    
                    
                    if(ok==0)
                        {
                             aniv[nr].zi = zi;
                             aniv[nr].luna = luna;
                             nr++;
                        }
       
        }
        
        
    for(i=0;i<nr-1;i++)
        {
            for(j=i+1;j<nr;j++)
                {
                    if((aniv[i].luna>aniv[j].luna) || ((aniv[i].luna==aniv[j].luna) && (aniv[i].zi>aniv[j].zi)))
                        {
                            min = aniv[i];
                            aniv[i] = aniv[j];
                            aniv[j] = min;
                        }
                }
        }
        
     for(i=0;i<nr;i++)    
        {
            printf("%02d-%02d\n", aniv[i].zi, aniv[i].luna );
        }
        
         
}

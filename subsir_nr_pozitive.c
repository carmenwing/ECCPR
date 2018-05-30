#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0, index,local_index,len=0,local_len;
    double x, local_sum, max_sum;
    scanf("%d\n", &n);
    
    while(i<n)
        {
            local_index = i;
            local_sum = 0;
            local_len = 0;
            while(i<n)
                {
                    scanf("%lf\n", &x);
                    i++;
                    if(x>0)
                        {
                            local_sum += x;
                            local_len++;
                        }
                    else 
                        {   
                            break;
                        }
                    
                }   
    
            if((len < local_len) ||   (   (len == local_len) && (local_sum > max_sum)  )   )
                    {
                        index = local_index;
                        len = local_len;
                        max_sum = local_sum;
                        
                    }
        }                
    if(len==0)
        {
            printf("-1 0");
        }
    else
        {
            printf("%d %d\n", index, len);
        }
        
        
}






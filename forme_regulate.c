#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//PT MODULUL UNUI NR REAL SE FOLOSESTE FABS, NU ABS!!!!
int main()
{
    int n,i,j, ok=0;
    float d,d_local,z;
    struct tip {
        float x;
        float y;
    };
    scanf("%d\n", &n);
    struct tip valori[n];
    for(i=0;i<n;i++)
        {
            scanf("%f %f\n", &valori[i].x, &valori[i].y);
        }
    d = sqrt(pow((valori[n-1].x-valori[0].x),2)+pow((valori[n-1].y-valori[0].y),2));
    
    for(i=0;i<n-1;i++)
        {
            d_local = sqrt( pow((valori[i+1].x-valori[i].x),2) + pow((valori[i+1].y-valori[i].y),2));
            z = fabs(1-(d/d_local));
            if(z  > 0.0001)
                {
                    printf("nu");
                    exit(0);
                    
                }
        }
        
 
        printf("da");
  
}

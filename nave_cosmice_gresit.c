#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int n,i,j, min_initializat = 0, index;
    double d_x, d_y, d_z, min, sum;
    struct tip { double x, y, z, d;
                 int vizitat; };
    struct tip coord[100], pozitie;
    scanf("%d\n", &n);
    for( i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf\n", &coord[i].x, &coord[i].y, &coord[i].z);
        coord[i].vizitat = 0;
    }  
    scanf("%lf %lf %lf\n", &p.x, &p.y, &p.z);        
    while(n--)
    {
        min_initializat = 0;
        for( i = 0; i < n; i++)
        {
         if ( coord[i].vizitat == 0 )
          {
            d_x = pow((p.x - coord[i].x),2);
            d_y = pow((p.y - coord[i].y),2);
            d_z = pow((p.z - coord[i].z),2);
            coord[i].d = sqrt( d_x + d_y  + d_z );
            if ( min_initializat == 0 )
               {
                min = coord[i].d;
                min_initializat = 1;
                index = i;
               }
               else
               {
                    if ( min > coord[i].d )
                    {
                        min = coord[i].d;
                        index = i;
                    }
               }
           }
         }
        sum = sum + min;    
        p.x = coord[index].x;
        p.y = coord[index].y;
        p.z = coord[index].z;
        coord[index].vizitat = 1;
    }
    printf("%.2lf\n", sum);
}

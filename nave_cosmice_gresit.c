#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<float.h>

int main()
{
    int n,i,j, index;
    double d_x, d_y, d_z, min, sum=0;
    struct tip {
        double x,y,z,d;
        int vizitat;
    };
    scanf("%d\n", &n);
    struct tip coord[n], pozitie;
    for(i=0;i<n;i++)
        {
            coord[i].vizitat = 0;
            scanf("%lf %lf %lf\n", &coord[i].x, &coord[i].y, &coord[i].z);
        }
    scanf("%lf %lf %lf\n", &pozitie.x, &pozitie.y, &pozitie.z);
    
   while(n--)
        {    
             
             for(i=0;i<n;i++)
                {
                           if( coord[i].vizitat == 0)
                            {
                                    d_x = pow((pozitie.x-coord[i].x),2);
                                    d_y = pow((pozitie.y-coord[i].y),2);
                                    d_z = pow((pozitie.z-coord[i].z),2);
                                    coord[i].d = sqrt(d_x + d_y + d_z);
                                    min = coord[i].d;
                                    index=i;
                                    break;
                            }
                            
                            
               }
             for(j=i+1;j<n;j++)
                            {
                                if( coord[j].vizitat == 0)
                                        {
                                                d_x = pow((pozitie.x-coord[j].x),2);
                                                d_y = pow((pozitie.y-coord[j].y),2);
                                                d_z = pow((pozitie.z-coord[j].z),2);
                                                coord[j].d = sqrt(d_x + d_y + d_z);
                                                if(coord[j].d<min)
                                                    {
                                                        min = coord[j].d;
                                                        index = j;
                                                    }
                                        }
                            }
                        
           
            sum = sum + min;
            coord[index].vizitat = 1;
            pozitie.x = coord[index].x;
            pozitie.y = coord[index].y;
            pozitie.z = coord[index].z;
        }
    
    
    printf("%.2lf\n", sum);
}

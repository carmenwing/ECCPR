#include<stdlib.h>
#include<stdio.h>



int main()
{
    
    int m,n,s,i,j,z,k;
    scanf("%d\n", &m);
    scanf("%d\n", &n);
    scanf("%d\n", &s);
    struct triplet {
                        int v[3];
                   };
    
    struct triplet a[m][n];
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d %d %d ", &a[i][j].v[0], &a[i][j].v[1], &a[i][j].v[2]);
                    for(k=0;k<3;k++)
                        {
                            if((a[i][j].v[k]>=0) && (a[i][j].v[k]<=(256/s)))
                                {
                                    a[i][j].v[k] = 0;
                                }
                            else if((a[i][j].v[k]>(((s-1)*256)/s)) && (a[i][j].v[k]<=(255)))
                                {
                                    a[i][j].v[k] = s-1;
                                }
                            else 
                                {
                                    for(z = 1;z<s-1;z++)
                                        {
                                            if ((a[i][j].v[k]>(z*256)/s) && (a[i][j].v[k]<=((z+1)*256)/s))
                                            {
                                                 a[i][j].v[k] = z;
                                                //FARA BREAK!!!
                                            }
                                        }
                                }
                        }
                }
        }
    
     for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d %d %d ", a[i][j].v[0], a[i][j].v[1], a[i][j].v[2]);
                }
        }
    
    
}

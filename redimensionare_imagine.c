#include<stdio.h>

int m,s;//trebuie sa fie globale
struct triplet {
                    int v[3];
                };

struct triplet a[21][21];

triplet alocare_maxim (int x, int y)
    {
        int i,j;
        triplet max;
        max.v[0] = a[x][y].v[0];
        max.v[1] = a[x][y].v[1];
        max.v[2] = a[x][y].v[2];
        
        for(i=x;i<x+s;i++)
            {
                for(j=y;j<y+s;j++)
                    {
                        if(a[i][j].v[0]>max.v[0]) 
                                {
                                    max.v[0] = a[i][j].v[0];
                                }
                        if(a[i][j].v[1]>max.v[1]) 
                                {
                                    max.v[1] = a[i][j].v[1];
                                }
                        if(a[i][j].v[2]>max.v[2]) 
                                {
                                    max.v[2] = a[i][j].v[2];
                                }
                    }
            }
        return max;    
    }



int main()
{
    int i,j;
    triplet maxim;
    
    scanf("%d\n", &m);
    scanf("%d\n", &s);
    
    for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d %d %d\n", &a[i][j].v[0], &a[i][j].v[1], &a[i][j].v[2]);
            }
        }
        
    for(i=0;i<m;i+=s)        
        {
            for(j=0;j<m;j+=s)
                {
                    maxim = alocare_maxim(i,j);
                    printf("%d %d %d\n", maxim.v[0], maxim.v[1], maxim.v[2]);
                }
        }
}

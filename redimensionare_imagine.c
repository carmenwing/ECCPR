#include<stdio.h>

 int m,s,n;
 struct tip {
                        int r;
                        int g;
                        int b;
    };
struct tip elem[21][21],max; 

tip maxim(int x, int y)
{
    int i,j;
    max.r = elem[x][y].r;
    max.g = elem[x][y].g;
    max.b = elem[x][y].b;
    for(i=x;i<x+s;i++)
        {
            for(j=y;j<y+s;j++)
                {
                    if(max.r<elem[i][j].r)
                        {
                            max.r = elem[i][j].r;
                        }
                    if(max.g<elem[i][j].g)
                        {
                            max.g = elem[i][j].g;
                        }
                    if(max.b<elem[i][j].b)
                        {
                            max.b = elem[i][j].b;
                        }    
                }
        }
    return max;    
}

int main()
{
   
    int i,j;
    scanf("%d\n", &m);
    scanf("%d\n", &s);
    n = m/s;
    struct tip v[n][n],rez;
    
    for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
                {
                    scanf("%d %d %d\n", &elem[i][j].r, &elem[i][j].g, &elem[i][j].b );
                }
        }
    
    for(i=0;i<m;i+=s)
        {
            for(j=0;j<m;j+=s)
                {
                    rez = maxim(i,j);
                    printf("%d %d %d\n", rez.r, rez.g, rez.b);
                }
        }
            
    //indicii i si j trebuie declarat local, altfel apare conflict!!!!        
            
            
            
}

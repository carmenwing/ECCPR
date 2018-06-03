#include<stdio.h>

int main()
{
    int i,j,z;
    unsigned short int n,k;
     int v[k][1000];
    scanf("%hu %hu\n", &k, &n);
    for(i=0;i<k;i++)
        {
            for(j=0;j<1000;j++)
                {
                    v[i][j] = -1;
                }
        }
        
    i=0;
    j=0;
    
     while(n--)
        {
            scanf("%u ", &v[i][j]);
            i++; 
            if(i==k)
                {
                    i=0;
                    j++;
                }
               
        }
        
    for(i=0;i<k;i++)
        {
            for(z=0;z<j+1;z++)
                {
                    if(v[i][z]!=-1)
                        {
                            printf("%u ", v[i][z]);
                        }
                    if(v[i][z]==-1) printf(" ");
                }
            printf("\n");    
        }
    
}

#include<stdio.h>
#include<math.h>

int main()

{
    int m,n,i,j,sum=0;
    float var=0, media=0;
    scanf("%d\n",&m);
    scanf("%d\n",&n);
    float v[100][100];
    
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            {
                scanf("%f\n",&v[i][j]);
                var = v[i][j];
                v[i][j] = var*0.9+2;
                v[i][j] = (int)v[i][j];
                sum = sum+(v[i][j]-var);
            }
    media = (double)sum/(m*n);
    printf("%.2f",media);
    
}

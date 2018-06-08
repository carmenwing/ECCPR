 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
 {
     int m, n, i, j, k, s, temp;
     scanf("%d\n", &m);
     scanf("%d\n", &n);// nr linii/coloane matrice initiala
     int a[m][n],b[m+2][n+2],v[5];
     for (i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            scanf("%d\n", &a[i][j]);
        }
     for (i = 0; i < m+2; i++)
            for ( j = 0; j < n+2; j++)
                b[i][j] = 0;
                
    for (i = 1; i < m+2-1; i++)
            for ( j = 1; j < n+2-1; j++)
                b[i][j] = a[i-1][j-1];
    
    for (i = 1; i < m+2-1; i++)
        {
            for ( j = 1; j < n+2-1; j++)
               {
                    v[0] = b[i-1][j];
                    v[1] = b[i][j-1];
                    v[2] = b[i][j];
                    v[3] = b[i][j+1];
                    v[4] = b[i+1][j];
                    for (k = 0; k < 4; k++)
                        {
                           for (s = k+1; s < 5; s++)
                           {
                               if (v[k] > v[s])
                               {
                                   temp = v[s];
                                   v[s] = v[k];
                                   v[k] = temp;
                               }
                           }
                        }
                    b[i][j] = v[2];    
               }
        }
        for (i = 1; i < m+2-1; i++)
        {
            for ( j = 1; j < n+2-1; j++)
            printf("%d\n", b[i][j]);
        }
        
}

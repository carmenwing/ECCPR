#include<stdio.h>

int main()
{
    int n, i, val_max = 0, nr_mai_mari = 0;
    float v[200], suma = 0, media;
    
    scanf("%d\n", &n);
    for( i = 0; i < n; i++)
        {
            scanf("%f\n", &v[i]);
        }
    if ( (v[0] > 0) && (v[0] > v[1]) )   
        {
            nr_mai_mari++;
            suma = suma + v[0];
        }    
        
    if  ( (v[n-1] > 0) && (v[n-1] > v[n-2]))
        {
            nr_mai_mari++;
            suma = suma + v[n-1];
        } 
     for( i = 1; i < n-1; i++)
        {
            if ((v[i] > v[i-1]) && (v[i] > v[i+1]))
                 {
                    nr_mai_mari++;
                    suma = suma + v[i];
                 } 
        }
    media =    (float) suma / nr_mai_mari; 
    for( i = 0; i < n; i++)
        {
            if(v[i]  > media)
                val_max++;
        }
    printf("%d\n", val_max);
}

#include<stdio.h>
int main()
{
    int n, i, v[7],j,suma, a,max=0;
    scanf("%d ", &n);
    while(n>0)
    
    {     
           
            scanf("%d %d %d %d %d %d %d\n", &v[1],&v[0],&v[3],&v[2],&v[5],&v[4],&v[6]);
            suma=v[0];        
            for (i=1;i<=6;i++)
                        {
                           suma = suma+(v[i]%2);
                        }
                        
            if(suma>=max)
                max = suma;
            n--;
    } 
    
       printf("%d\n", max); 
}

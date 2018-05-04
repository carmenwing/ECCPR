#include<stdio.h>
#include<math.h>

int main()

{
    int n,i;
    scanf("%d\n",&n);
    float v[n], media=0, suma=0, dispersia=0,procent=0,c=0;
    
    for (i=0;i<n;i++)
        {
            scanf("%f\n", &v[i]);
            suma = suma + v[i];
        }
        
    media = suma/n;
    suma=0;
    
    for (i=0;i<n;i++)
        suma = suma+pow(v[i]-media,2);
        
    dispersia = sqrt(suma/n);
    
    for (i=0;i<n;i++)
      {
          if ((media-dispersia)<=v[i] && v[i]<=(media+dispersia))
            { c++;}
      }  
    procent=c/n*100;
    
    printf("%2.f", procent);

    
    
}

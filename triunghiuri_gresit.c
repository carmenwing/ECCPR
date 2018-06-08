#include<stdio.h>
#include<math.h>


int main()
{
   int n, i, index ;
   float a, b, c, semiperimetru=0, perimetru=0, arie=1, raport=1, max;
   scanf("%d\n", &n);
   //initializez maximul
   
   scanf("%f %f %f\n", &a, &b, &c);
   perimetru = a+b+c;
   semiperimetru = (float) perimetru/2;
   arie = sqrt(semiperimetru*(semiperimetru-a)*(semiperimetru-b)*(semiperimetru-c));
   max = arie/perimetru;
   index = 0;
                  
   for ( i = 1; i < n; i++)
    {
       
         scanf("%f %f %f\n", &a, &b, &c);
         if ((a < b+c) && (b < a+c) && (c < a+b))   
         {
              if ((a!=b) && (a!=c) && (b!=c))
                {
                  perimetru = a+b+c;
                  semiperimetru =  perimetru/2;
                  arie = sqrt(semiperimetru*(semiperimetru-a)*(semiperimetru-b)*(semiperimetru-c));
                  raport = arie/perimetru;
                  if (raport >= max)
                    {
                        max = raport;
                        index = i;
                    }
                }
         }
        
    }
    printf("%d %.3f\n", index, max);
}

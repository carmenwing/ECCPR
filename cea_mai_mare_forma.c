#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    struct forma {
                        char nume[11] ;
                        float d1;
                        float d2;
    };
    
    struct forma a,b;
    float max;
    
    scanf("%d\n", &n);
    scanf("%s %f %f\n", a.nume, &a.d1, &a.d2);
    if(strcmp(a.nume, "dreptunghi") == 0) max = a.d1*a.d2;
    else if (strcmp(a.nume, "patrat") == 0) max = a.d1*a.d1;
    else  max = a.d1*a.d1*3.14;
    
    for(i=1; i<n; i++)
        {
            scanf("%s %f %f\n", b.nume, &b.d1, &b.d2);
             if(strcmp(b.nume, "dreptunghi") == 0)
                    {
                        if(max<b.d1*b.d2)
                            {
                                max = b.d1*b.d2;
                                a = b;
                            }
                    }
            else if  (strcmp(b.nume, "patrat") == 0) 
                     {
                        if(max<b.d1*b.d1)
                            {
                                max = b.d1*b.d1;
                                a = b;
                            }
                    }
              else
                     {
                        if(max<b.d1*b.d1*3.14)
                            {
                                max = b.d1*b.d1*3.14;
                                a = b;
                            }
                    }        
            
        }
      if(strcmp(a.nume, "dreptunghi") == 0)
        {
            printf("%s %.2f %.2f\n", a.nume, a.d1, a.d2);
        }
    else 
         printf("%s %.2f\n", a.nume, a.d1);
}

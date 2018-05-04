#include<stdio.h>

int main()


{
    int m,i,c=0;
    scanf("%d\n",&m);
    float v[m], media=0, suma=0;
            
    for(i=0;i<m;i++)
          scanf("%f\n",&v[i]);
          
          
    if ((v[0]>v[1]) && (v[0]>0))   
        
            {    
                suma = suma+v[0];
                c++;
                 
            } 
            
      
        
   if ((v[m-1]>v[m-2]) && (v[m-1]>0)) 
        
                    {   
                        suma = suma+v[m-1];
                        c++;
                        
                    }    
            
    
    
     for(i=1;i<(m-1);i++)
     
        {
            
            if((v[i]>v[i-1]) && (v[i]>v[i+1]))
                {
                    suma = suma+v[i];
                    c++;
                }
            
            
        }
        
    media = suma/c;
    c=0;
    
    for(i=0;i<m;i++)
        if(v[i]>media)
            c++;
    
    printf("%d\n",c);
  
    
    
    
    
    
}

#include<stdio.h>


int main()
{
    
    int m,n,p,i,j,k,max;
    scanf("%d %d %d\n",&m,&n,&p);
    int v[10][10], w[10][10],x[10], s[10],y[10];
    
     for (i=0;i<n;i++)
        s[i]=0;
        
    for (i=0;i<p;i++)
        y[i]=0;
    
    for (i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
            {   
                scanf("%d",&v[i][j]);
            }
            
       }  
       
    for (i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            
            {    
                scanf("%d ",&w[i][j]);
            }
                
        }    
        
    for (i=0;i<m;i++)
           {
                scanf("%d ",&x[i]);
           }    
           
    for (j=0;j<n;j++)
        {
            for (i=0;i<m;i++)
                {
                    s[j]=s[j] + x[i]*v[i][j];
        
                }
          
        }
         
    for (k=0;k<p;k++)      
        {
            
            for (j=0;j<n;j++)
                {
                    
                    y[k]=y[k]+s[j]*w[j][k];
                    
                }
            
        }
        
    max = y[0];
    k=0;
    for (j=0;j<p;j++)
        {
           
             if (y[j]>max)
                {
                    max = y[j];
                    k=j;
            
                }
            
        }    
        
    
    printf("%d", k+1);
    
    
}

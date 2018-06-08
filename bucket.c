#include<stdio.h>
#include<math.h>

int main()

{
    int n,i,j;
    long long int nr;
    scanf("%d\n", &n);
    int v[20];
    for (i=0;i<20;i++) 
        v[i]=0;
   
    for (i=0;i<n;i++)
        {
            scanf("%lld ", &nr);
            if(nr>=0 && (nr<=9))
                v[0] = v[0]+1;
            for(j=1;j<=19;j++)
            {
                if(nr>=pow(10,j) && (nr<=pow(10,j+1)-1))
                    {
                        v[j]=v[j]+1;
                        break;
                    }
            }
            
            
        }
        
    for (i=0;i<=19;i++) 
    {
        if(v[i]!=0)
        printf("%d %d ", i+1, v[i]);
    }
    
    
}

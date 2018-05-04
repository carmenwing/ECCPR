#include<stdio.h>
int main()
{
    int n, i,ps,pf,a,b,c=0;
    scanf("%d %d\n", &ps, &pf);
    scanf("%d\n", &n);
    a=ps;
    b=pf;
    struct valori {
        int ps;
        int pf;
    };
    
    struct valori nava[n];
    
    for(i=0;i<n;i++)
    {
        ps=a;
        pf=b;
        scanf("%d %d\n", &nava[i].ps, &nava[i].pf);
        
        while(ps>=0 && nava[i].ps>=0)
            {
                ps = ps - nava[i].pf;
                
                if(ps>=0)
                {
                    nava[i].ps = nava[i].ps - pf;
                    if(nava[i].ps<0)
                        c++;
                        
                }
                       
                
            }
        
        
        
    }
    printf("%d ", c);
}

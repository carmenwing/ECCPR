#include<stdio.h>

int main()

{
    int n,k,i,j,ok;
    unsigned M;
    long double a=1,b=1;
    
    scanf("%d %d", &n,&M);
    
    k=1;
    ok=0;
    
    do{
        a=1;
        b=1;
        for(i=n-k+1;i<n+1;i++) a=a*i;
        for(j=1;j<k+1;j++) b=b*j;
        k++;
        if(a/b>=M)
            ok=1;
        
    } while (a/b<M);
    
    if(ok==0)
        printf("0");
    else
        printf("%d", k-1);
    
}

#include<stdio.h>


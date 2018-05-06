#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j;
    char s[5122],nep[5122];
    char *p;
    
    
    fgets(s, sizeof s, stdin);
    s[strlen(s)-1] = '\0';
    scanf("%d\n", &n);
    for(i=0;i<n;i++)
        {
            scanf("%s ", nep);
            p = strstr(s, nep);
            while(p!=NULL)
                {
                    for(j=0;j<strlen(nep);j++)
                         p[j] = '*';
                         p = strstr(p,nep);
                       
                    
                }            
            
        }
    printf("%s\n", s);    
    
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5120

int main()
{
    int i,j,n;
    char s[N+1],nep[N+1];
    char *p;
    
    
    fgets(s, N, stdin);
    s[N]='\0';
    if(s[strlen(s)-1]=='\n')
        {
            s[strlen(s)-1] = '\0';
        }
    scanf("%d\n", &n);
    for(i=0;i<n;i++)
        {
            scanf("%s", nep);
            p = strstr(s, nep);
            while(p!=NULL)
                {
                    for(j=0;j<strlen(nep);j++)
                       {
                           p[j] = '*';
                       }
                    p = strstr(p,nep);
                }            
            
        }
    //problema: cand se citeste sirul, se citeste si \n introdus la sfarsitul lui
    //printf("%s\n", s);    
    // ca sa adaug un \n la printf, tre sa folosesc if-ul, pt ca altfel raman cu 2*\n
    puts(s);
    // adauga el inca un \n, deci tre sa folosesc if-ul acela...pt ca altfel raman cu 2*\n

}

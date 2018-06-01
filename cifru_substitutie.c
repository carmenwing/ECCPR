#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
        #define N 1001
        int i,j;
        char text[1001];
        //NU FOLOSESC SIZEOF!!! DEFINESC N!!FARA VIRGULA SI FARA EGAL!!!
        struct cifru {
                            char vechi;
                            char nou;
        };
        struct cifru c[62];
        fgets(text, N, stdin);
        
        for(i=0;i<62;i++)
            {
                scanf("%c,%c ", &c[i].vechi, &c[i].nou);
            }
            
        for(j=0;j<strlen(text);j++)
            {
                for(i=0;i<62;i++)
                    {
                        if(text[j]==c[i].vechi)
                            {
                                text[j] = c[i].nou;
                                break;
                            }
                    }
            }
            
        printf("%s", text);    
}
/// diferenta %c - %s
//ATENTIE la printare...spatii...dupa inlocuiri in general, foloseste BREAK!!! 

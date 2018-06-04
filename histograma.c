#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()


{
    #define N 1000
    char s[N+2];
    char *p;
    int i,j, ok=0, nr=0;
    struct tip {
                    char cuv[N+1];
                    int ap;
    };
    
    struct tip lista[N], temp;
    fgets(s, sizeof(s), stdin); //IAU TOT TEXTUL!!!!!!
    s[strlen(s)-1] = '\0'; //IMPORTANT!!
    
     for(i=0;i<strlen(s);i++)
        {
            s[i] = tolower(s[i]); ///CERINTA!!!
        }
    p = strtok(s," ");
    while(p)
        {
            ok = 0;
            for(i=0;i<nr;i++)   
                {
                    if(strcmp(lista[i].cuv,p)==0)
                        {
                            lista[i].ap+=1;
                            ok=1;
                            break;
                        }
                }//AICI SE INCHEIE FOR-UL!!!  ALTFEL NU MERGE!!!!     
            if(ok==0) 
            {
                strcpy(lista[nr].cuv,p);
                lista[nr].ap = 1;
                nr++;                   
            }
        
            p = strtok(NULL, " ");  STRTOK DE NULL SI SPATIU!!!!! 
            
        }
    for(i=0;i<nr-1;i++)
        {
            for(j=i+1;j<nr;j++)
                {
                    if((lista[j].ap>lista[i].ap) || ((lista[j].ap==lista[i].ap)&&(strcmp(lista[i].cuv,lista[j].cuv)>0)))
                        {
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                }
        }
   
   for(i=0;i<nr;i++)
    {
        printf("%s %d\n", lista[i].cuv, lista[i].ap);
    }
    //NU A MERS CU S[1001], TREBUIE S[1002]!!!!
    
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//DE VERIFICAT ALGORITMII...CAND SE INCHEIE FOR-URI, IF-URI!!!
int main()
{
    int k,n,i,j,gol1,gol2,ok1,ok2,nr=0;
    char ech1[50],ech2[50];
    scanf("%d\n", &k);
    scanf("%d\n", &n);
    struct forma {
                    char nume[50];
                    int puncte,date,primite;
    };
    
    struct forma echipe[k], temp;
    
    for(i=0;i<k;i++)
    {
        echipe[i].puncte = 0;
        echipe[i].date = 0;
        echipe[i].primite = 0;
    }
    
    for(i=0;i<n;i++)
        {
            scanf("%s %d - %d %s\n", ech1, &gol1, &gol2, ech2);
            if(nr<k)
                {   
                    ok1 = 0;
                    ok2 = 0;
                    for(j=0;j<nr;j++)
                        {
                            if(strcmp(ech1,echipe[j].nume) == 0) ok1 = 1;
                            if(strcmp(ech2,echipe[j].nume) == 0) ok2 = 1;
                            if((ok1 && ok2))
                                {
                                    break;
                                }
                        }
                    
                    if(ok1==0)
                        {
                            strcpy(echipe[nr].nume, ech1);
                            nr++;
                        }
                    if(ok2==0)
                        {
                            strcpy(echipe[nr].nume, ech2);
                            nr++;
                        }    
                }
                
            for(j=0;j<nr;j++)
                {
                    if(strcmp(ech1, echipe[j].nume) == 0)
                        {
                            echipe[j].date+=gol1;
                            echipe[j].primite+=gol2;
                            if(gol1==gol2)  echipe[j].puncte+=1;
                            else if(gol1>gol2) echipe[j].puncte+=3;
                        }
                     if(strcmp(ech2, echipe[j].nume) == 0)
                        {
                            echipe[j].date+=gol2;
                            echipe[j].primite+=gol1;
                            if(gol1==gol2)  echipe[j].puncte+=1;
                            else if(gol1<gol2) echipe[j].puncte+=3;
                        }    
                }
            
        }
            
        

     for(j=0;j<k-1;j++)
        {
            for(i=j+1;i<k;i++)
                {
                    if(echipe[j].puncte<echipe[i].puncte)
                        {
                            temp = echipe[j];
                            echipe[j] = echipe[i];
                            echipe[i] = temp;
                        }
                }
            
        }

     for(j=0;j<k;j++)
        {
            printf("%s %d %d %d\n", echipe[j].nume, echipe[j].puncte, echipe[j].date, echipe[j].primite);
        }
    
}

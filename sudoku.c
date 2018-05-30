#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool f = true;
int a[9][9],k;

int verificare_linii()
{
    int i,j,k;
    f = true;
    for (i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if((a[i][j]==a[i][k]) && (j!=k))
                        {
                            f = false;
                        }
                    }
                }
        }
    return f;
    
}

int verificare_coloane()
{
    int i,j,k;
    f = true;
    for (i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
                {
                    for(k=0;k<9;k++)
                    {
                        if((a[j][i]==a[k][i]) && (j!=k))
                        {
                            f = false;
                        }
                    }
                }
        }
    return f;    
    
}
int verificare_bloc( int x,int y)
{
    
     int i,j,b,c;
     f = true;
     for(i=x;i<x+3;i++)
        {
            for(j=y;j<y+3;j++)
                {
                    for(b=x;b<x+3;b++)
                            {
                                for(c=y;c<y+3;c++)
                                    {
                                        if((a[i][j] == a[b][c]) && ((i!=b) || (j!=c)))
                                                {
                                                    f = false;
                                                }
                                        
                                    }
                             }
                 }
   
        }
    return f;
}

int main()

{
    
    int i,j,k;
    f = true;
     for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
                {
                    scanf("%d ", &a[i][j]);
                }
        }        
    f = verificare_linii();
    if(f == false)
        {
            printf("Gresit");
            exit(0);
        }
    f = verificare_coloane();
    if(f == false)
        {
            printf("Gresit");
            exit(0);
        }
    for(i=0;i<9;i+=3)
        {
            for(j=0;j<9;j+=3)
            {
                    f = verificare_bloc(i,j);
                    if(f == false)
                        {
                            printf("Gresit");
                            exit(0);
                        }  
                    else
                        {
                            printf("Corect");
                            exit(0);
                        }
             }
        }
  
    
    
}


    
    

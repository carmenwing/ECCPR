#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n, p, i, j, v[1000], nr_soldati;
    
    scanf("%d %d %d\n", &m, &n, &p);
    
    for(i = 1; i <=n; i++ ) v[i] = 1;// niciun soldat nu a fost eliminat
    nr_soldati = n;
    while( nr_soldati > 1 )//au ramas mai mult de 1 soldat
    {
        for( i = 1; i <= m; i++)
            {
                while( v[p] == 0)//daca soldatul de la pozitia curenta a fost numarat, il sar - 
	        		{			//trec la urmatorul soldat disponibil, pe care il tot caut adaugand 1
                        if( p < n)
                            p++;
                        else p = 1;
                    }
                if( p < n)
                    p++;
                else p = 1;    
            }
        if( p == 1)
            v[n] = 0;
        else  v[p-1] = 0;    
        nr_soldati = nr_soldati - 1; //cati soldati au ramas
    }    
    
    for(i = 1; i <=n; i++ )
        {
            if(v[i] == 1)
                break;
        }
    printf("%d\n", i);
    
}

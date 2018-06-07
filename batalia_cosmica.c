#include<stdio.h>
int main()


{
   int n, i, j,scut, fazer, ps, pf, c = 0;
   scanf("%d %d\n", &ps, &pf);
   scanf("%d\n", &n);
   scut = ps;
   fazer = pf;
   struct tip {
                    int ps;
                    int pf;
                };
   struct tip nava[n];      
   for ( i = 0; i < n; i++)
    {
        scanf("%d %d\n", &nava[i].ps, &nava[i].pf);
    }
    
    for ( i = 0; i < n; i++)
        {
            ps = scut;
            pf = fazer;
            while(nava[i].ps >= 0) //sau sterg else-ul dar conditia devine while((nava[i].ps >= 0) && (ps >= 0))
            {                           //sa stie ce sa faca daca nava mea moare!! 
                ps = ps - nava[i].pf;
                if (ps >= 0)
                    nava[i].ps = nava[i].ps - pf;
                else break;    
            }
            if ((nava[i].ps < 0) && (ps>=0)) c++;
        }
    printf("%d\n", c);
    
    
    
    
}

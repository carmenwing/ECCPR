#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main () {
   char s1[4], s2[4], s3[4];
   int i,j, ok1 = 0, ok2 = 0, ok3 = 0, c = 0;
   char jud[42][3]={{"AB"},{"AR"},{"AG"},{"B"},{"BC"},{"BH"},{"BN"},{"BT"},{"BV"},{"BR"},{"BZ"},{"CS"},{"CL"},{"CJ"},{"CT"},{"CV"},{"DB"},{"DJ"},{"GL"},
    {"GR"},{"GJ"},{"HR"},{"HD"},{"IL"},{"IS"},{"IF"},{"MM"},{"MH"},{"MS"},{"NT"},{"OT"},{"PH"},{"SM"},{"SJ"},{"SB"},{"SV"},{"TR"},{"TM"},{"TL"},{"VS"},{"VL"},{"VN"}};
   
   while(!feof(stdin))
    {
        ok1 = 0;
        ok2 = 0;
        ok3 = 0;
        scanf("%s %s %s\n", s1, s2, s3);
        //VERIFIC JUDET
        for( i  = 0; i < 43; i++)
            {
                if(strcmp( s1, jud[i]) == 0) 
                    {
                        ok1 = 1;  
                    }
            }
        //VERIFIC CIFRELE    
        c = 0;    
        if((strlen(s2) ==2) || (strlen(s2) == 3))
            {
                for( i = 0; i< strlen(s2); i++)
                    {
                        if( isdigit(s2[i]) !=0 ) c++;
                    }
                if(c == strlen(s2))
                    ok2 = 1;
            }
        c = 0;    
        //VERIFIC LITERELE
         if(strlen(s3) ==3)
            {
                for (i = 0; i< 3; i++)
                    { 
                        if( isupper(s3[i]) != 0) c++;
                    }
                if(c == strlen(s2))
                    ok3 = 1;    
            }
            
            
        if( (ok1==1) && (ok2==1) && (ok3==1)) printf("%s %s %s\n", s1, s2, s3);
        
        
    }
   
}

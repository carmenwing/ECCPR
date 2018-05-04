#include <iostream>
#include <string.h>

int main() {
	
char text[1002];
int i,j;
fgets(text, sizeof text, stdin);
struct Cifru {
                char vechi, nou;
    
             };
struct Cifru cifru[62];
for(i=0; i<=61;i++)
        scanf("%c,%c ", &cifru[i].vechi, &cifru[i].nou);

for(i=0;i<=strlen(text)-1;i++)
    {
        for(j=0;j<=61;j++)
            {
                {
                    if(text[i]==cifru[j].vechi)
                       {    
                           text[i]= cifru[j].nou;
                           break;
                       }
                    
                }
                
                
            }
        
        
    }
    
    printf("%s", text);



}

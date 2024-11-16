//a*, a*b+

#include <stdio.h>
#include <string.h>
void main()
{int state=0,i,length;
char input[30];
gets (input);
length=strlen(input);
for(i=0;i<length;i++)
    {
        if(input[0]!='a' || input[0]!='b'){
            state=2;
            break;
        }
        if (state==0&&input[i]=='a')
        state=0;
       else if (state==0||state==1 &&input[i]=='b')
        state=1;
       else if (state==1 &&input[i]=='a')
          {
           state=2;
           break;
          }
       else if (input[i]!='a'||input[i]!='b')
         {
        state=2;
        break;
         }

     }
if (state==0)
    printf("String is accepted under a*");
else if (state==1)
    printf("String is accepted under a*b+");
else
    printf("String is rejected");
}
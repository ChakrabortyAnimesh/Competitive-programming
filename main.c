#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
    int main()
    {
    char str[6];
    int value,result=0;
    scanf("%s",str);
    int placement=strlen(str)-1;
   // printf("%d\n",placement);


    for(int i=0;str[i]!='\0';i++,placement--)
    {
        if(str[i]>='0' && str[i]<='9')
            value=str[i]-48;

        else if(str[i]>='a' && str[i]<='g')
        value=str[i]-97+10;

        else if(str[i]>='A' && str[i]<='G')
        value=str[i]-65+10;
       //calculate the actual result
       result=result+(value*pow(17,placement));

    }
     printf("%d",result);

    return 0;
}

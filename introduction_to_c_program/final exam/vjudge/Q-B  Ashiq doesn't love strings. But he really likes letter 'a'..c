#include <stdio.h>

int main(void)
{
    char s[100];

    int x, a=0, i, y=0;

    scanf("%s",s);
    x=strlen(s);
    for(i=0; i<x; i++)
    {

        if(s[i]==97)
        {

            a++;
        }

        else
        {

            y++;
        }

    }

        if(a<=y)
        {
printf("t%d",2*a-1);
        }




    else
    {
     printf("%d",x);
    }

    return 0;
}

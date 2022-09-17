#include<stdio.h>

int main()

{

    char ch ;
    scanf("%c",&ch);


    if('A' <= ch && ch <= 'Z'){
            int pos =ch-'A';
            char lo = 'a' +pos;

        printf("Lower=%c", lo);


        //lower case to uper case
        /**
        int pos =ch='A';
        char lo ='a'+ pos;
        printf("Lower=%c",lo);
        **/
    }

    else{
        printf("others");
    }
}

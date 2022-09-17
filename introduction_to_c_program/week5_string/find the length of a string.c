#include<stdio.h>
#include<string.h> // for string lenth count


int main(){

char str[10] = "Hello World";

int len= strlen(str);

printf("length = %d\n",len);


// string lenth finding in manualy, without bilting function
/*

int idx =0,
while( str[idx] !='\0'){

    idx++;

}

printf("Length = %d\n",idx);
**/

}

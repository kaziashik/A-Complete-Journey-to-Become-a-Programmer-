#include <stdio.h>
#include<string.h>
int main()
{
    int L,R;

    char S[100000];
    scanf("%d %d", &L, &R);
    scanf("%s",S);

    for(int i=L-1, j=R-1; i<j; i++, j--){
        char temp = S[i];
        S[i]=S[j];
        S[j]=temp;
    }

    printf("%s",S);

}

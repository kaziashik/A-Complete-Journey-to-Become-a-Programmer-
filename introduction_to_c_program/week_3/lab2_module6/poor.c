#include<stdio.h>
int main()

{
    int x,y,z;

    scanf("%d %d %d", &x,&y, &z);

    if(x==y  && y ==x){
        printf("No\n");
    }
    else if(x !=y && x!=z && y !=z){

        print("No\n");
    }

    else{
        printf("Yes\n");
    }


    return 0;
}

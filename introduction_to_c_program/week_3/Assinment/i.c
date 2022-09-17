#include<stdio.h>
int main()

{ int x;
    scanf("%d",&x);

    if(x>=0&&x<40)
        {
            int mark=40-x;
        printf("%d",mark);

    }
      else if(x>=40&&x<70){
        int mark=70-x;
        printf("%d",mark);
    }
      else if(x>=70&&x<90){
        int mark=90-x;
        printf("%d",mark);
    }
      else if(x>=90)  {
        printf("expert\n");
    }



////
    return 0;
}

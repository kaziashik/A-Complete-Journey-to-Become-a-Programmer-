        #include<stdio.h>
        int main()
        {
int sum=0;
            for(int i=50, j=1; j<=20; i--, j++){
                    sum+=i;
                printf(" j: %d Add %d: New sum =%d\n",j,i ,sum);
            }
            printf("Sum: %d\n", sum);

            return 0;
        }

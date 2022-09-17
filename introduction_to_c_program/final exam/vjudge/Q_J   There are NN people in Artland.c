#include<stdio.h>
#include<string.h>
struct ashiks
{
    char name[41];
};
int main()
{
    int n;
    scanf("%d ",&n);
    struct ashiks a[n];
    for(int i = 0; i<n; i++)
    {
        gets(a[i].name);
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            int val = strcmp(a[i].name,a[j].name);
            if(val==0)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");

    return 0;
}

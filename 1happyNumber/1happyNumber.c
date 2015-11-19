#include <stdio.h>
#include <memory.h>
int num[2^32];
int isHappyNumber(int n);
int main()
{
    int n;
    while(scanf("%d",&n))
    {
         if(isHappyNumber(n))
         printf("isTrue\n");
         else
         printf("isFalse\n");
    }
}
int isHappyNumber(int n)
{
    int result = 0;
    memset(num, 0, sizeof(num));
    while(1)
    {
        if(n==1) return 1;
        while(n)
        {
            result += (n%10)*(n%10);
            n = n/10;
        }
        if(num[result] == 0)
        {
            num[result] = 1;
            n = result;
            result = 0;
            continue;
        }
        else
            return 0;
    }

}

#include <stdio.h>
int num[2^32];
boolean isHappyNumber(int n);
int main()
{
    int n;
    while(scanf("%d",&n))
    {
         if(isHappyNumber(n))
         printf("isTrue\d");
         else
         printf("isFalse\n");
    }
}
boolean isHappyNumber(int n)
{
    int result = 0;
    memset(num, 0, sizeof(num));
    while(1)
    {
        if(n==1) return true;
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
            return false;
    }

}

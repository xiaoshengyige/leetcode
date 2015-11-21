//判断一个数是否为丑数
#include <stdio.h>
int isUglyNumber(int n);
int main()
{
    int n;
    while(scanf("%d",&n))  
    {
        if(isUglyNumber(n) == 1)
            printf("is a ugly number\n");
        else
            printf("is not a ugly number\n");
    }
    return 0;
}
int isUglyNumber(int n)
{
    if(n <= 0)
        return 0;
    while(n%2==0) n = n/2;
    while(n%3==0) n = n/3;
    while(n%5==0) n = n/5;

    if(n == 1)
        return 1;
    else
        return 0;
}


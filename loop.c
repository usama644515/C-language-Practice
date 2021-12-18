#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter a Number:");
    scanf("%d",&a);
    n=0;
    while(n<=a)
    {
        printf("%d\n",n);
        n++;
    }
    return 0;
}
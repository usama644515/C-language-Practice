#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Value\n");
    scanf("%d", &a);
    printf("Enter Second Value\n");
    scanf("%d", &b);
    printf("Enter Third Value\n");
    scanf("%d", &c);
    int num=a+b;
    printf("The Answer is %d\n", num*c);
    return 0;
}
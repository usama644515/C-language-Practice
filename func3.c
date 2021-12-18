#include<stdio.h>

int func2(int a,int b)
{
    if (a==b)
    {
        printf("These numbers are equal");
    }
    else{
        printf("These numbers are not equal");
    }
    return 0;
    
}

int main()
{
    int x,y;
    printf("Enter First Number\n");
    scanf("%d",&x);
    printf("Enter Second Number\n");
    scanf("%d",&y);
    func2(x,y);
    return 0;
}
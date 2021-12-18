#include<stdio.h>
int main()
{
    int a;
    printf("enter a no:- \n");
    scanf("%d",&a);
    switch (a){
        case 2:
        printf("value is 2:- \n");
        break;
        case 5:
        printf("value is 5:- \n");
        break;
        default:
        printf("You enter wrong number");
    } 
    return 0;
}
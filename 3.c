#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d", &a);
    if(a<10){
        printf("This Value is less than 10\n");
    }
    else if(a>10){
        printf("This Value is greater than 10\n");
    }
    else if(a==10){
        printf("This Value is equal to than 10\n");
    }
return 0;    
}

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d", &num);
    if(num>=0){
        printf("The Number is Positive\n");
    }
    else{
        printf("The Number is Negative\n");
    }
return 0;
}
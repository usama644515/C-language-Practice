#include<stdio.h>

int func2(int a,int b){
    if (a<b)
    {
        printf("The greater number is %d\n",b);
    }
    else if(a>b)
    {
        printf("The greater number is %d\n",a);
    }
    return 0;
    
}
int main()
{
    int x,y;
    printf("Enter the first Number\n");
    scanf("%d",&x);
    printf("Enter the second Number\n");
    scanf("%d",&y);
    func2(x,y);
    
    return 0;

}
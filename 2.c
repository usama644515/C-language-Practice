#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the First Value:\n");
	scanf("%d",&a);
	printf("Enter the Second Value:\n");
	scanf("%d",&b);
	if(a>b){
		printf("The Greater Value is %d\n",a);
	}
	else if(a<b){
		printf("The Greater Value is %d\n",b);
	}
return 0;
}

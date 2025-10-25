#include<stdio.h>
int main()
{
	int c;//calculate tempreture
	printf("enter the machine tempreture:");
	scanf("%d",&c);
	if(60<c&&c<=80){
		printf("machine tempreture is safe");
	}
	else{
		printf("machine tempreture is not safe");
	}
	return 0;
}

#include<stdio.h>
int main(){

int a,b ,result;//calculate tensile strength.
printf("enter tensile strenght of a");
scanf("%d",&a);
printf("enter tensile strenght of b");
scanf("%d",&b);
if(a>b)
printf("\ntentile strength of a is greater = %d",a);
else
{
	if(b>a)
	printf("\ntentile strength of b is greater = %d");
	else
	printf("\n both have same tentile strength");
	
}
   
	return 0;
}
	

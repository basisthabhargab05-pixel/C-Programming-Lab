//add,subtrect,divid,multiply.
#include<stdio.h>
int main(){
	
  int a,b,result;
  printf("1.addtion 2.substraction 3.division 4.multiplication");
  printf("enter the number a:");
  scanf("%d",&a);
  
  printf("enter the number b: ");
  scanf ("%d",&b);
   
   printf ("enter a number between 1 to 4");
   scanf("%d",&result);
   switch(result){
   
   case 1:
   	a+b;
   printf("addition is %d",a+b);
   break;
    
   case2:
   	a-b;
   printf("substrection is %d",a-b);
   break;
   
   case 3:
   	a/b;
   printf("division is %d",a/b);
   break;
   
   case 4:
   	a*b;
   printf("multiplication is %d",a*b);
   break;
   
   default:
   printf("error");}
   return 0;}

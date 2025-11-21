#include<stdio.h>
int main()

{
    int m,a,force;
    printf("enter the mass:");
    scanf("%d",&m);
    printf("enter the acceleration :");
    scanf("%d",&a);
    force=m*a; 
    printf("the force is:%d",force);
    return 0;
}

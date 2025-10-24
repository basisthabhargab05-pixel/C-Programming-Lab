#include<stdio.h>
int main()
{
 float m,v,kinetic_energy;//calculate kinetic_energy.
 printf("enter the mass :");
 scanf ("%f",&m);
 printf("enter the velocity:");
 scanf("%f",&v);
 kinetic_energy= (m*v*v)/2;
 printf ("the kinetic_energy is:%f",kinetic_energy);
 return 0;
}

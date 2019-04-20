//program for calculate area of triangle.
//pratiksha chokhar
#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
	float area=0,p,q,r;
	printf("Enter the sides of an triangle");
	scanf("%d %d %d",&a,&b,&c);
float s=(a+b+c)/2;
printf("value of s is %f:\n", s);
p=s-a;
q=s-b;
r=s-c;
area=(sqrt)(s*(p*q*r));
//rea=(sqrt)(s*(s-a)*(s-b)*(s-c));
printf("area is %f :", area);

}

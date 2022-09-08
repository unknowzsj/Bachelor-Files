#include<stdio.h>
#include<math.h>
 
int main(){
	double a,b,c;
	double r1,r2;
	
	printf("input a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	r1 = (-b-sqrt(b*b-4*a*c))/2*a;
	r2 = (-b+sqrt(b*b-4*a*c))/2*a;
	
	if((b*b-4*a*c)>=0)
	{
		printf("r1=%7.2f\n",r1);
		printf("r2=%7.2f",r2);
	}
	else printf("No real roots!");
	
} 

#include<stdio.h>

int main(){
	double a,b,c,ex;
	
	scanf("%lf%lf%lf",&a,&b,&c);
		
	if(a>b)
		{
			if(b>c)
			{
				printf("%.2f %.2f %.2f\n",c,b,a);
			}
			else
			{
				if(a>c)
					printf("%.2f %.2f %.2f\n",b,c,a);
				else
					printf("%.2f %.2f %.2f\n",b,a,c);
			}
		}
		else
		{
			if(b>c)
			{
				if(a>c)
					printf("%.2f %.2f %.2f\n",c,a,b);
				else
					printf("%.2f %.2f %.2f\n",a,c,b);           
			}
			else
			{
				printf("%.2f %.2f %.2f\n",a,b,c);
			}
		}
	
}

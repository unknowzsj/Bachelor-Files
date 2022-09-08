#include<stdio.h>

int main(){
	double x=1,y=2;
	double result,mid;
	int i=20;
	
	while(i>0){
		result += y/x;
		mid=x;
		x=y;
		y=mid+y;
		i--;
	}
	printf("%.6f\n",result);
}

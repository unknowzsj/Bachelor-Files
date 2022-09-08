#include<stdio.h>
#include<math.h>

int main(){
	double pi=0.0;
	double input=1.0;
	double i=2.0;
	
	while(1){
		pi += input;
		input=pow(-1.0,i-1)*(1/(i*2-1));
		if(fabs(input)<0.000001) break;
		i++;
	}
	
	printf("PI=%10.8f",pi*4);
}

#include<stdio.h>

int main(){
	double i,reward;
	
	scanf("%lf",&i);
	
	if(i<=100000){
		reward=i*0.1; 
	}
	else if(i<=200000){
		reward=(i-100000)*0.075+10000;
	}
	else if(i<=400000){
		reward=(i-200000)*0.05+17500;
	}
	else if(i<=600000){
		reward=(i-400000)*0.03+27500;
	}
	else if(i<=1000000){
		reward=(i-600000)*0.015+27500+6000;
	}else{
		reward=(i-1000000)*0.01+27500+6000+400000*0.015;
	}
	
	printf("%0.2f",reward);
}

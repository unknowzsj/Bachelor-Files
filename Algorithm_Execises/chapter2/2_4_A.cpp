#include<stdio.h>

int main(){
	int result=0;
	int i=1;
	
	while(i<=100){
		result += i;
		i++;
	}
	
	printf("%d\n",result);
} 

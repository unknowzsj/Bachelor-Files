#include<stdio.h>

int sum(int n){
	if(n==1||n==2) return 1;
	return sum(n-1)+sum(n-2);
}

int main(){
	int m,result;
	
	scanf("%d",&m);
	
	result=sum(m);
	printf("%d\n",result);
}


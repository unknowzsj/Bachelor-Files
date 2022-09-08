#include<cstdio>

int main(){
	int a[10];
	int b,i;
	
	scanf("%d%d%d%d%d%d%d%d%d",a,a+1,a+2,a+3,a+4,a+5,a+6,a+7,a+8);
	scanf("%d",&b);

	for(i=0;i<10;i++){
		if(b<a[i]){
			for(int j=9;j>=i+1;j--){
				a[j]=a[j-1];
			}
			a[i]=b;
			break;
		}
	}
	for(int n=0;n<10;n++){
		printf("%d\n",a[n]);
	}
}

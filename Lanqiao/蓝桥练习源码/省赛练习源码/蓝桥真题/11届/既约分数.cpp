#include<iostream>
using namespace std;
//��Լ����
int gcb(int a,int b){
	if(b==0) return a;
	return gcb(b,a%b);
} 
int main(){
	int count=0;
	//�涨y>x,������������Ҳ���� 
	for(int y=1;y<=2020;++y){
		for(int x=1;x<y;++x){
			if(gcb(y,x)==1) count+=2;//���ϵ��� 
		}
	}
	//����1-1����� 
	cout<<count+1<<endl;
	//2020-2481215 
}

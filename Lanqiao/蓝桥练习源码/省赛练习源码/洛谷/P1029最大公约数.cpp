#include<bits/stdc++.h>
using namespace std;

int cts=0;
int x,y;
//���Լ�� 
int gcb(int a,int b){
	if(b==0) return a;
	return gcb(b,a%b);
}

int main(){
	cin>>x>>y;
	//���Լ�� 
	int a=gcb(x,y);
	//��С��������x*y/a,������˳������Լ��
	//��������һ�㣬��ֹ��������� 
	int b=x*y/a;
	for(int i=2;i<1000000;++i){
		int p=i;
		if(x*y%p==0){
			int q=x*y/p;
			if(gcb(p,q)==x&&p*q/x==y) cts++;
		}
	}
	cout<<cts<<endl;
	
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int cts;
int pn=12*10+31+28; 

bool twoin(int n){//�ж��Ƿ���2 
	while(n){
		if((n%10)==2) return true;
		n/=10;
	}
	return false;
}
bool run(int y){//�ж��Ƿ�Ϊ���� 
	if((y%100)==0){
		if(y%400==0) return true;
	}else{
		if(y%4==0) return true;
	} 
	return false;
}

int main(){
	for(int i=1900;i<=9999;++i){
		if(run(i)) cts++;//�����29���� 
		//������2�����366 
		if(twoin(i)) cts+=366;
		else cts+=pn;//��2�����ƽ��Ĵ�2�� 
	}
	cout<<cts;
	
	return 0; 
}

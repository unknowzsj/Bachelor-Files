#include<bits/stdc++.h>
using namespace std;
/*
	��һ�У�����Ϊ�������еĸ�������Ҫ��ĵȲ�
	�ڶ��У���������
	Ҫ���γɵȲ�����������Ҫ�仯������ 
*/
int n,k; 
int main(){
	cin>>n>>k;
	int num[n];
	//cin�����ո�ͻس�����һ�ζ�ȡ 
	for(int i=0;i<n;++i){
		cin>>num[i];
	}
	//���� 
	int min=n+1;//ѡ��i���� 
	for(int i=0;i<n;++i){
		int count;
		for(int j=0;j<i;++j){
			if(num[i]-num[j]!=k) count++;
		}
		for(int j=i;j<n;++j){
			if(num[j]-num[i]!=k) count++;
		}
		if(min>count) min=count;
	}
	cout<<min<<endl;
	
	return 0;
} 

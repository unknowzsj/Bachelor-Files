#include<bits/stdc++.h>
using namespace std;
/*
	Ӳ�ұ�ʾ����1��5��10��25��ֵ��Ӳ�����n����ϵ����� 
*/
int coin[4]={1,5,10,25};
//˼·��һ�����ɼ���������� 
int sumcoin(int n,int *coin,int cur){
	//��ʼ��
	if(cur==0) return 1; 
	int res=0;
	for(int i=0;i*coin[cur]<=n;i++){
		//��һ�������������һ 
		//�����Ĳ����ñ�������Ҫ�ñ��ʽ 
		int shengyu=n-i*coin[cur];
		res+=sumcoin(shengyu,coin,cur-1); 
	}
	return res;
} 
int main(){
	//�����������Ϊ3
	int n=20; 
	int out=sumcoin(n,coin,3);
	cout<<out<<endl;
	 
	return 0;
}  

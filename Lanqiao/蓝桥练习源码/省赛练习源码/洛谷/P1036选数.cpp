#include<bits/stdc++.h>
using namespace std;

int cts=0;
int n,k;
bool sushu(int n){
	for(int i=2;i*i<=n;++i){
		if(n%i==0) return false;
	}
	return true;
}
void dfs(int cur,int flag,int sum,int a[]){
	//��Ҫѡ�ĸ���Ϊ0ʱ,�жϲ��˳�ѭ�� 
	//�߱����������� 
	if(flag==k){
		if(sushu(sum)) cts++;
		return; 
	}else if(cur>=n){
		return;
	}
	//���µı������»�������
	//��Ȼ���ݻ��ҵ� 
	//��ѡcurλ�� ,flag sum������ 
	int cur1=cur+1;
	int flag1=flag;
	int sum1=sum;
	dfs(cur1,flag,sum,a); 
	//ѡcurλ�õ�ֵ
	int cur2=cur+1; 
	int flag2=flag+1; 
	int sum2=sum+a[cur];
	dfs(cur2,flag2,sum2,a); 
} 

int main(){
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	dfs(0,0,0,a);
	cout<<cts<<endl;
	
	return 0;
}

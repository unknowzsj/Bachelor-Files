#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//��ȫ������ע�����Ҫ��longlong 
int v,n;
ll a[30];
ll dp[10010];//����j��ֵ��������� 

int main(){
	cin>>v>>n;
	for(int i=1;i<=v;++i) cin>>a[i];
	sort(a,a+v);//��С��������
	//��ʼ��
	dp[0]=1; 
	//dp��ʼ���� 
	for(int i=1;i<=v;++i){
		for(int j=a[i];j<=n;++j){
			dp[j]+=dp[j-a[i]];
		}
	} 
	cout<<dp[n];
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll T,N;
ll dp[10000010];//����һ�㿪��ô�󣬲������ 
ll t[1000001];
ll v[1000001];
//ʱ����Ȧ�������㳬ʱ
//��Ʒ��Ȧ��ͨ�����ظ�-ʱ�����򣬲��ظ�-ʱ������ 
int main(){
	cin>>T>>N;
	for(ll i=1;i<=N;++i){
		cin>>t[i]>>v[i];
	}
	//iΪ��Ʒ��jΪʱ�� 
	for(ll i=1;i<=N;++i){
		//����ö��ʱ��
		//���ظ���ѡ������ö�� 
		for(ll j=t[i];j<=T;++j){
			//���ʱ���������ʱ�� 
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]); 
		}
	}
	cout<<dp[T]<<endl;
	
	return 0;
} 

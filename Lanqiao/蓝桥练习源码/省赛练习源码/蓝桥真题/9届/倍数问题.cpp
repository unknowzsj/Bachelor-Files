#include<bits/stdc++.h>
using namespace std;//�������ʱ,�����������з� 
typedef long long ll; 
ll N,K;
ll num[100010];
ll maxs;
void dfs(int cur,int flag,ll sum){
	if(flag==3){
		if(sum%K==0&&sum>maxs) maxs=sum;
		return;
	}
	if(cur>N) return;
	//��ѡcur
	int cur1=cur+1;
	int flag1=flag; 
	ll sum1=sum;
	dfs(cur1,flag1,sum1);
	//ѡcur 
	int cur2=cur+1;
	int flag2=flag+1;
	ll sum2=sum+num[cur];
	dfs(cur2,flag2,sum2);
}
int main(){
	cin>>N>>K;
	for(ll i=1;i<=N;++i){
		cin>>num[i];
	}
	dfs(1,0,0);
	cout<<maxs<<endl;
	
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
struct Val{//��Ҫ�Ե����Ľ������� 
	int len;
	int wid;
}val[5001]; 
bool cpa(Val a,Val b){//�Զ���ıȽϺ��� 
	return a.len>b.len;//������>,�������� 
} 
int n,dp[5002];
int t;

//O(nlogn)�������� 
int main(){
	cin>>n;//��ȡ���� 
	for(int i=0;i<n;++i) cin>>val[i].len>>val[i].wid;
	sort(val,val+n,cpa);//�Գ��Ƚ�������
	
	//����Ϊ i�����У���βԽСԽ��
	int len=0; 
	dp[0]=val[0].wid;
	for(int i=1;i<n;++i){//Ѱ������������� 
		if(val[i].wid>dp[len]) dp[++len]=val[i].wid;
		else *lower_bound(dp,dp+len+1,val[i].wid)=val[i].wid;
	} 
	cout<<len+1;
	
	return 0;
}

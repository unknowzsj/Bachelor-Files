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

//��ͨdp 
int main(){
	cin>>n;//��ȡ���� 
	for(int i=0;i<n;++i) cin>>val[i].len>>val[i].wid;
	sort(val,val+n,cpa);//�Գ��Ƚ�������
	
	//��iΪ��β������������� 
	for(int i=0;i<n;++i){//Ѱ������������� 
		dp[i]=1;
		for(int j=i-1;j>=0;--j){//�����ֹ�ظ����������ⳣ�� 
			if(val[j].wid<val[i].wid) dp[i]=max(dp[i],dp[j]+1);
		}
		t=max(t,dp[i]);//��Ѱ��� 
	} 
	cout<<t;
	
	return 0;
}

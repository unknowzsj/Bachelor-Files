#include<bits/stdc++.h>
using namespace std;
//�е㸴�ӣ��п��ٿ� 
int N;
string str="s";//���� 
int dp[10001];//dpֵ 
int mx;//�ݴ��в���� 
int res;//������� 
void dfs(int cur,int maxl){
	int diff=1;
	for(int i=cur;i<=N;++i){
		if(str[cur]==str[cur-1]||str[cur]='w'||diff==1){
			dp[cur]=
		}
	} 
}
int main(){
	//��ȡ����
	string ch; 
	cin>>N>>ch;
	str+=ch;//Ϊ��ʹ�����Ӧ 
	dp[0]=0;
	dp[1]=1;
	dfs(2,0);//�����2��ʼ 
} 

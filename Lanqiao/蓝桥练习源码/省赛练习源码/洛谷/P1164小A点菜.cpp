#include<bits/stdc++.h>
using namespace std;
//DP�⣬��dfs��ʱ
//��֪��Ϊʲô��Ǯͨ������Ǯ��ͨ��(�ô����) 
int N,M;
int money[100001];
int kin;
void dfs(int cur,int sum){
	//Ǯ���պþ�����+1 
	if(sum==M){
		kin++;
		return; 
	}//û�в�,����Ǯ�������� 
	if(cur==N||sum>M) return;
	//��ѡcur
	int cur1=cur+1;
	dfs(cur1,sum);
	//ѡcur
	int cur2=cur+1;
	int sum2=sum+money[cur];
	dfs(cur2,sum2); 
}
int main(){
	cin>>N>>M;
	for(int i=0;i<N;++i){
		cin>>money[i];
	}
	dfs(0,0);//0Ԫ��0��
	cout<<kin<<endl;
	
	return 0; 
} 

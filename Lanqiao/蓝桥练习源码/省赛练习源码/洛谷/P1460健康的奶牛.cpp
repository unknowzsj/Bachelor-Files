#include<bits/stdc++.h>
using namespace std;
int V,G;
int need[1001];//����Ӫ�� 
int val[1001][1001];//���е�Ӫ��
int res[1001];//����Ĵ� 
int chs[1001];//ÿ��ѡ��ı��
int mn=100001;//ѡ������ٰ��� 
//dfsѡ��ʱ���ǻ��ݵ��÷�
//����ؼ���dfs�ݹ��ÿ�����ϰ�����ѡ�� 
//sΪѡ��İ��� 
bool ok(int s){
	for(int i=1;i<=V;++i){
		int sum=0;
		for(int j=1;j<=s;++j){
			sum+=val[chs[j]][i];
		}
		if(sum<need[i]) return false;
	} 
	return true;
}
//cur-��ǰ�ڼ�����s-ѡ��İ��� 
void dfs(int cur,int s){
	//���������һ��λ���˳� 
	if(cur>G){
		//ѡ��İ����ԴﵽҪ�� 
		if(ok(s)){//���ڵ�ѡ���� 
			if(s<mn){
				mn=s;
				for(int i=1;i<=mn;++i) res[i]=chs[i]; 
			} 
		}
		return;//���� 
	} //ѡ���ǰ�汣֤�ֵ�����С 
	//ѡ��cur��
	chs[s+1]=cur;
	cur++;s++;
	dfs(cur,s);
	chs[s]=0;s--;//����
	//��ѡ��cur��
	dfs(cur,s); 
}
int main(){
	//��ȡ���� 
	cin>>V;
	for(int i=1;i<=V;++i){
		cin>>need[i];
	}
	cin>>G;
	for(int i=1;i<=G;++i){
		for(int j=1;j<=V;++j){
			cin>>val[i][j];
		}
	}
	//λ��1,ѡ��0 
	dfs(1,0); 
	//������ 
	cout<<mn;
	for(int i=1;i<=mn;++i){
		cout<<" "<<res[i]; 
	} 
	cout<<endl;
	 
	return 0;
} 

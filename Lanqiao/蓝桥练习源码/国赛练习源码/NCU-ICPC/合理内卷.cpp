#include<bits/stdc++.h>
using namespace std;
int n;
int a[100010];
int stu[100010];//δ��� 
int mx;

void dfs(int sum,int cur){
	if(cur>n){
		mx=max(mx,sum);
		return;
	}
	//��ѡcur
	dfs(sum,cur+1);
	
	//ѡcur
	if(!stu[a[cur]]&&!stu[a[cur]+1]&&!stu[a[cur]-1]){
		stu[a[cur]+1]=1;//����ѡ+1
		stu[a[cur]-1]=1;//����ѡ-1				
		dfs(sum+a[cur],cur+1);
		stu[a[cur]+1]=0;//���� 
		stu[a[cur]-1]=0;	
	} 
}

int main(){
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	dfs(0,1);//��λ��1��ʼ���� 
	cout<<mx;
	
	return 0;
}

//if(flag){
//			for(int i=1;i<cur;++i){
//			if(stu[a[i]]) ns-=a[i];//��ǰ��Ĳ���ȡ��ȡ�� 
//			}
//		}

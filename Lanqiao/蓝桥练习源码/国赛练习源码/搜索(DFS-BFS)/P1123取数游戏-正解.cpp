#include<bits/stdc++.h>
using namespace std;//����˼·����-�����dfs��д����bfs 
int t,n,m;
int num[10][10];//�������� 
int sta[10][10];//״̬���� 
int stp[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int maxs,sum;


void dfs(int x,int y){
	//����ͨ�����ϵļ�y 
	if(y==m+1){//���߽�ʱ 
		dfs(x+1,1);
		return;
	} 
	if(x==n+1){//�������� 
		maxs=max(maxs,sum);
		return;
	} 
	
	//ѡȡ��λ��
	if(sta[x][y]==0){//δ��ѡȡ����ѡȡ����Χ 
		sum+=num[x][y];
		sta[x][y]=1; 
		for(int i=0;i<8;++i){
			int nx=x+stp[i][0];
			int ny=y+stp[i][1]; 
			++sta[nx][ny];//����״̬,����ͨ��++/--�ķ�ʽ��ֹ��������������� 
		}
		
		dfs(x,y+1);
		
		//����
		sum-=num[x][y];
		sta[x][y]=0; 
		for(int i=0;i<8;++i){
			int nx=x+stp[i][0];
			int ny=y+stp[i][1];
			--sta[nx][ny];//����״̬
		} 
	} 
	
	//��ѡ��λ��
	dfs(x,y+1);
}

int main(){
	cin>>t;
	 
	for(int i=0;i<t;++i){
		//��ʼ������ 
		fill(num[0],num[0]+100,0);
		fill(sta[0],sta[0]+100,0);
		cin>>n>>m;
		//��ȡ���� 
		for(int l=1;l<=n;++l){
			for(int k=1;k<=m;++k){
				cin>>num[l][k];
			}
		}
		//��ʼ����
		maxs=0;
		dfs(1,1); 
		//������ 
		cout<<maxs<<endl; 
	}  
	
	return  0;
}

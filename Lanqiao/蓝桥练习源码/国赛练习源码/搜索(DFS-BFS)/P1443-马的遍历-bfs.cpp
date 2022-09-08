#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y;
queue<pair<int,int> > que;//bfs����,����������
int res[410][410];//��¼���� 
map<pair<int,int>,bool> stu;//��¼״̬
int go[8][2]={{-2,-1},{-1,-2},{1,-2},{2,-1},{-2,1},{-1,2},{1,2},{2,1}}; 

void bfs(int nx,int ny,int nstp){
	for(int i=0;i<8;++i){
		int tx=nx+go[i][0];
		int ty=ny+go[i][1];
		pair<int,int> nn(tx,ty);
		//Խ����Ѿ����������� 
		if(tx<1||tx>n||ty<1||ty>m||stu[nn]) continue;
		que.push(nn);
		stu[nn]=true;//����״̬
		res[tx][ty]=nstp;//��¼���� 
	} 
}
int main(){
	cin>>n>>m;
	cin>>x>>y;
	//��ʼ��
	pair<int,int> sta(x,y);
	que.push(sta);
	res[x][y]=0;//��ʼ��
	stu[sta]=true; 
	 
	int stp=1;
	int t=que.size();
	while(!que.empty()){
		pair<int,int> node=que.front();
		que.pop();
		int a=node.first,b=node.second; 
		//��ʼbfsѭ��
		bfs(a,b,stp);
		t--;
		if(t==0){
			t=que.size();
			stp++;
		}
		 
	}
	//���
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			pair<int,int> now(i,j); 
			if(stu[now]) printf("%-5d",res[i][j]);
			else printf("%-5d",-1);//�ﲻ�������-1 
		}
		cout<<endl;
	} 
	
	return 0;
} 

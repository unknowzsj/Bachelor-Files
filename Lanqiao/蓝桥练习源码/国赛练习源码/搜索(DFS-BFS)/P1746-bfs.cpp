#include<bits/stdc++.h>
using namespace std;
int n;
int a1,b1,a2,b2;
string mp[1010];
queue<pair<int,int> > que;
int res;
int mv[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void bfs(int x,int y){
	//��������������ѭ�� 
	if(x==a2&&y==b2){
		cout<<res<<endl;
		exit(0);
	} 
	for(int i=0;i<4;++i){
		int nx=x+mv[i][0];
		int ny=y+mv[i][1];
		//���������� 
		if(nx<1||ny<1||nx>n||ny>n||mp[nx][ny]!='0') continue;
		pair<int,int> np(nx,ny);
		que.push(np);
		mp[nx][ny]='1';//����״̬ 
	} 
} 
int main(){
	//������ȡ 
	cin>>n;
	for(int i=1;i<=n;++i){
		string str;
		cin>>str;
		mp[i]="*"+str;
	}
	cin>>a1>>b1>>a2>>b2;
	//��ʼ�� 
	pair<int,int> sta(a1,b1);
	que.push(sta);
	int t=que.size();
	
	while(!que.empty()){
		pair<int,int> now=que.front();
		que.pop();
		//��ʼ���� 
		bfs(now.first,now.second);
		t--;
		if(t==0){
			t=que.size();
			res++;
		}
 	} 
} 

#include<bits/stdc++.h>
using namespace std;//δͨ������֪��ԭ�� 
//�㷨ģ��ṹ�� 
struct edge{
	int fr,to,dist;
	edge(int u,int v,int d):fr(u),to(v),dist(d) {}
};
int n,m,s,e;
vector<edge> edges;//�ߵļ��� 
vector<int> G[100010];//��¼ÿ�����ı�������λ�� 
int sta[100010];//����״̬
int dis[100010];//s��i�ľ���
int p[100010];//���·����һ���� 
typedef pair<int,int> pr;
const int inf=100000001; 
//�Զ������ȶ��� 
struct node{
	int d,u;
	bool operator < (const node& rhs) const{
		return d>rhs.d;
	}
}; 
//����ߵ���Ϣ 
void add(int fr,int to,int d){
	edges.push_back(edge(fr,to,d));//���ߴ����ȥ
	G[fr].push_back(edges.size()-1);//����ıߵ�λ�ý��м�¼ 
}
//Dijkstra�㷨
void dij(int s){//���� 
	priority_queue<node> que;
	fill(dis,dis+10010,inf);
	dis[s]=0;//��ʼ�����Ϊ0
	//������ǰ�棬�����ж� 
	que.push((node){0,s});//i�㵽s�ľ���ߴ����ȥ
	while(!que.empty()){
		node x=que.top();que.pop();//��ȡ����
		int u=x.u;//��ȡ���ڵĵ�
		if(sta[u]) continue;//��������˾�����
		sta[u]=1;
		for(int i=0;i<G[u].size();++i){//��ȡu���ÿ��·�������� 
			edge& ne=edges[G[u][i]];//��ȡ�ߵ���Ϣ
			if(dis[ne.to]>dis[u]+ne.dist){//�������u���ڵ���һ����ľ����ԭ����С���͸������� 
				dis[ne.to]=dis[u]+ne.dist;
				p[ne.to]=G[u][i];//��¼��һ����
				que.push((node){dis[ne.to],ne.to});//���µĽ��;������ 
			} 
		} 
	} 
} 

int main(){
	cin>>n>>m>>s>>e;
	for(int i=0;i<m;++i){
		int fr,to,dis;
		cin>>fr>>to>>dis;
		add(fr,to,dis);
	} 
	dij(s);//��ʼ���� 
	cout<<dis[e];
	
	return 0; 
} 

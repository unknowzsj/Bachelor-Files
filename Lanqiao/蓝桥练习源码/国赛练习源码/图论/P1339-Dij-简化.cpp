#include<bits/stdc++.h>
using namespace std;
#define inf 1e9;//�������ֵ 
const int maxn=2505;
vector<pair<int,int> > edge[maxn];//��¼�������ӽ��;��� 
int dis[maxn];//��¼���� 
//�Զ������ȶ��� 
struct node{
	int d,u;
	bool operator < (const node& rhs) const{
		return d>rhs.d;
	}
};

void dijkstra(int s){	
	priority_queue<node> que;//�����,�����Զ���
	dis[s]=0;
	que.push((node){dis[0],s});//����ʼ����� 
	while(!que.empty()){
		int now=que.top().u;//ȡ���õ� 
		que.pop();
		for(int i=0;i<edge[now].size();i++) {//����now�����б� 
			int v=edge[now][i].first;//ȡ���ӵĵ� 
			if(dis[v]>dis[now]+edge[now][i].second) {//�ɳ�
				dis[v]=dis[now]+edge[now][i].second;
				que.push((node){dis[v],v});//���µĽ����� 
			}
		}
	}
}
int main() {
	int n,m,s,e;
	cin>>n>>m>>s>>e;
	for(int i=0;i<maxn;i++) edge[i].clear(),dis[i]=inf;//��ն��У���������Ϊ��� 
	for(int i=1;i<=m;i++) {//��ͼ
		int u,v,d;
		cin>>u>>v>>d;
		edge[u].push_back(make_pair(v,d));
		edge[v].push_back(make_pair(u,d));
	}
	dijkstra(s);
	cout<<dis[e];
	return 0;
}

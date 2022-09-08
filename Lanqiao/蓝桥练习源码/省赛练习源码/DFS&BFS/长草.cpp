#include<bits/stdc++.h>
using namespace std;

int n,m,k;
//��Ҫ��Сд����map�����ظ� 
char Map[1001][1001];
//x,y�ı仯���������� 
int cha[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
//���н��й�ȱ��� 
queue<pair<int,int> > grass;
//���ݵĺ��� 
void grow(int x,int y){
	for(int i=0;i<4;++i){
		//�������� 
		int nx=x+cha[i][0];
		int ny=y+cha[i][1];
		//�߽�����,������һ������ 
		if(nx<1 || ny<1 || nx>n || ny>m) continue;
		//���г��� 
		if(Map[nx][ny]!='g'){
			Map[nx][ny]='g';
			grass.push(pair<int,int>(nx,ny)); 
		}
	}
}

int main(){
	cin>>n>>m;
	//��ȡ��ͼ��Ϣ 
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>Map[i][j];
			//�������������������������� 
			if(Map[i][j]=='g'){
				grass.push(pair<int,int>(i,j)); 	
			}
		}
	} 
	//��ȡ���� 
	cin>>k;
	//�����ĸ��� 
	int t=grass.size();
	//���в�Ϊ�պ�����Ϊ���㣬����ѭ�� 
	while(!grass.empty() && k>0){
		//��ȡ��һ����ӵ���ϵ�x��y 
		int fx=grass.front().first;
		int fy=grass.front().second;
		grass.pop();//����
		grow(fx,fy);
		//����һ����Ҫ��ȥһ����� 
		t--;
		//һ�α��������������µĵ������ 
		if(t==0){
			t=grass.size();
			k--; 
		} 
	}
	//�����ͼ���µ���Ϣ 
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout<<Map[i][j];
		}
		cout<<endl;
	}
	
	return 0;
} 

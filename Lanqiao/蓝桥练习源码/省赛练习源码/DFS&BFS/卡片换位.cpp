#include<bits/stdc++.h>
using namespace std;
//�ײ��������� 
struct node{
	char con[2][3];
};
//�����ظ����������· 
map<node,bool> sta;
//�����־λ��������ŷɵ�λ��
map<char,pair<int,int> > loc;
//����״̬
queue<node> now;
int move[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
void bfs(node nown){
	//�ҵ��ո�λ 
	int spx,spy;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(nown.con[i][j]==' '){
				spx=i;
				spy=j;
			}
		}
	}
	//����λ�� 
	for(int i=0;i<4;++i){
		int nx=spx+move[i][0];
		int ny=spy+move[i][1];
		//Խ������ 
		if(nx<0 || nx>=2 || ny<0 || nx>=3) continue;
		node nnow = nown;
		nnow.con[spx][spy]=nnow.con[nx][nx];
		nnow.con[nx][ny]=' ';
		if(!sta[nnow]){
			sta[nnow]=true;
			now.push(nnow);
		} 
	}
}

int main(){
	//��ʼ�� 
	node start;
	for(int i=0;i<2;++i){
		for(int j=0;j<3;++j){
			cin>>start.con[i][j];
			if(start.con[i][j]=='A'){
				loc['A'].first=i;
				loc['A'].second=j;
			}
			if(start.con[i][j]=='B'){
				loc['B'].first=i;
				loc['B'].second=j;
			}
		}
	}
	now.push(start);
	
	int num=0;
	int t=now.size();
	pair<int,int> a,b;
	while(!now.empty()){
		//�ҳ�״̬��A��Bλ�� 
		node frn=now.front();
		for(int i=0;i<2;++i){
			for(int j=0;j<3;++j){
				if(frn.con[i][j]=='A'){
					a.first=i;
					a.second=j;	
				};
				if(frn.con[i][j]=='B'){
					b.first=i;
					b.second=j;
				}
			}
		}
		now.pop();
		//�����滻�Ƚ� 
		if(a==loc['B'] && b==loc['A']){
			cout<<num<<endl;
			break;
		}
		//����
		bfs(frn); 
		t--;
		if(t==0){
			t=now.size();
			num++; 
		}
	} 
}

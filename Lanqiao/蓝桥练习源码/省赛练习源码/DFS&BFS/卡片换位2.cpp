#include<bits/stdc++.h>
using namespace std;
//��Ŀ�涨��2*3 
//��¼a,b��ʼλ�� 
int ax,bx;
string s1,s2;
struct node{
	string alls;
	int step;
};
queue<node> state;
//�ƶ���ʽ 
int mo[4]={-1,1,-3,3};
//��ֹ���ظ���·
map<string,bool> con; 
 
void bfs(node sno){
	//�ҵ��ո��λ�� 
	int spa;
	for(int i=0;i<6;++i){
		if(sno.alls[i]==' ') spa=i; 
	}
	//�����Ƚ� 
	for(int i=0;i<4;++i){
		int newx=spa+mo[i];
		//Խ�� ,��������β��ӵ���� 
		if(newx<0 || newx>5 || (spa==2&&newx==3) ||(spa==3&&newx==2)) continue;
		//�µĽ������� 
		node ns=sno;
		ns.alls[spa]=ns.alls[newx];
		ns.alls[newx]=' ';
		if(!con[ns.alls]){
			con[ns.alls]=true;
			ns.step++;
			state.push(ns);
		}
	} 
}

int main(){
	//��ʼ��,�пո���cin��ʶ��ո� 
	getline(cin,s1);
	getline(cin,s2); 
	string start=s1+s2;
	//��¼��ʼλ�� 
	for(int i=0;i<6;++i){
		if(start[i]=='A') ax=i;
		if(start[i]=='B') bx=i;
	}
	//��ʼ�������� 
	node stnode;
	stnode.alls=start;
	stnode.step=0; 
	state.push(stnode);
	//��¼���ڵ�A��Bλ�� 
	int nax,nbx; 
	int t=state.size();
	while(!state.empty()){
		node frn=state.front();
		for(int i=0;i<6;++i){
			if(frn.alls[i]=='A') nax=i;
			if(frn.alls[i]=='B') nbx=i;	
		}
		state.pop();
		//�ж��Ƿ���� 
		if(nax==bx && nbx==ax){
			cout<<frn.step<<endl;
			break; 
		} 
		//��һ������ 
		bfs(frn);
		t--;
		if(t==0){
			t=state.size();
		}	
	} 
}

#include<bits/stdc++.h>
using namespace std;
set<int> res;
int a,b,c;//������� 
int na,nb,nc;//�������� 
bool bol[21][21][21];//����
 
void dfs(int a1,int b1,int c1){
	//�˳�ѭ�� 
	if(bol[a1][b1][c1]) return;
	bol[a1][b1][c1]=true;
	if(a1==0) res.insert(c1);
	//ģ�������㵹��ʽ 
	if(a1){//a1���� 
		if(b1<b){//b1δ��,a1->b1 
			if(b-b1>=a1) dfs(0,b1+a1,c1);//a1���� 
			else dfs(a1+b1-b,b,c1);
		}
		if(c1<c){//c1δ��,a1->c1 
			if(c-c1>=a1) dfs(0,b1,c1+a1);//a1���� 
			else dfs(a1+c1-c,b1,c);
		}
	} 
	if(b1){//b1���� 
		if(a1<a){//a1δ��,b1->a1 
			if(a-a1>=b1) dfs(a1+b1,0,c1);//b1���� 
			else dfs(a,b1+a1-a,c1);
		}
		if(c1<c){//c1δ��,b1->c1 
			if(c-c1>=b1) dfs(a1,0,c1+b1);//b1���� 
			else dfs(a1,b1+c1-c,c);
		}
	}
	if(c1){//c1���� 
		if(a1<a){//a1δ��,c1->a1 
			if(a-a1>=c1) dfs(a1+c1,b1,0);//c1���� 
			else dfs(a,b1,c1+a1-a);
		}
		if(b1<b){//b1δ��,c1->b1 
			if(b-b1>=c1) dfs(a1,b1+c1,0);//c1���� 
			else dfs(a1,b,c1+b1-b);
		}
	}	
} 
int main(){
	cin>>a>>b>>c;
	//��ʼ��
	nc=c;
	dfs(na,nb,nc); 
	
	//���
	for(set<int>::iterator i=res.begin();i!=res.end();++i){
		cout<<*i<<" ";
	} 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n;
string res="";

void dfs(int cur){
	if(cur==4){//4֮�����⴦�� 
		cout<<res<<endl;
		char c=res[cur-1];
		char d=res[cur];
		res[cur-1]=res[cur]='-';
		res[2*cur]=c;
		res[2*cur+1]=d;
		cout<<res<<endl;
		//���⴦��
		//��һ�� 
		res[3]=res[7];
		res[4]=res[8];
		res[7]=res[8]='-';
		cout<<res<<endl;
		//�ڶ��� 
		res[1]=res[2]='-';
		res[7]=res[8]='o';
		cout<<res<<endl;
		//������ 
		res[1]=res[6]; 
		res[2]=res[7];
		res[6]=res[7]='-';
		cout<<res<<endl;
		//���Ĳ�
		res[6]=res[0]; 
		res[7]=res[1];
		res[0]=res[1]='-';
		cout<<res<<endl;
		
		return;
	}
	cout<<res<<endl;
	//�����滻 
	char a=res[cur-1];
	char b=res[cur];
	res[cur-1]=res[cur]='-';
	res[2*cur]=a;
	res[2*cur+1]=b;
	cout<<res<<endl;
	//���ո񻻵�����
	res[cur-1]=res[cur]='*';
	res[2*(cur-1)]=res[2*(cur-1)+1]='-';
	//����
	dfs(cur-1); 
}
int main(){
	cin>>n;
	string wht="";
	string blk="";
	for(int i=0;i<n;++i){
		wht+='o';
		blk+='*';
	}
	res=wht+blk+"--";
	dfs(n);
	
	return 0;
}

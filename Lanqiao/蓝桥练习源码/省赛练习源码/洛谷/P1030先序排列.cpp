#include<bits/stdc++.h>
using namespace std;

string md,bk;
//string fn="";
//find()����ֱ���ҵ��ַ����±� 
void dfs(string md,string bk){
	if(bk.size()>0){
		char rt=bk[bk.size()-1];
		cout<<rt;
		int lc=md.find(rt);
		dfs(md.substr(0,lc),bk.substr(0,lc));
		dfs(md.substr(lc+1),bk.substr(lc,bk.size()-lc-1));
	}
	//�ҵ�������� 
	
	//fn+=rt;
	
	//ֻ��һ�����ʱ�˳�ѭ�� 
	//if(bks==1) return;
	//�ֽ��ݹ�
	//���� ,find() 
	//��0��ȡi�ĳ���--�� 
//	string mdleft=md.substr(0,lc);
//	//��i+1����β 
//	string mdright=md.substr(lc+1);
//	//������--��
//	string bkleft=bk.substr(0,lc);
//	//��,��ȡ����β����ȥ���ڵ�,lc������� 
//	string bkright=bk.substr(lc,bks-lc-1);
	
	//�ݹ�
	 
}
int main(){
	cin>>md;
	cin>>bk;
	dfs(md,bk);
	cout<<endl;
	
	return 0;
} 

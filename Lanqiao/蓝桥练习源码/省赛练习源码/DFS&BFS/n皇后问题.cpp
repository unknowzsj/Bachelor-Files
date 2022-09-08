#include<iostream>
#include<algorithm>
using namespace std;
/*
	4n�ʺ����� 
*/
int n;
//���� 
int cot;
/*
bool check(int rec[],int x,int y){
	//rec[i]�������i�е����� 
	int k=sizeof(rec)/sizeof(rec[0]);
	for(int i=0;i<k;++i){
		//�������У���Ϊÿ�α������ǿ��� 
		if(rec[i]==y) return false;
		//���Խ��� 
		if(i+rec[i]==x+y) return false;
		//���Խ���
		if(rec[i]-i==y-x) return false;
		return true; 
	}
} 
*/
void dfs(int rec[],int row,int n){
	//�������������һ�д������һ����� 
	if(row==n){
		cot++;
		return;
	}
	for(int col=0;col<n;++col){
		//���row��colλ���Ƿ�Ϸ���������һ�� 
		bool ok=true;
		//���֮ǰ���е����Ƿ�������ڵ�col 
		for(int i=0;i<row;++i){
			//i+rec[i]==row+col||rec[i]-i==col-row�ǶԽ��ߵĹ��� 
			if(rec[i]==col||i+rec[i]==row+col||rec[i]-i==col-row){
				ok=false;
				break;
			} 
		}
		if(ok){
			//��¼��row��ѡ��col�� 
			rec[row]=col;
			//������һ�� 
			dfs(rec,row+1,n);
			rec[row]=0;//���л��� 
		}
	} 
}
int main(){
	cin>>n;
	int res[n];
	int row=0;
	dfs(res,row,n);
	cout<<cot<<endl;
	
	return 0;
}

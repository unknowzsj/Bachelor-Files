#include<bits/stdc++.h>
using namespace std;
//�ݹ����ʱ��Ҫ�ں������ݵĵط��ñ��ʽ��++i�� 
int n,k;
//���ݵ���a-ԭʼ���飬k-ʣ�������cur-�����Ĳ��(�ڼ�����)��ints-�γɵļ��� 
void dfs(int a[],int len,int k,int cur,vector<int> ints){
	//�߽�����
	if(k==0){
		int kk=0;
		for(int i=0;i<ints.size();++i){
			cout<<ints[i]<<"+";
			kk+=ints[i]; 
		}
		cout<<"yes("<<kk<<"=";
		cout<<")"<<endl;
		exit(0);
	} 
	if(cur==len || k<0) return;
	
	//���õ�cur���ֵ
	cur++; 
	bfs(a,len,k,cur,ints);
	//�õ�cur���ֵ
	ints.push_back(a[cur]);
	k-=a[cur]; 
	bfs(a,len,k,cur,ints);
	ints.pop_back();//���� 
}
int main(){
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>k;
	vector<int> ints;
	int cur=0;
	bfs(a,n,k,cur,ints);
	
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;

vector<int> blog[100000];
//ojû���⣬�Լ����Գ������⣬�Ժ��ٽ��	
int main(){
	//������ȡ 
	int N,D,K;
	cin>>N>>D>>K;
	int id,t;
	//��¼��־ �ѵ� 
	for(int i=0;i<N;++i){
		cin>>t;
		cin>>id;
		blog[id].push_back(t);
	}
	//����ÿ��id���������� 
	int sum[N];
	int m=0; 	
	for(int i=0;i<100000;++i){
		//����Ҫ����Ҫ���K 
		if(blog[i].size()>=K){
			int s=0;
			int max=0;
			//�������г�ȡ 
			sort(blog[i].begin(),blog[i].end());
			for(int j=0;j<blog[i].size();++j){
				for(int l=j;l<blog[i].size();++l){
					if(blog[i][j]+10>blog[i][l]) s++;
				}
				if(max<s) max=s; 
			}
			if(max>=K) sum[m++]=i;			
		}
	}
	sort(sum,sum+m);
	for(int i=0;i<m;++i){
		cout<<sum[i]<<endl;
	}
} 

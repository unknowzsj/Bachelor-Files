#include<iostream>
#include<map>
using namespace std;
map<int,bool> res;
int N;
//��ʱ��Ӧ��ʱmap��while��Ѱ������ 
int main(){
	cin>>N;
	int val[N];
	for(int i=0;i<N;++i){
		cin>>val[i];
	}
	//��ʼ�� 
	res[val[0]]=true;
	for(int i=1;i<N;++i){
		//���Ѿ����ڣ���+1 
		while(res[val[i]]){
			val[i]++;
		}
		//���ظ�ʱ��true 
		res[val[i]]=true;
	}
	
	for(int i=0;i<N;++i){
		cout<<val[i]<<" ";
	}
} 

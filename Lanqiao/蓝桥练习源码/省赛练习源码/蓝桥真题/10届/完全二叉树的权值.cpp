#include<iostream>
#include<queue>
using namespace std;
//��ʱ 
int N;
int sum[1000];
queue<int> res;
//��ȫ���������������
int layer(int n){
	int l=1;
	for(int i=1;i<1000;++i){
		l=l*2;
		if((l-1)==n) return i;
	}
} 
void bfs(int cur,int ly,int a[]){
	//�˳� 
	if(cur==ly) return; 
	//��cur��ĸ�����������㶼��num 
	int num=(1<<(cur-1));
	//��ÿ������������ 
	for(int i=num;i<num+num;++i){
		res.push(a[i]); 
	}
}
int main(){
	cin>>N;
	int lys=layer(N);
	int a[N+1];
	for(int i=1;i<=N;++i){
		cin>>a[i];
	}
	//��ʼ��
	sum[1]=a[1]; 
	res.push(a[1]);
	//�ڶ��㿪ʼ 
	int cur=1;
	int t=res.size(); 
	while(!res.empty()){
		int b=res.front();
		sum[cur]+=b;
		res.pop();
		t--;
		//������һ�� 
		if(t==0){
			cur++; 
			bfs(cur,lys,a);
			t=res.size();
		}
	} 
	int max=0;
	int s=0;
	//�ҵ����ֵ 
	for(int i=1;i<=lys;++i){
		if(sum[i]>max){
			max=sum[i];
		}
	}
	//�ҵ����ֵ����С���� 
	for(int i=1;i<=lys;++i){
		if(sum[i]==max){
			s=i;
			break;
		}
	}
	cout<<s<<endl;
	
	return 0;
}

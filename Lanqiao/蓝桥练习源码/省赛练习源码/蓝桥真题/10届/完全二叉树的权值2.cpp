#include<iostream>
#include<queue>
using namespace std;
//ʱ������δͨ�����о���ƽ̨���� 
int N;
int sum[100];
//����� 
int layer(int n){
	int l;
	for(int i=1;i<100;++i){
		l=(1<<i); 
		if((l-1)==n) return i;
	}
} 

int main(){
	cin>>N;
	int lys=layer(N);
	int a[N+1];
	for(int i=1;i<=N;++i){
		cin>>a[i];
	}
	//����ÿһ��ĺ� 
	for(int i=1;i<=lys;++i){
		int num=(1<<(i-1));
		for(int j=num;j<2*num;++j){
			sum[i]+=a[j];
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

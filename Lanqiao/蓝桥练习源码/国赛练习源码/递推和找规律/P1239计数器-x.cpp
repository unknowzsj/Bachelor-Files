#include<bits/stdc++.h>//δ���0�ļ���������� 
using namespace std;
typedef long long ll;
int res[10];//��¼ÿ�����ֵĸ��� 
int num[10];//��¼�ֽ������ 
int N;//�������
//������(a��b��)
ll quick(ll a,ll b){
	ll ans=1,base=a;
	while(b>0){
		if(b&1) ans*=base;
		base*=base;
		b>>=1;
	}
	return ans;
} 
 
int main(){
	cin>>N;
	
	int len=0;//��¼���ֳ��� 
	while(N){//�ֽ����� 
		num[len]=N%10;
		N/=10;
		len++;
	}
	//������� 
	for(int j=0;j<=9;++j){//���μ���0-9 
		for(int i=0;i<len;++i){//���ڲ�ͬ��λ�� 
			if(j==0&&i==len-1) continue;//���0λ�����λ������
			 
			int sum=0;
			int mup=1;
			//����ǰ��λ��� 
			for(int k=i+1;k<len;++k){
				mup*=(num[k]+1);//ǰ��λ��� 
			}
			//�����λ������ 
			for(int l=0;l<i;++l){
				sum+=num[l]*quick(10,l); 
			}
			//j==0�������� 
			if(j==0){
				 res[j]+=(sum+1)*(mup-1); 
			} 
			else if(j<=num[i]) res[j]+=(sum+1)*mup; 
			else res[j]+=(sum+1)*(mup-1); 
		}
	}
	
	for(int i=0;i<=9;++i) cout<<res[i]<<endl;
	
	return 0;
}

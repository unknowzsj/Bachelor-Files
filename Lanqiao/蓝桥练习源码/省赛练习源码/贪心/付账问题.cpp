#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//�������Ҫ 

int main(){
  ll n;//����ʱ���ʱint��Խ�� 
  double s;
	cin>>n>>s;
	int moy[n];
	double avg=s*1.0/n;
	double ans=0;
	//��ȡǮ�� 
	for(int i=0;i<n;++i){
		cin>>moy[i];
	}
	//����ǰ������������� 
	sort(moy,moy+n);
	//��ȥƽ����ʣ��Ǯ 
	for(int i=0;i<n;++i){
		//С��ƽ���� 
		if(moy[i]*(n-i)<s){
			ans+=(moy[i]-avg)*(moy[i]-avg);
			s-=moy[i];
		}else{//��֮�����ƽ��������ʣ�µĽ���ƽ�� 
			double cur=s*1.0/(n-i); 
			ans+=(cur-avg)*(cur-avg)*(n-i);
			break; 
		}
	}
	printf("%.4lf",sqrt(ans/n));
	
	return 0;
}



#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll Max=59084709587505;
//set-�����Ҳ��ظ� 
int main(){
	int a[]={3,5,7};
	ll t=1;//��ʼ����
	set<ll> res; 
	while(1){
		for(int i=0;i<3;++i){
			ll tt=t*a[i];
			if(tt<=Max) res.insert(tt);//ֻ��ȡ�����ֵС���� 
		}
		t=(*res.upper_bound(t));//��t�����С����lower_bound-���ڵ���t����С�� 
		if(t>=Max) break;
	}
	cout<<res.size()<<endl;
	
	return 0;
} 

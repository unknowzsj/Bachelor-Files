#include<bits/stdc++.h>
using namespace std;
//̰�ģ�ÿ��ɾ��������--?
//ɾ����һ������n��n+1���������˳�� 
string n;
int k;
 
int main(){
	cin>>n>>k;
	int len = n.size();
	for(int i=0;i<k;++i){
		int lc=n.size();//����С�������У�ɾ�����һ�� 
		for(int j=0;j<len;++j){
			if(n[j]>n[j+1]){
				lc=j;
				break;
			}
		}
		n.erase(lc,1);//ָ��λ�õ�ɾ������ 
	}
	//������ǰ���0ȥ�� 
	for(int i=0;i<n.size();){
		if(n[i]!='0') break;
		else n.erase(i,1);
	}
	//��ɾ����nΪ0��������жϲ���ֵ 
	if(n.size()==0) n=n+'0';
	cout<<n<<endl;
	
	return 0; 
} 

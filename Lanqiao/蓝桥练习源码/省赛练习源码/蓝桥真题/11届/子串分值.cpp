#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
//���ַ����ʺϸ��⣬--����-- 
string str;
int n;
int cts=0;
//�ж��Ƿ���� 
map<string,bool> statue;

int main(){
	cin>>str;
	n=str.size();
	long long s=(1<<n)-1;
	string res[s];
	for(int i=(1<<n)-1;i>0;--i){
		string strs;
		int o=0; 
		for(int j=n-1;j>=0;--j){
			if(((i>>j)&1)==1){
				strs=strs+str[j];
			}
		}
		//�ж��Ƿ��Ѿ����ֹ����Ӽ� 
		if(!statue[strs]){
			//�жϵ����ĸ��� 
			cout<<strs<<endl;
			statue[strs]=true;
			for(int k=0;k<strs.size();++k){
				bool c=false;
				for(int l=0;l<strs.size()&&l!=k;++l){
					if(strs[k]==strs[l]) c=true;
				}
				if(!c) cts++; 
			}
		} 
	}
	cout<<cts<<endl;
	
	return 0; 
} 

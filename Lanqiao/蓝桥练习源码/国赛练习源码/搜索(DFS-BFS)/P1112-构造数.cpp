#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll jz1,jz2,num1,num2,k;
ll wn[10000010];//��������

void chong(){
	for(int jz=jz1;jz<=jz2;++jz){
		for(int i=1;i<jz;++i){//��һλ,����Ϊ0 
			for(int j=0;j<jz;++j){
				if(i!=j){//����λ�ò���� 
					int x=0,len=0;//xΪ���������lenΪ���ֳ��� 
					while(x<=num2){
						if(len%2==0){
							x=x*jz+i;//�����ʮ����,ÿ��һλ�������еĳ��Խ��� 
							++len;
						}else{
							x=x*jz+j;
							++len; 
						}
						if(x>=num1&&x<=num2) ++wn[x];//�����Ǹý��ƵĲ����� 
					}
				}
			} 
		}
	}
}

int main(){
	cin>>jz1>>jz2>>num1>>num2>>k;
	chong();//�������� 
	for(int i=num1;i<=num2;++i){
		if(wn[i]==k) cout<<i<<endl;
	}
	
	return 0;
} 

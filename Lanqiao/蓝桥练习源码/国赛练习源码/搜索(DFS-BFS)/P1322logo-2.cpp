#include<bits/stdc++.h>
using namespace std;
string str;//�����ո�������ȡ 

int fuc(){
	char sta,nth;
	string wde;
	int k,all=0;
	//��ʼ����
	while(cin>>sta){
		if(sta==']') break;//����]��ʾ��������
		cin>>wde>>k;//�����β���ַ����ߵĲ�����ѭ��������
		//repeat,�ظ� 
		if(sta=='R'){
			nth=getchar();//����[ 
			all+=k*fuc();//��ʼ�ڲ���ѭ��
			nth=getchar();//��]��ġ��� 
		} 
		//bk,���� 
		if(sta=='B'){
			nth=getchar();//��K 
			all-=k; 
		}
		//fd,ǰ�� 
		if(sta=='F'){
			nth=getchar();//��D 
			all+=k; 
		}
		if(nth==']') break;//��������]����һֱ��ȡ���룬ǰ�����������жϣ���ֹ��© 
	}
	return all;//���ؼ���Ĳ��� 
} 
int main(){
	cout<<abs(fuc());//abs()ȡ����ֵ 
	
	return 0;
}

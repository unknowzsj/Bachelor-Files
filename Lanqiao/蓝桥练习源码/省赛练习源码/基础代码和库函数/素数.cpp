#include<iostream>
#include<algorithm>
using namespace std;

bool check(int test){
	//�ж�test���Ƿ�Ϊ���� 
	for(int i=2;i<test;++i){
		if(test%i==0) return false;
	}
	//������ɹ� 
	return true;
}
int main(){
	int n=check(7);
	cout<<n<<endl;
}

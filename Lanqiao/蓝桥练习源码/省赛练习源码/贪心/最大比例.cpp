#include<bits/stdc++.h>
using namespace std;

int N;
//���Լ�������� 
int gcb(int a,int b){
	if(b==0) return a;
	return gcb(b,a%b); 
} 
int main(){
	cin>>N;
	int nums[N];
	int big,small; 
	double min=INT_MAX;
	int up,down; 
	//��ȡ���� 
	for(int i=0;i<N;++i){
		cin>>nums[i];
	}
	sort(nums,nums+N);
	/*����㣺δ���ǹ��ȵ�2�κ�3����󹫱�ʱ1�Σ�������2�� 
	//������С����,i<N-1,��ֹԽ�� 
	for(int i=0;i<N-1;++i){
		double 	dvi=nums[i+1]/nums[i];
		if(min>dvi){
			big=nums[i+1];
			small=nums[i];
		}
	}
	//�������,���Ӻͷ�ĸ�������Լ�� 
	int tge=gcb(big,small);
	cout<<big/tge<<"/"<<small/tge<<endl;
	*/
	
} 

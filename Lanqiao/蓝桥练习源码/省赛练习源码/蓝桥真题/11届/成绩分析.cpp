#include<iostream>
#include<algorithm>
#include<cstdio>
#include<iomanip>
using namespace std;
//cin��printf���Ի��� 
int n;
int main(){
	scanf("%d",&n);
	int grades[n];
	//���ʹ��int������� 
	double sum=0;
	for(int i=0;i<n;++i){
		cin>>grades[i];
		sum+=grades[i];
	}
	sort(grades,grades+n);
	//��߷� 
	printf("%d\n",grades[n-1]);
	//��߷� 
	printf("%d\n",grades[0]);
	//ƽ����
	double avg=sum/n;
	//����С�����ֻ��������� 
	printf("%.2f\n",avg);
	//4λ��Ч����
	cout<<setprecision(4)<<avg<<endl; 
	//cout--2��λС�� 
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<avg<<endl;
	
	
	 
}

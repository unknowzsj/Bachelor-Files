#include<bits/stdc++.h>
using namespace std;

int N;
int a[100];
int res[100]; 
void dfs(int num){
	if(num==N){
		for(int i=0;i<N;++i){
			printf("%5d",res[i]);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=N;++i){
		if(!a[i]){
			a[i]=1;
			res[num]=i;//���� 
			dfs(num+1);
			//���� ,����¼����ָ� 
			a[i]=0; 
		}
	}
	
}
int main(){
	cin>>N;
	dfs(0);//��ʼΪ0���� 
	
	return 0;
} 

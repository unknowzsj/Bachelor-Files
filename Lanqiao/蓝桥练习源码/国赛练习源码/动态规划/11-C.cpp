#include<bits/stdc++.h>
using namespace std;
int cts;//��dp 
string ltrs="tocyjkdzcieoiodfpbgcncsrjbhmugdnojjddhllnofawllbhf"
			"iadgdcdjstemphmnjihecoapdjjrprrqnhgccevdarufmliqij"
			"gihhfgdcmxvicfauachlifhafpdccfseflcdgjncadfclvfmad"
			"vrnaaahahndsikzssoywakgnfjjaihtniptwoulxbaeqkqhfwl";  			
int dp[210];

int main(){
	//�����ܹ��ж��ٸ���ͬ����ĸ 
	for(int i=0;i<ltrs.size();++i){
		dp[i]=1;
		for(int j=i-1;j>=0;--j){
			if(ltrs[j]<ltrs[i]) dp[i]+=dp[j];
			else if(ltrs[i]==ltrs[j]) dp[i]-=dp[j];
		}
	}
	for(int i=0;i<200;++i){
		cts+=dp[i];
	}
	cout<<cts;
	
	return 0;
}

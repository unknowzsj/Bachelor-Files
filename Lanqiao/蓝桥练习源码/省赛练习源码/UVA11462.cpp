#include<cstdio>
#include<cstring>
using namespace std;
//����ɣ�δͨ�����Ե� 
const int MAX=100;

int main(){
	//A-65
	char bfsec[MAX];
	char afsec[MAX];
	int cmp1[MAX];
	int cmp2[MAX];
	int len;
	bool flag=true;
	 
	for(int i=0;i<MAX;i++){
		cmp1[i]=-1;
		cmp2[i]=-1;
	}

	scanf("%s",afsec);
	scanf("%s",bfsec);
	len=strlen(afsec);
	//ÿ��λ�ö�+1�ˣ����´��� 
	for(int i=0;i<len;i++){
		cmp1[bfsec[i]-'A'+1]++;
		cmp2[afsec[i]-'A']++;
	}

	for(int i=0;i<len;i++){
		if(cmp1[i]!=cmp2[i]) flag=false; 
	}
	
	if(flag==true) printf("YES");
	else printf("NO");
} 

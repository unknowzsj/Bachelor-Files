//
// Created by zhengwei.
//

/*
标题：最大公共子串

最大公共子串长度问题就是：
求两个串的所有子串中能够匹配上的最大长度是多少。

比如："abcdkkk" 和 "baabcdadabc"，
可以找到的最长的公共子串是"abcd",所以最大公共子串长度为4。

下面的程序是采用矩阵法进行求解的，这对串的规模不大的情况还是比较有效的解法。

请分析该解法的思路，并补全划线部分缺失的代码。


#include <stdio.h>
#include <string.h>

#define N 256
int f(const char* s1, const char* s2)
{
	int a[N][N];
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i,j;

	memset(a,0,sizeof(int)*N*N);
	int max = 0;
	for(i=1; i<=len1; i++){
		for(j=1; j<=len2; j++){
			if(s1[i-1]==s2[j-1]) {
				a[i][j] = __________________________;  //填空
				if(a[i][j] > max) max = a[i][j];
			}
		}
	}

	return max;
}

int main()
{
	printf("%d\n", f("abcdkkk", "baabcdadabc"));
	return 0;
}

注意：只提交缺少的代码，不要提交已有的代码和符号。也不要提交说明性文字。

*/

#include <stdio.h>
#include <string.h>

#define N 256
int f(const char* s1, const char* s2)
{
    int a[N][N];
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i,j;

    memset(a,0,sizeof(int)*N*N);
    int max = 0;
    for(i=1; i<=len1; i++){
        for(j=1; j<=len2; j++){
            if(s1[i-1]==s2[j-1]) {
                a[i][j] = a[i-1][j-1]+1;  //填空
                if(a[i][j] > max) max = a[i][j];
            }
        }
    }

    return max;
}

int main()
{
    printf("%d\n", f("abefecd", "becd"));
    return 0;
}

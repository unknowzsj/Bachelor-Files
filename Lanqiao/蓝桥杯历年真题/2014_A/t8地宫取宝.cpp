//
// Created by zhengwei.
//

/*
标题：地宫取宝

    X 国王有一个地宫宝库。是 n x m 个格子的矩阵。每个格子放一件宝贝。每个宝贝贴着价值标签。

    地宫的入口在左上角，出口在右下角。

    小明被带到地宫的入口，国王要求他只能向右或向下行走。

    走过某个格子时，如果那个格子中的宝贝价值比小明手中任意宝贝价值都大，小明就可以拿起它（当然，也可以不拿）。

    当小明走到出口时，如果他手中的宝贝恰好是k件，则这些宝贝就可以送给小明。

    请你帮小明算一算，在给定的局面下，他有多少种不同的行动方案能获得这k件宝贝。

【数据格式】

    输入一行3个整数，用空格分开：n m k (1<=n,m<=50, 1<=k<=12)

    接下来有 n 行数据，每行有 m 个整数 Ci (0<=Ci<=12)代表这个格子上的宝物的价值

    要求输出一个整数，表示正好取k个宝贝的行动方案数。该数字可能很大，输出它对 1000000007 取模的结果。

例如，输入：
2 2 2
1 2
2 1
程序应该输出：
2

再例如，输入：
2 3 2
1 2 3
2 1 5
程序应该输出：
14


资源约定：
峰值内存消耗 < 256M
CPU消耗  < 1000ms


请严格按要求输出，不要画蛇添足地打印类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件中 #include <xxx>， 不能通过工程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。

*/
#include <iostream>
#include <cstring>

using namespace std;
const int MOD = 1000000007;
int n, m, k;
int data[50][50];

long long ans;
long long cache[50][50][14][13];

void dfs(int x, int y, int max, int cnt) {
    if (x == n || y == m || cnt > k)
        return;
    int cur = data[x][y];
    if (x == n - 1 && y == m - 1)//已经面临最后一个格子
    {
        if (cnt == k || (cnt == k - 1 && cur > max)) {
            ans++;
            if (ans > MOD)
                ans %= MOD;
        }
    }
    if (cur > max) {//可以取这个物品
        dfs(x, y + 1, cur, cnt + 1);
        dfs(x + 1, y, cur, cnt + 1);
    }
    //对于价值较小，或者价值大但不去这个物品的情况如下
    dfs(x, y + 1, max, cnt);
    dfs(x + 1, y, max, cnt);

}

long long dfs2(int x, int y, int max, int cnt) {
//    查缓存
    if (cache[x][y][max+1][cnt] != -1)
        return cache[x][y][max+1][cnt];

    long long ans = 0;
    if (x == n || y == m || cnt > k)
        return 0;
    int cur = data[x][y];
    if (x == n - 1 && y == m - 1)//已经面临最后一个格子
    {
        if (cnt == k || (cnt == k - 1 && cur > max)) {
            ans++;
            if (ans > MOD)
                ans %= MOD;
        }
        return ans;
    }
    if (cur > max) {//可以取这个物品
        ans += dfs2(x, y + 1, cur, cnt + 1);
        ans += dfs2(x + 1, y, cur, cnt + 1);
    }
    //对于价值较小，或者价值大但不去这个物品的情况如下
    ans += dfs2(x, y + 1, max, cnt);
    ans += dfs2(x + 1, y, max, cnt);

    cache[x][y][max+1][cnt]=ans % MOD;
    return cache[x][y][max+1][cnt];
}

int main(int argc, const char *argv[]) {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &data[i][j]);
        }
    }
//    dfs(0, 0, -1, 0);//第一个点的价值可能是0
//    printf("%d\n", ans);
memset(cache,-1, sizeof(cache));
    printf("%lli\n", dfs2(0, 0, -1, 0));
    return 0;
}
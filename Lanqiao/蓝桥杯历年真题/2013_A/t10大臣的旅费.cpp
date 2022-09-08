/*
标题：大臣的旅费

    很久以前，T王国空前繁荣。为了更好地管理国家，王国修建了大量的快速路，用于连接首都和王国内的各大城市。

    为节省经费，T国的大臣们经过思考，制定了一套优秀的修建方案，使得任何一个大城市都能从首都直接或者
    通过其他大城市间接到达。

    同时，如果不重复经过大城市，从首都到达每个大城市的方案都是唯一的。

    J是T国重要大臣，他巡查于各大城市之间，体察民情。所以，从一个城市马不停蹄地到另一个城市成了J最常做的事情。
    他有一个钱袋，用于存放往来城市间的路费。

    聪明的J发现，如果不在某个城市停下来修整，在连续行进过程中，他所花的路费与他已走过的距离有关，
    在走第x千米到第x+1千米这一千米中（x是整数），
    他花费的路费是x+10这么多。也就是说走1千米花费11，走2千米要花费23。

    J大臣想知道：他从某一个城市出发，中间不休息，到达另一个城市，所有可能花费的路费中最多是多少呢？

输入格式：
输入的第一行包含一个整数n，表示包括首都在内的T王国的城市数
城市从1开始依次编号，1号城市为首都。
接下来n-1行，描述T国的高速路（T国的高速路一定是n-1条）
每行三个整数Pi, Qi, Di，表示城市Pi和城市Qi之间有一条高速路，长度为Di千米。

输出格式:
输出一个整数，表示大臣J最多花费的路费是多少。

样例输入:
5
1 2 2
1 3 1
2 4 5
2 5 4

样例输出:
135

样例说明:
大臣J从城市4到城市5要花费135的路费。


根据资源限制尽可能考虑支持更大的数据规模。


资源约定：
峰值内存消耗 < 64M
CPU消耗  < 5000ms


请严格按要求输出，不要画蛇添足地打印类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件中 #include <xxx>， 不能通过工程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。

 */
//本题求树的直径
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int n;

class Point {
public:
    int num, cost;//点的编号，和到这个点的距离
};

int ans;

void f(vector<Point> m[], int vis[], int i, int j, int dis) {
//查看是否直接邻居
    vector<Point> nei_i = m[i];//i的邻居的集合
    for (int k = 0; k < nei_i.size(); k++) {
        if (nei_i[k].num == j)//i的直接邻居中有j
        {
            ans = max(ans, dis + nei_i[k].cost);
            return;
        }
    }

    vis[i] = 0;
//    不是直接邻居，就从现有的直接邻居去连接
    for (int k = 0; k < nei_i.size(); k++) {
        int num = nei_i[k].num;
        if (vis[num] == -1)
            f(m, vis, num, j, dis + nei_i[k].cost);
    }
    vis[i] = -1;
}
int pnt=-1;
void dfs(vector<Point> m[], int vis[], int start,int dis) {
    vector<Point> nei_i = m[start];//i的邻居的集合
    vis[start]=0;
    bool isLeaf=true;
    for (int k = 0; k < nei_i.size(); k++) {
        int num = nei_i[k].num;//邻居点的标号
        if (vis[num] == -1){
            isLeaf= false;
            dfs(m, vis, num,dis + nei_i[k].cost);
        }
    }
    vis[start]=-1;
    if(isLeaf){
        if(dis>ans){
            ans=dis;
            pnt=start;
        }
    }
}
int dis2money(int dis) {
    return 11 * dis + dis * (dis - 1) / 2;
}

int main(int argc, const char *argv[]) {
    scanf("%d", &n);
    vector<Point> m[n + 1];
    int vis[n + 1];
    memset(vis, -1, sizeof(vis));//初始化为-1
    for (int i = 0; i < n - 1; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        Point p1 = {b, c};
        Point p2 = {a, c};
        m[a].push_back(p1);
        m[b].push_back(p2);
    }
/*1.暴力，求任意两点间距离，并维护最长距离*/
    /*for (int i = 1; i <= n - 1; ++i) {
        for (int j = i + 1; j <= n; ++j) {
//            int ans_t = ans;
            f(m, vis, i, j, 0);
//            if (ans > ans_t) {
//            cout << i << " " << j << " " << ans << endl;
//            }
        }
    }*/

    dfs(m,vis,1,0);
    ans=0;
    dfs(m,vis,pnt,0);
//    printf("%d\n", pnt);
    printf("%d\n", dis2money(ans));
//    printf("%d\n", ans);
    return 0;
}
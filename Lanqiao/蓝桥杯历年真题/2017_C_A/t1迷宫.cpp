//
// Created by zhengwei.
//
/*
标题：迷宫

X星球的一处迷宫游乐场建在某个小山坡上。
它是由10x10相互连通的小房间组成的。

房间的地板上写着一个很大的字母。
我们假设玩家是面朝上坡的方向站立，则：
L表示走到左边的房间，
R表示走到右边的房间，
U表示走到上坡方向的房间，
D表示走到下坡方向的房间。

X星球的居民有点懒，不愿意费力思考。
他们更喜欢玩运气类的游戏。这个游戏也是如此！

开始的时候，直升机把100名玩家放入一个个小房间内。
玩家一定要按照地上的字母移动。

迷宫地图如下：
------------
UDDLUULRUL
UURLLLRRRU
RRUURLDLRD
RUDDDDUUUU
URUDLLRRUU
DURLRLDLRL
ULLURLLRDU
RDLULLRDDD
UUDDUDUDLL
ULRDLUURRR
------------

请你计算一下，最后，有多少玩家会走出迷宫?
而不是在里边兜圈子。

请提交该整数，表示走出迷宫的玩家数目，不要填写任何多余的内容。

如果你还没明白游戏规则，可以参看一个简化的4x4迷宫的解说图：
p4-1.png

*/
#include <iostream>

using namespace std;
string data[10];

int ans;
int vis[10][10];
bool solve(int i, int j) {
    if (i < 0 || i > 9 || j < 0 || j > 9)
        return true;
    if(vis[i][j]==1)
        return false;
    vis[i][j] = 1;
    switch(data[i][j]){
        case 'U':
            return solve(i-1,j);
        case 'D':
            return solve(i+1,j);
        case 'L':
            return solve(i,j-1);
        case 'R':
            return solve(i,j+1);
        default:
            return false;
    }
}

int main(int argc, const char *argv[]) {
    data[0] = "UDDLUULRUL";
    data[1] = "UURLLLRRRU";
    data[2] = "RRUURLDLRD";
    data[3] = "RUDDDDUUUU";
    data[4] = "URUDLLRRUU";
    data[5] = "DURLRLDLRL";
    data[6] = "ULLURLLRDU";
    data[7] = "RDLULLRDDD";
    data[8] = "UUDDUDUDLL";
    data[9] = "ULRDLUURRR";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            memset(vis,0, sizeof(vis));
            bool res = solve(i, j);
            if (res)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define N (int)1e6 + 1
char str[N];
int c1[N];
int c2[N];
int l1[N];
int l2[N];
int cnt1;
int cnt2;
int dfs(int l,int r) {
    if (c1[r] >= l) {
        int ans = dfs(l, c1[r] - 1);
        if (ans == 1) {
            ++cnt1;
            return 1;
        }
        return (ans | dfs(c1[r] + 1, r));
    }
    if (c2[r] >= l) {
        int ans = dfs(l, c2[r] - 1);
        if (ans == 0) {
            ++cnt2;
            return 0;
        }
        return (ans & dfs(c2[r] + 1, r));
    }
    if (str[l] == '(' && str[r] == ')') {
        return dfs(l + 1, r - 1);
    }
    return str[l] - '0';
}
int main(int argc, const char * argv[]) {
    scanf("%s",str + 1);
    int len = strlen(str + 1);
    int x = 0;

    for (int i = 1; i<=len; ++i) {
        if (str[i] == '(') {
            ++x;
        }else if (str[i] == ')') {
            --x;
        }else if (str[i] == '|') {
            l1[x] = i;
        }else if (str[i] == '&') {
            l2[x] = i;
        }
        c1[i] = l1[x];
        c2[i] = l2[x];
    }
    int ans = dfs(1, len);
    printf("%d\n%d %d\n",ans,cnt2,cnt1);
    return 0;
}
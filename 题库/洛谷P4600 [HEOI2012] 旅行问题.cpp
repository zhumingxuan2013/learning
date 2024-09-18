#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline int read() {
	char c = getchar(); int x = 0, f = 1;
	while (c < '0' || c > '9') { if (c == '-') f = -1; c = getchar(); }
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}

const int N = 1000005, lhc = 1e9 + 7;

int n, ch[N][26], fail[N], ttt, ans[N]; char str[N];
int lnk[N], nxt[N], fst[N], tot;
int dep[N], fa[N], sz[N], son[N], top[N];
vector<int> rec[N]; 

void BFS() {
	queue<int> que; while (!que.empty()) que.pop();
	for (int i = 0; i < 26; i++) if (ch[0][i]) que.push(ch[0][i]);
	while (!que.empty()) {
		int u = que.front(); que.pop();
		for (int i = 0; i < 26; i++)
			if (!ch[u][i]) ch[u][i] = ch[fail[u]][i];
			else que.push(ch[u][i]), fail[ch[u][i]] = ch[fail[u]][i];
	}
}

void adde(int u, int v) {
	// printf("adde: %d %d\n", u, v);
	lnk[++tot] = v; nxt[tot] = fst[u]; fst[u] = tot;
}
void gt(int u, int f) {
	dep[u] = dep[f] + 1; fa[u] = f; sz[u] = 1;
	for (int i = fst[u]; i; i = nxt[i]) {
		int v = lnk[i];
		if (v != f) {
			gt(v, u), sz[u] += sz[v];
			if (sz[v] > sz[son[u]]) son[u] = v;
		}
	}
}
void gt_tp(int u, int tp) {
	top[u] = tp; if (son[u]) gt_tp(son[u], tp);
	for (int i = fst[u]; i; i = nxt[i]) {
		int v = lnk[i]; if (v != fa[u] && v != son[u]) gt_tp(v, v);
	}
}
int LCA(int u, int v) {
	while (top[u] != top[v]) {
		if (dep[top[u]] < dep[top[v]]) swap(u, v);
		u = fa[top[u]];
	}
	return dep[u] < dep[v] ? u : v;
}

int main() {
	n = read();
	for (int i = 1; i <= n; i++) {
		scanf("%s", str + 1);
		int u = 0, l = strlen(str + 1);
		rec[i].resize(l + 1);
		for (int j = 1; j <= l; j++) {
			int p = str[j] - 'a', lst = u;
			if (!ch[u][p]) ch[u][p] = ++ttt;
			u = ch[u][p], rec[i][j] = u, ans[u] = ((ll)ans[lst] * 26ll + p) % lhc;
		}
	}
	BFS(); for (int i = 1; i <= ttt; i++) adde(fail[i], i);
	gt(0, 0), gt_tp(0, 0);
	int q = read();
	while (q--) {
		int i = read(), j = read(), k = read(), l = read();
		int u = rec[i][j], v = rec[k][l];
		printf("%d\n", ans[LCA(u, v)]);
	}
	return 0;
}
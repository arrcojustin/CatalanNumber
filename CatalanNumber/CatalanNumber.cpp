#include <iostream>
using namespace std;
int n, m, a[30] ;
int static dfs(int d) {
	if (d == m + 1) {
		for (int i = 1; i <= m; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		return 1;
	}
	for (int i = a[d - 1] + 1; i <= n;i++) {
		a[d] = i;
		dfs(d + 1);
	}
};

int main() {
	cin >> n >> m;
	dfs(1);
}
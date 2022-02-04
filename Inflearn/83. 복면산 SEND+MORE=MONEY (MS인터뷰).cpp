﻿#include <iostream>

using namespace std;

int a[10];
int ch[11];

int send() {
	return a[6] * 1000 + a[1] * 100 + a[3] * 10 + a[0];
}

int more() {
	return a[2] * 1000 + a[4] * 100 + a[5] * 10 + a[1];
}

int money() {
	return a[2] * 10000 + a[4] * 1000 + a[3] * 100 + a[1] * 10 + a[7];
}

void dfs(int k) {
	if (k == 8) {
		if (send() + more() == money()) {
			if (a[2] == 0 || a[6] == 0) return;
			printf("  %d %d %d %d\n", a[6], a[1], a[3], a[0]);
			printf("+ %d %d %d %d\n", a[2], a[4], a[5], a[1]);
			printf("---------\n");
			printf("%d %d %d %d %d\n", a[2], a[4], a[3], a[1], a[7]);
		}
	}
	else {
		for (int i = 0; i < 10; i++) {
			if (ch[i] == 0) {
				ch[i] = 1;
				a[k] = i;
				dfs(k + 1);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	
	dfs(0);

	return 0;
}
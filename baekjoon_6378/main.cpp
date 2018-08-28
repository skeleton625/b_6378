#include <cstdio>

int m, s;
char n[1001];
int main() {
	while (scanf_s("%s", n,1001) && (n[0] != 48)) {
		for (int i = 0; n[i]; i++) {
			m += n[i] - '0';
			if (m >= 10) m = m / 10 + m % 10;
		}
		printf("%d\n",m);
		m = 0;
	}
	return 0;
}
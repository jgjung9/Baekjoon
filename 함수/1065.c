#include <stdio.h>

int numFunc(int n);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", numFunc(n));
}

int numFunc(int n) {
	int count = 0;
	int a, b, c, d, e;
	if (n >= 100) {
		count = 99;
		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			d = a - b;
			e = b - c;
			if (d == e) {
				count++;
			}
		}
	}
	else
		count = n;
	return count;
}
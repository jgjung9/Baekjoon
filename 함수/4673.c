#include <stdio.h>

int nonselfNum(int n);

int main() {
	int selfNum[10001] = { 0 };

	for (int i = 0; i < 10000; i++) {
		if (nonselfNum(i) < 10001)
			selfNum[nonselfNum(i)] = 1;
	}

	for (int i = 0; i < 10001; i++) {
		if (selfNum[i] == 0)
			printf("%d\n", i);
	}

}
int nonselfNum(int n) {
	int a, b, c, d;
	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;
	return n + a + b + c + d;
}
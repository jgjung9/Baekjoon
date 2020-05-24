#include <stdio.h>

int main() {
	int n;
	int x = 1;
	char ch, remove;
	scanf("%d", &n);

	remove = getchar();

	int a[10000] = { 0 };

	for (int i = 0; i < n; i++) {
		while ((ch = getchar()) != '\n') {
			if (ch == 'O') {
				a[i] += (x * 1);
				x++;
			}
			else if (ch == 'X')
				x = 1;
		}
		x = 1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
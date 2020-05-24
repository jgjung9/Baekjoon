#include <stdio.h>

int main() {
	int num[10] = { 0 }, a[42] = { 0 };
	int b = 0,result=0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		b = num[i] % 42;
		a[b] += 1;
	}

	for (int i = 0; i < 42; i++) {
		if (a[i] != 0)
			result += 1;
	}

	printf("%d", result);
	return 0;
}
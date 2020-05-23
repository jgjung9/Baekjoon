#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <=n ;j++) {
			if (j % 2 == 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		for (int k = 1; k <=n ;k++) {
			if (k % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
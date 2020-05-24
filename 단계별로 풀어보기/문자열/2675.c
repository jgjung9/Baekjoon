#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	char str[161] = { 0 };
	for (int i = 0; i < t; i++) {
		int r;
		char s[20];
		scanf("%d %s", &r,&s);
		for (int k = 0; s[k] != '\0';k++) {
			for (int j = 0; j < r; j++) {
				printf("%c", s[k]);
			}
		}
		printf("\n");
	}
	return 0;
}
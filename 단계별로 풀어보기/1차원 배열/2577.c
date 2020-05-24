#include <stdio.h>

int main() {
	int num[10] = { 0 };
	int a[3],n;
	int result;
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	result = a[0] * a[1] * a[2];
	
	while (result != 0) {
		n = result % 10;
		switch (n) {
		case 0:
			num[0] += 1;
			break;
		case 1:
			num[1] += 1;
			break;
		case 2:
			num[2] += 1;
			break;
		case 3:
			num[3] += 1;
			break;
		case 4:
			num[4] += 1;
			break;
		case 5:
			num[5] += 1;
			break;
		case 6:
			num[6] += 1;
			break;
		case 7:
			num[7] += 1;
			break;
		case 8:
			num[8] += 1;
			break;
		case 9:
			num[9] += 1;
			break;
		}
		result = result / 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}

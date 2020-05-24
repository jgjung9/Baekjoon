#include <stdio.h>

int main() {
	int num[9];
	int max=0,n=0;
	for (int i = 0; i < 9 ; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 9 ; i++) {
		if (max == 0){
			max = num[i];
            n =i+1;
        }
		else if (max < num[i]) {
			max = num[i];
			n = i+1;
		}
	}
    printf("%d\n", max);
	printf("%d\n", n);
	return 0;
}
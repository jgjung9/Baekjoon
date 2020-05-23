#include <stdio.h>

int main() {
	int n, max=0; // n 과목의 계수, max 최고성적
	scanf("%d", &n);

	int a[10000] = { 0 };// 과목 별 성적
	int sum = 0; // 모든과목 합
	double newAverage; // 새평균

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (max == 0)
			max = a[i];
		else if (max < a[i])
			max = a[i];
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	newAverage =(100.0*sum)/(n*max);
	printf("%lf", newAverage);
	
	return 0;
}
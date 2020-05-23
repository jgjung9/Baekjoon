#include <stdio.h>

int main() {
	int chnum['z' - 'a' + 1];
	char ch[100] = { 0 };
	scanf("%s", ch);  // 문자열을 받는다.
	for (int i = 0; i <= 'z' - 'a'; i++) {
		chnum[i] = -1;   // 자리수 초기화
	}

	for (int i = 0; ch[i] != '\0'; i++) {
		switch (ch[i]) {  // 처음 알파벳이 등장한 자리의 인덱스 저장
		case 'a':
			if (chnum['a' - 'a'] == -1)
				chnum['a' - 'a'] = i;
			break;
		case 'b':
			if (chnum['b' - 'a'] == -1)
				chnum['b' - 'a'] = i;
			break;
		case 'c':
			if (chnum['c' - 'a'] == -1)
				chnum['c' - 'a'] = i;
			break;
		case 'd':
			if (chnum['d' - 'a'] == -1)
				chnum['d' - 'a'] = i;
			break;
		case 'e':
			if (chnum['e' - 'a'] == -1)
				chnum['e' - 'a'] = i;
			break;
		case 'f':
			if (chnum['f' - 'a'] == -1)
				chnum['f' - 'a'] = i;
			break;
		case 'g':
			if (chnum['g' - 'a'] == -1)
				chnum['g' - 'a'] = i;
			break;
		case 'h':
			if (chnum['h' - 'a'] == -1)
				chnum['h' - 'a'] = i;
			break;
		case 'i':
			if (chnum['i' - 'a'] == -1)
				chnum['i' - 'a'] = i;
			break;
		case 'j':
			if (chnum['j' - 'a'] == -1)
				chnum['j' - 'a'] = i;
			break;
		case 'k':
			if (chnum['k' - 'a'] == -1)
				chnum['k' - 'a'] = i;
			break;
		case 'l':
			if (chnum['l' - 'a'] == -1)
				chnum['l' - 'a'] = i;
			break;
		case 'm':
			if (chnum['m' - 'a'] == -1)
				chnum['m' - 'a'] = i;
			break;
		case 'n':
			if (chnum['n' - 'a'] == -1)
				chnum['n' - 'a'] = i;
			break;
		case 'o':
			if (chnum['o' - 'a'] == -1)
				chnum['o' - 'a'] = i;
			break;
		case 'p':
			if (chnum['p' - 'a'] == -1)
				chnum['p' - 'a'] = i;
			break;
		case 'q':
			if (chnum['q' - 'a'] == -1)
				chnum['q' - 'a'] = i;
			break;
		case 'r':
			if (chnum['r' - 'a'] == -1)
				chnum['r' - 'a'] = i;
			break;
		case 's':
			if (chnum['s' - 'a'] == -1)
				chnum['s' - 'a'] = i;
			break;
		case 't':
			if (chnum['t' - 'a'] == -1)
				chnum['t' - 'a'] = i;
			break;
		case 'u':
			if (chnum['u' - 'a'] == -1)
				chnum['u' - 'a'] = i;
			break;
		case 'v':
			if (chnum['v' - 'a'] == -1)
				chnum['v' - 'a'] = i;
			break;
		case 'w':
			if (chnum['w' - 'a'] == -1)
				chnum['w' - 'a'] = i;
			break;
		case 'x':
			if (chnum['x' - 'a'] == -1)
				chnum['x' - 'a'] = i;
			break;
		case 'y':
			if (chnum['y' - 'a'] == -1)
				chnum['y' - 'a'] = i;
			break;
		case 'z':
			if (chnum['z' - 'a'] == -1)
				chnum['z' - 'a'] = i;
			break;
		}
	}
	for (int i = 0; i <= 'z' - 'a'; i++) { // 처음 등장했던 인덱스 출력
		printf("%d ", chnum[i]);
	}
	return 0;
}
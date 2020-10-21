#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num;
	int i = 0;

	scanf("%d", &num);
	for (i = 1; i <= 9; i++) {
		printf("%d*%d=%d\n", num, i, num * i);
	}
}
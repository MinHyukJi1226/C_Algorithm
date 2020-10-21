#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num;
	int i, temp = 0;

	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		if (i % 10 == 1) temp++;
	}
	printf("%d", temp);
}
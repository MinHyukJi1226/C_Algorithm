#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int a, b, c, n;
	int i = 0;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for (i = 1; i < n; i++) {
		a = a * b + c;
	}
	printf("%d", a);

}
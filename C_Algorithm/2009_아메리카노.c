#include <stdio.h>
#pragma warning (disable :  4996)

int main() {
	int k, n;
	int coffee = 0;
	scanf("%d %d", &k, &n);

	while (k >= n) {
		k -= n;
		k++;
		coffee++;
	}
	printf("%d", coffee);
}
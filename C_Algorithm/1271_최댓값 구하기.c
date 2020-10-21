#include<stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num = 0;
	int data[1000];
	int i, max = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &data[i]);
	}

	max = data[0];
	for (i = 1; i < num; i++) {
		if (data[i] > max) max = data[i];
	}
	printf("%d", max);
}
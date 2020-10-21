#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int dna;
	int result = 0;
	int i = 0;

	scanf("%d", &dna);
	for (i = 0; i < 10; i++) {
		result += dna % 10; //뒤에서 부터 10으로 나눈 나머지를 더한다.
		dna /= 10; //그 나누거 더한 자릿수를 나누어서 없앤다.
	}
	if (result % 7 == 4) printf("suspect");
	else printf("citizen");
}
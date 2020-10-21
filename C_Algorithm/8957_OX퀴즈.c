#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int TestCase;
	char OX[80];
	int score = 0;
	int i, j = 0;
	int sum = 0;
	scanf("%d", &TestCase);

	for (i = 0; i < TestCase; i++) {
		scanf("%s", OX);
		for (j = 0; OX[j] != '\0'; j++) {
			if (OX[j] == 'O') {
				score++;
				sum += score;
			}
			else {
				score = 0;
			}
		}
		printf("%d\n", sum);
		sum = 0;
		score = 0;
	}

}
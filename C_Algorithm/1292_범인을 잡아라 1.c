#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int dna;
	int result = 0;
	int i = 0;

	scanf("%d", &dna);
	for (i = 0; i < 10; i++) {
		result += dna % 10; //�ڿ��� ���� 10���� ���� �������� ���Ѵ�.
		dna /= 10; //�� ������ ���� �ڸ����� ����� ���ش�.
	}
	if (result % 7 == 4) printf("suspect");
	else printf("citizen");
}
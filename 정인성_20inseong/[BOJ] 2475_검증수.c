#include <stdio.h>
int main(void) {
	int Unique[5];
	int sum = 0, num = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Unique[i]);
		sum += Unique[i] * Unique[i];
	}
	num = sum % 10;
	printf("%d", num);
}
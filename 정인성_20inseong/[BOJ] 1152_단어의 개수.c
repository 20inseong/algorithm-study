#include <stdio.h>
#include <string.h>
int main(void) {
	int cnt = 0;
	char sen[1000000];
	scanf("%[^\n]", sen);
	char* ptr = strtok(sen, " ");
	while (ptr != NULL) {
		ptr = strtok(NULL, " ");
		cnt++;
	}
	printf("%d", cnt);
}
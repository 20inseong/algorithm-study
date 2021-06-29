//#include <stdio.h>
//
//int main(void) {
//	int alpha[26] = { 0 };
//	char ward[100] = { 0 };
//	scanf("%s", ward);
//	for (int i = 0; i < 26; i++) {
//		alpha[i] = -1;
//	}
//	for (int i = 0; i < sizeof(ward); i++) {
//		for (int j = 0; j < 26; j++) {
//			if (tolower(ward[i]) == j + 97) {
//				if (alpha[j] == -1) {
//					alpha[j] = i;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		printf("%d ", alpha[i]);
//	}
//}
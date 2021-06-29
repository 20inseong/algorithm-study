#include <iostream>
#include<string>
using namespace std;
int main(void) {
	int alpha[26] = { 0 };
	string ward;
	cin >> ward;
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	for (int i = 0; i < ward.length(); i++) {
		if (alpha[tolower(ward[i]) - 97] == -1) {
			alpha[tolower(ward[i]) - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}
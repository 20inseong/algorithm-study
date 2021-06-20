#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	int alpha[26] = { 0 };
	int i = 0;
	int high = 0;
	int count = 0;
	int index = 0;

	cin >> word;

	for (i = 0; i < word.length(); i++) {
		char c = word.at(i);
		int n = tolower(c);
		alpha[n - 97]++; 
	}
	for (i = 0; i < 26; i++) {
		if (high < alpha[i]) {
			high = alpha[i];
			index = i;
			count = 0;
		}
		else if (high == alpha[i]) {  
			count++;
		}
	}

	if (count > 0)
		cout << "?" << endl;
	else
		cout << (char)(index + 65) << endl;
}
#include<iostream>
#include<vector>
#include<iostream>
using namespace std;
int main() {
	int x, y, r;
	while (1) {
		cin >> x >> y >> r;
		if (x <= 0 || y <= 0 || r <= 0) {
			if (x == 0 && y == 0 && r == 0)
				break;
			else
				cout << "This is not a triangle." << endl;
		}
		else if (r * r == x * x + y * y || x * x == r * r + y * y || y * y == x * x + r * r)
			cout << "right" << endl;

		else
			cout << "wrong" << endl;
	}
}
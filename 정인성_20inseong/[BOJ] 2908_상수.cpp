#include<iostream>
using namespace std;
int rev(int num) {
    int r = 0;
    for (int i = 0; i < 3; i++) {
        r *= 10;
        r += num % 10;
        num = num / 10;
    }
    return r;
}
int main() {
    int a, b;
    cin >> a >> b;
    a = rev(a);
    b = rev(b);
    if (a > b) {
        cout << a << endl;
    }
    else
        cout << b << endl;

}
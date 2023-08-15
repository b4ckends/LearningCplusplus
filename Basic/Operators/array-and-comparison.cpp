#include <iostream>

using namespace std;

int main() {
	int a = 84;
	int b = 77;
	int c = a * b;
	int ages[] = { 23, 35, 41, 18 };
	bool d = a > c;
	cout << c << endl;
	cout << d << endl;
	cout << sizeof(ages) / sizeof(ages[0]);
}

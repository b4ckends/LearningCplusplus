#include <iostream>

using namespace std;

int main() {
	int age = 0;
	age = 56;
	const char letter = 'A';
	int list_ages[] = { 18, 24, 36 };
	list_ages[1] = 99;
	cout << age << endl;
	cout << letter << endl;
	cout << list_ages[1];
}

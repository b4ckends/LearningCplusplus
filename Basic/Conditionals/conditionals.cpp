#include <iostream>

using namespace std;

int main() {
	int age = 0;
	cout << "Age: ";
	cin >> age;
	if (age < 18) {
		cout << "You can't vote until you're 18" << endl;
	} else if (age > 100) {
		cout << "If you still alive you can still voting :DDD" << endl;
	} else if (age > 40) {
		cout << "You can still voting :D" << endl;
	} else {
		cout << "You can vote" << endl;
	}

	bool result = true && true;
	bool result2 = true || true;
	bool result3 = !true;
	cout << result << endl;
	cout << result2 << endl;
	cout << result3 << endl;
}

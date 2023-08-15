#include <iostream>

using namespace std;

int main() {
	do {
		char answer;
		cout << "Do you want to end this program? enter y or n" << endl;
		cin >> answer;
		if (answer == 'y') {
			cout << "Goodbye :D";
			break;
		}
	} while (true);
}

#include <iostream>

using namespace std;

int main() {
	int option = 0;
	cout << "Introduce an option: ";
	cin >> option;
	switch (option) {
		case 1:
			cout << "Option 1";
			break;
        case 2:
			cout << "Option 2";
			break;
	    case 3:
			cout << "Option 3";
			break;
		case 4:
			cout << "Option 4";	    
			break;
		default:
			cout << "This option don't exist";
	}
}

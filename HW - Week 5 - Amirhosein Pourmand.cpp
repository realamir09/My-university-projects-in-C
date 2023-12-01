//Practice 1:

#include <iostream>
using namespace std;

main() {
	
	int x, result;
	
	cout << "Hi dear friend! Please enter your salary to calculate tax deduction: ";
	cin >> x;
	
	if (x < 6000000){
		result = x;
	}
	else if (x >= 6000000 && x < 8000000){
		result = (x - (x * 5 / 100));
	}
	else if (x >= 8000000 && x < 10000000){
		result = (x - (x * 10 / 100));
	}
	else if (x >= 10000000 && x < 14000000){
		result = (x - (x * 15 / 100));
	}
	else if (x >= 14000000 && x < 18000000){
		result = (x - (x * 20 / 100));
	}
	else if (x >= 18000000 && x < 25000000){
		result = (x - (x * 25 / 100));
	}
	else if (x >= 25000000){
		result = (x - (x * 35 / 100));
	}
	cout << result;
}

//========================================================

//Practice 2:

#include <iostream>
using namespace std;

main() {
	
	char x;
	
	cout << "Hi! To determine whether a character is vowel or consonant, enter the character: ";
	
	cin >> x;
	
	switch (x){
		case 'a':
			cout << "VOWEL";
			break;
		case 'e':
			cout << "VOWEL";
			break;
		case 'i':
			cout << "VOWEL";
			break;
		case 'o':
			cout << "VOWEL";
			break;
		case 'u':
			cout << "VOWEL";
			break;
		}
}

//=======================================================
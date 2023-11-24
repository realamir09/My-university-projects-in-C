#include <iostream>

using namespace std;

main() {
	
	cout << "Please enter your GPA : ";
	float gpa;
	cin >> gpa;
	
	if (gpa >= 17 && gpa <= 20) {
		cout << "It's A ! Perfect!!";
	}
	else if (gpa >= 15 && gpa < 17) {
		cout << "It's B ! Good";
	}
	else if (gpa >= 12 && gpa < 15) {
		cout << "It's C ! It's bad!";
	}
	else if (gpa >= 10 && gpa < 12) {
		cout << "It's D ! It's very baddd !!";
	}
	else {
		cout << "Wow! Your are Crazy!!";
	}

}

//=============================================================

//Practice 1:

#include <iostream>
#include <math.h>
using namespace std;

main() {
	
	float x, y, result;
	char opperator;

	cout << "Hi User! please enter your Expression: ";
	cin >> x >> opperator >> y;

	switch (opperator){
		case '+':
			result = x + y;
				break;
		case '-':
			result = x - y;
				break;
		case '*':
			result = x * y;
			break;
		case '%':
			result = fmod(x, y);
	}

	cout << result;
}

//==================================================================

//Practice 2:

#include <iostream>
#include <math.h>
using namespace std;

main() {

	int x, y, z;
	float sourat, makhraj, result;
	
	cout << "Enter values for X, Y and Z variables in order:";
	cin >> x >> y >> z;
	
	sourat = (x - y) * (x + z) ;
	makhraj = pow((x + y + z), 2) + 1 ;
	result = sourat / makhraj ;
	
	cout << "The result is : "<< result;
}
//==================================================================
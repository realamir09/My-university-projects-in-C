//=======================================================

//Practice 1:

#include<iostream>
using namespace std;

int main(){
	
	int m, n;
	int result = 1;
	
	cout << "Please enter two numbers to calculate power :\n";
	
	cin >> m;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		result *= m;
	}
	cout<< "The result is : " <<result;
	
}
// By Amirhosein Pourmand
//=======================================================

//Practice 2:

#include<iostream>
using namespace std;

int main(){
	
	int m, n, i;
	
	cout << "Please enter two numbers to calculate the remainder and quotient the first number over the second number :\n";
	
	cin >> m;
	cin >> n;
	
	for(i=0; n<=m; i++) {
	m -= n;
	}
	
	cout << "Remainder : " << m << endl;
	cout << "Quotient : "<< i;
}
// By Amirhosein Pourmand
//=======================================================

//Practice 3:

#include<iostream>
using namespace std;

int main(){
	
	int a, s = 0;
	
	cout << "Please enter a number to calculate the sum of its divisors :\n";
	
	cin >> a;
	
	for (int i=2; i<=a/2; i++){
		if (a%i == 0)
			s += i;
	}
	cout<< "The result is : " << s << endl;
	
}
// By Amirhosein Pourmand
//=======================================================

//Practice 4:

#include <iostream>
using namespace std;

main() {
    	
 	cout << "Enter two numbers to calculate the greatest common divisor :\n";
 	
 	int m, n, otp;
 	
	cout << "First number : ";
	cin >> n;
	cout << "Second number : ";
	cin >> m;
	
	while(m != 0) {
		otp = n%m;
		n = m;
		m = otp;
	}
	cout << "GCD is = " << n;
	
	return 0;
}
// By Amirhosein Pourmand
//=======================================================

//Practice 5:

#include <iostream>
#include <math.h>
using namespace std;

int main() {
		
	int inp, flag, a, b, c = 0;
	
	cout << "Please enter a number to calculate the sum of prime numbers smaller than the entered number :\n";
	cin >> inp;
	
	for (b=2; b<=inp; b++){

	flag = 1;
	
	for(a=2; a<=b/2; a++){
		if(b%a == 0){
			flag = 0;
			break;
		}
	}
	if (flag == 1){
		c += b;	
	}	
}
	cout << "The result is : " << c;
}
// By Amirhosein Pourmand
//=======================================================
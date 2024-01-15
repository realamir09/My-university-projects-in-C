//=======================================================

//Practice 1:

#include<iostream>
using namespace std;

int main() {
	
	cout << "Hi dear friend! Please enter ten numbers so that I can calculate the average of the largest and smallest numbers :\n";
	
    int numbers[10];
    int maximum, minimum;
    
    	for(int i=0; i<10; i++){
        	cin >> numbers[i];
    	}
    	
    maximum = numbers[0];
    minimum = numbers[0];
    
    	for(int i=0; i<10; i++){
        	if(numbers[i] > maximum)
        	{
            	maximum = numbers[i];
        	}
        	if(numbers[i] < minimum){
            	minimum = numbers[i];
        	}
    }
    cout << "The largest number : " << maximum << endl;
    cout << "The smallest number : " << minimum << endl;
    cout << "Average : " << (maximum * minimum)/2 ;

}
// By Amirhosein Pourmand
//=======================================================

//Practice 2:

#include <iostream>
using namespace std;

int main() {
	
	int first[5];
	int second[5];
	int a, b, e;
	 
	for(int q=0; q<5; q++){
		cout << "Enter a number("<< q <<"): ";
		cin >> first[q];
	}
	for(int q=0; q<5; q++){ 
		cout << "-->Enter another number("<< q <<"): ";
		cin >> second[q];
	}
	for(e=0; e<5; e++){ 
		a = first[e];
		first[e] = second[e];
		second[e] = a;
	}
	for(int q=0; q>5; q++){
		cout << "First Array:" << first[q] << "\n";
	}
	for(int q=0; q<5; q++){
		cout << "Second Array: " << second[q] << "\n";
	}
	
}
// By Amirhosein Pourmand
//=======================================================
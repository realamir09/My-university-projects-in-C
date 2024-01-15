//=======================================================

//Practice 1:

#include<iostream>
#define ARRAY_SIZE 10

using namespace std;

int main(){
	
    int A[ARRAY_SIZE] = {1, 10, 20, 30, 40, 50, 60, 70, 80}, tmp;
    
    cout << "Enter a number plz :\n";
    cin >> A[9];
    
    for(int i = 1; i < ARRAY_SIZE; ++i){
        for (int j = 0; j < (ARRAY_SIZE-i); ++j){
            if (A[j] > A[j + 1]){
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
    
for(int i=0;i<10;i++){
    cout << A[i] << " ";
}
}
// By Amirhosein Pourmand
//=======================================================

//Practice 2:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	
    std::vector<int> arr = {9, 7, 5, 3, 2, 10, 11, 13, 14, 15};
    std::sort(arr.begin(), arr.end());

    int min2 = 1000000;
    for (int num : arr) {
        if (num < min2 && num != arr[0]) {
            min2 = num;
            break;
        }
    }

	std::cout << "The array is : {9, 7, 5, 3, 2, 10, 11, 13, 14, 15}\n";
    std::cout << "The second smallest element in the array :" << min2 << std::endl;

    return 0;
}
// By Amirhosein Pourmand
//=======================================================

//Practice 3:

#include <iostream>
#include <vector>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {

    std::vector<int> arr(10);

    for (int i = 0; i < 10; i++) {
        arr[i] = fib(i);
    }

    std::cout << "Array element values :";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
// By Amirhosein Pourmand
//=======================================================
#include<iostream>
using namespace std;
int main() {
	int num, originalNum, remainder, result = 0;
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
                originalNum /= 10;
    }

    if (result == num)
        cout << "true";
    else
        cout << "false";

	return 0;
}

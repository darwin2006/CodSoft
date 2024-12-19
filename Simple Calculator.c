#include <iostream>
using namespace std;
int main() {
double num1, num2;
int choice;
cout << "Select operation:" << endl;
cout << "1. Add" << endl;
cout << "2. Subtract" << endl;
cout << "3. Multiply" << endl;
cout << "4. Divide" << endl;
cout << "Enter choice (1/2/3/4): ";
cin >> choice;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
if (choice == 1) {
cout << "Result: " << num1 + num2 << endl;
} else if (choice == 2) {
cout << "Result: " << num1 - num2 << endl;
} else if (choice == 3) {
cout << "Result: " << num1 * num2 << endl;
} else if (choice == 4) {
if (num2 != 0) {
cout << "Result: " << num1 / num2 << endl;
} else {
cout << "Error! Division by zero." << endl;
}
} else {
cout << "Invalid Choice!!" << endl;
}
return 0;
}

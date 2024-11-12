#include <iostream>
using namespace std;

class Canculator {
public:
	static int sum(int a, int b) {
		return a + b;
	}
	static int sum(int a, int b, int c) {
		return a + b + c;
	}
	static int subtract(int a, int b) {
		return a - b;
	}
	static int multiply(int a, int b) {
		return a * b;
	}
	static int divive(int a, int b) {
		if (b == 0) {
			cout << "Error: Division by zero!" << endl;
			return 0;
		}
		return a / b;
	}
	static int avarange(int a, int b) {
		return (a + b) / 2;
	}
};

int main() {
	int a = 5, b = 3;

	cout << "Sum: " << Canculator::sum(a, b) << endl;
	cout << "Subtract: " << Canculator::subtract(a, b) << endl;
	cout << "Multiply: " << Canculator::multiply(a, b) << endl;
	cout << "Divive: " << Canculator::divive(a, b) << endl;
	cout << "Avarange: " << Canculator::avarange(a, b) << endl;
}

#include <iostream>
using namespace std;
float ReactMult(char input1, char input2); //declaration


int main() {
	char choice = 'n';
	char input1;
	char input2;
	while (choice != 'q') {
		cout << "pick two parameters: " << endl;
		cin >> input1;
		cin >> input2;
		cout << "function return " << ReactMult(input1, input2) << endl;
	}



}


float ReactMult(char input1, char input2) { //definition
	if (input1 != 'm' && input1 != 'v') {
		cout << "incorrect parameters for melt/vaporize" << endl;
		return -1;
	}
	if (input1 == 'm' && input2 == 'p') {
		cout << "pyro";
		return 2.0;
	}
	if (input1 == 'm' && input2 == 'c') {
		cout << "cyro";
		return 1.5;
	}
	if (input1 == 'v' && input2 == 'h') {
		cout << "hydro";
		return 2.0;
	}
	if (input1 == 'v' && input2 == 'p') {
		cout << "pyro";
		return 1.5;
	}
}
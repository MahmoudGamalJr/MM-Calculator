
#include "MM_Calculator_Library.cpp"

void Addition() {
	float first = 0, second = 0;
	cin >> first;
	cin >> second;
	cout << first + second << endl;
}

void Subtraction() {
	float first = 0, second = 0;
	cin >> first;
	cin >> second;
	cout << first - second << endl;
}

void Multiplication() {
	float first = 0, second = 0;
	cin >> first;
	cin >> second;
	cout << first * second << endl;
}

void Division() {
	float first = 0, second = 0;
	cin >> first;
	cin >> second;
	if(second != 0) { // to check if b!=0 because if b was = 0 it will be Runtime Error
		cout << first / second << endl ;
	}
}

void Exponentiation() {
	float first = 0, p = 0;
	int second = 0 ;
	cin >> first ;
	cin >> second ;
	p = pow(first, second);
	cout << p << endl;
}

void SquareRoot() {
	float first = 0,  p = 0;
	cin >> first;
	p = sqrt(first);
	cout << p << endl;
}

void Sine() {
	float first = 0, p = 0;
	cin >> first;
	p = sin(first);
	cout << p << endl;
}

void Cosine() {
	float first = 0, p = 0;
	cin >> first;
	p = cos(first);
	cout << p << endl;
}

void Tangent() {
	float first = 0, p = 0;
	cin >> first;
	p = tan(first);
	cout << p << endl;
}

void help() {
        cout << "Welcome In MM Calculator Created By: Mahmoud & Mostafa for Luxor Students Competetion\n";
	cout << "\n\n";
	cout << " MM Calculator ------------------------------\n";
	cout << "\t a\t\t Addition of two number\n";
	cout << "\t m\t\t Subtraction of two number\n";
	cout << "\t u\t\t Multiplication of two number\n";
	cout << "\t d\t\t Division of two number\n";
	cout << "\t p\t\t Exponentiation of two number\n";
	cout << "\t r\t\t SquareRoot of a number\n";
	cout << "\t s\t\t Sine of anumber\n";
	cout << "\t c\t\t Cosine of anumber\n";
	cout << "\t t\t\t Tangent of a number\n";
	cout << "\t h\t\t Help\n";
	cout << "\t e\t\t Exit\n";
	cout << "\n\n";
}

void error() {
	cout << "Error : Input is anonymous!\n";
}

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "Enter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
				Addition();
			break;
			case 'm':
				Subtraction();
			break;
			case 'u':
				Multiplication();
			break;
			case 'd':
				Division();
			break;
			case 'p':
				Exponentiation();
			break;
			case 'r':
				SquareRoot();
			break;
			case 's':
				Sine();
			break;
			case 'c':
				Cosine();
			break;
			case 't':
				Tangent();
			break;
			case 'h':
				help();
			break;
			case 'e':
				flag=false;
			break;
			default:
				error();
			break;
		}
	}
	return 0;
}

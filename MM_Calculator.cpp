
#include "MM_Calculator_Library.cpp"

void Addition() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
}

void Subtraction() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a - b << endl;
}

void Multiplication() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a * b << endl;
}

void Division() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	if(b != 0) {
		cout << a / b << endl;
	}
}

void Exponentiation() {
	float a=0, r=0;
	int b=0;
	cin >> a;
	cin >> b;
	r=pow(a, b);
	cout << r << endl;
}

void SquareRoot() {
	float a=0, r=0;
	cin >> a;
	r=sqrt(a);
	cout << r << endl;
}

void Sine() {
	float a=0, r=0;
	cin >> a;
	r=sin(a);
	cout << r << endl;
}

void Cosine() {
	float a=0, r=0;
	cin >> a;
	r=cos(a);
	cout << r << endl;
}

void Tangent() {
	float a=0, r=0;
	cin >> a;
	r=tan(a);
	cout << r << endl;
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

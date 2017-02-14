//CS 172 Assignment #1//
//Submitted by Sabin Sapkota//

#include<iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>
#include<string>

using namespace std;

//list of different functions used throughout the program//
void ex02();
void ex03();
void ex04();
void ex05();
void function(int x);
void add(double a, double b);
void addone(int& y);
void printArray(int list[], int arraySize);
void calculation(int a[], int arraySize);
int main() {
	//these four function gives solutions for the four question//
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}
void ex02() {
	//declaring boolean expression//
	bool hasPassedTest = true;
	//variable initialized to random numbers//
	srand(time(0));
	int x = rand() % 1000;
	int y = rand() % 1000;
	cout << "The value of x is " << x << " and value of y is " << y << endl;
	//ex 1b.//
	hasPassedTest = (x >= y);
	if (hasPassedTest) {
		cout << "X is greater or equal to Y"<<endl;
	}
	else {
		cout << "X is not greater or equal to Y"<<endl;
	}
	cout << endl;

	//ex 1c.//
	double numberOfShares;
	cout << "Enter a number"<<endl;
	cin >> numberOfShares;

	hasPassedTest = (numberOfShares < 100);
	if (hasPassedTest) {
		cout << "The value is less than 100"<<endl;
	}
	else {
		cout << "The value is equal to or greater than 100"<<endl;
	}
	cout << endl;

	//ex 1d.//
	int box;
	int book;

	cout << "Enter width of box" << endl;
	cin >> box;

	cout << "Enter the width of book" << endl;
	cin >> book;

	hasPassedTest = (box%book == 0);
	if (hasPassedTest) {
		cout << "Box width is evenly divisible by the book width" << endl;
	}
	else {
		cout << "Box width is unevenly divisible by the book width" << endl;
	}
	cout << endl;
	//ex 1e.//
	double life;
	double temp;

	cout << "Enter shelf life of chocolate"<<endl;
	cin >> life;
	cout << "Enter the temperature" << endl;
	cin >> temp;
	hasPassedTest = (temp > 90);
	if (hasPassedTest) {
		cout << "Shell life is " << life - 4 << endl;
	}
	else {
		cout << "Shell life is " << life << endl;
	}
	cout << endl;
}

void ex03() {
	//2.a//
	double length;
	double height;
	
	cout << "Enter the length of the triangle" << endl;
	cin >> length;

	cout << "Enter the height of the trianlge" << endl;
	cin >> height;

	double a = (length*length) + (height*height);

	cout << "The hypotenuse of the triangle is " << sqrt(a) << endl;
	cout << endl;

	//2.b//
	char input;
	cout << "Enter either y for yes or n for no" << endl;
	cin >> input;

	if (input == 'y') {
		cout << "You chose for yes" << endl;
	}

	if (input == 'n') {
		cout << "You chose for no" << endl;
	}
	

	//2.c//
	char v=9;
	cout << v;
    
	//2.d//
	string mailingAddress;
	cout << "Enter your mailing address" << endl;
	cin >> mailingAddress;
    
	//2.e//
	string empty;
	cout << endl;
}

void ex04() {
	//3.a//
	int number;
	int sum = 0;
	cout << "Enter a number between 1 and 10" << endl;
	cin >> number;
	
	while (number < 1 || number>10) {
		cout << "Invalid input. Try again" << endl;
		cout << "Enter a number" << endl;
		cin >> number;

	}
	cout << endl;
	//3.b//
	for (int i = 1; i <= number; i++) {
		
		sum += i*i*i;
		
	}
	
	cout << "The sum of cubes is " << sum << endl;
	cout << endl;
	//3.c
	int m = 0;
	do {
		cout << '*';
		m++;
		
	} while (m< number);
	cout << endl;
	//3.d//
	cout << "Even number between 0 and 20 are: " << endl;
	for (int i = 1; i <= 20; i++) {
		
		cout << i * 2 << endl;
	}

	cout << endl;
	//3.e, calling function which takes and double the integer//
	function(number); cout << endl;
	//3.f, calling function which displays sum of two given number//
	add(2, 3); cout << endl;
	//3.g, calling function which adds one to the parameter//
	int q = 1;
	
	addone(q); 
	
	cout << endl;
}

void ex05() {
	const int size = 3;
	int number[size];
	double sum = 0;
	double product = 1;
	//ex 4a. and 4b. combined//
	for (int i = 0; i < size; i++) {

		cout << "Enter a integer" << endl;
		cin >> number[i];
		sum += number[i];
		product *= number[i];
	}
	cout << "The sum is " << sum << endl;
	cout << "The product is " << product << endl;
	//ex 4d. calling function that displays the element in array//
	printArray(number, 3);
	//ex 4e. calling function that display the calculation of array//
	calculation(number, 3);

}
void function(int x) {
	int z;
	z=x*2;
	 cout << "The double of the given number is " << z<<endl;
	 cout << endl;
	 
}
void add(double a, double b) {
	double result; 
	result =a + b;
	cout << "The sum of these two numbers "<<a<<" and "<<b<<" is "<<result<<endl;
	cout << endl;
}

void addone(int& y) {
	
	y = y + 1;
	cout << "Adding number 1 to the given number will become " << y << endl;
	cout << endl;
	}



void printArray(int list[], int arraysize) {
	for (int i = 0; i < arraysize; i++) {
		cout << list[i];
	}
	cout << endl;
}
void calculation(int a[], int arraysize) {
	int x;
	
	cout << "Enter a value" << endl;
	cin >> x;
	
	int p = a[2] * x * x + a[1] * x + a[0];
	cout << p << endl;
	
}


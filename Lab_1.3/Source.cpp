
// функція main
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BitString.h"


using namespace std;

int main()
{
	BitString o1;
	BitString o2;

	o1.Read();
	o2.Read();
	
	cout << o1.toString() << endl;
	cout << o2.toString() << endl << endl;
	
	// Xor
	cout << endl;
	cout << "Xor: " << endl;
	cout << Xor(o1, o2).toString() << endl;



	//int n;

	//// ShiftLeft
	//cout << "How many bits do you want to shift left?" << endl;
	//cout << "Input:  "; cin >> n; cout << endl;
	//BitString a = Left(o1, n);
	//cout << a.toString() << endl;

	//// ShiftRight
	//cout << endl;
	//cout << "How many bits do you want to shift right?" << endl;
	//cout << "Input:  "; cin >> n; cout << endl;
	//BitString b = Right(o1, n);
	//cout << b.toString() << endl;


	cin.get();
	return 0;
}



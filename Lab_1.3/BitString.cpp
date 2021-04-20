//BitString.cpp

#include "BitString.h"
#include <iostream>
#include <cmath>
#include <sstream> // підключаємо бібліотеку, яка описує літерні потоки
#include <Windows.h>
#include <iomanip>
using namespace std;



long BitString::GetFirst() const
{
	return first;
}
long BitString::GetSecond() const
{
	return second;
}
void BitString::SetFirst(long value)
{
	first = value;
}
void BitString::SetSecond(long value)
{
	second = value;
}

void BitString::Display() const
{
	cout << toString();
}
void BitString::Init(long x, long y)
{
	first = x;
	second = y;
}
void BitString::Read()
{
	long x, y;
	cout << "Input your numbers :" << endl;
	cout << " First = "; cin >> x;
	cout << " Second = "; cin >> y; 
	Init(x, y);
	cout << endl;
}
string BitString::toString() const
{
	stringstream sout;
	sout << " First = " <<first;
	sout << "    Second = " <<second;
	sout <<"    number = " << hex << first << hex << second << endl;
	return sout.str();
}


BitString Xor(const BitString& a, const BitString& b)
{
	BitString t;
	t.first = a.first ^ b.first;
	t.second = a.second ^ b.second;
	return t;
}

//BitString Left(const BitString& a, int n, const int i)
//{
	
	//long result;
	//BitString t;
	//t.first = a.first << n;

    //a.second =
	//t.second = a.second << n;

	
	//return t;
//}

//BitString Right(const BitString& a, int n)
//{
	//BitString t;
	//t.first = a.first >> n;
	//t.second = a.second >> n;
	//return t;
//}






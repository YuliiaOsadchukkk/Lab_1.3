//////////////////////////////////////////////////////////////////////////
//BitString.h

#pragma once
#include <string>
using namespace std;
//визначення класу

class BitString
{
private:
    long first;
    long second;

public:
    long GetFirst() const;
    long GetSecond() const;

    void SetFirst(long value);
    void SetSecond(long value);

    void Init(long, long);
    void Read();
    void Display() const;
    string toString() const;

    friend BitString Xor(const BitString& a, const BitString& b);

   // friend BitString Left(const BitString& a, int n, const int i);
    //friend BitString Right(const BitString& a, int n);

};
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.3/BitString.h"
#include "../Lab_1.3/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString o1, o2;
			o1.SetFirst(4);
			o2.SetSecond(4);

			o1.SetFirst(8);
			o2.SetSecond(8);

			BitString c = Xor(o1, o2);
			Assert::AreEqual(c.GetFirst(), 12l);
			Assert::AreEqual(c.GetSecond(), 12l);

		}
	};
}

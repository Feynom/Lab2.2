#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2.2/Lab2.2/Point.h"
#include "../Lab2.2/Lab2.2/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point A(1, 2), B(3, 4);
			//A + B = C
			Point C(4, 6);
			Assert::AreEqual((A + B) == C, true);

			//A - B = D
			Point D(-2, -2);
			Assert::AreEqual((A - B) == D, true);
		}
	};
}

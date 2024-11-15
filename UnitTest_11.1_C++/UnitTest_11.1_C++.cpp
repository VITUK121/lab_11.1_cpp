#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_11.1_C++/lab_11.1_C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest111C
{
	TEST_CLASS(UnitTest111C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(true, parseFile("data.txt"));
		}
	};
}

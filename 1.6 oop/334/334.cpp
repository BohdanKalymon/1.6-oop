#include "pch.h"
#include "CppUnitTest.h"
#include "../1.6 oop/Man.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My334
{
	TEST_CLASS(OOPunit11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Man age;

			int t = 0;
			Assert::AreEqual(t, 0);
		}
	};
}

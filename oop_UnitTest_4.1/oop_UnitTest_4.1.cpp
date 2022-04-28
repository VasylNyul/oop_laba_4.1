#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_4.1/Kub.h"
#include "../oop_laba_4.1/Kub.cpp"
#include "../oop_laba_4.1/Abstract.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest41
{
	TEST_CLASS(oopUnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Kub a(3);
			Assert::AreEqual(a.SurfaceArea(), 54.);
		}
	};
}

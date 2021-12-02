#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1rec/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut81rec
{
	TEST_CLASS(ut81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			char p[] = "nobel";
			bool u = isTrue(p, 0);
			Assert::AreEqual(true, u);

		}
	};
}

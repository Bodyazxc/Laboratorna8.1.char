#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna8.1.char/Laboratorna8.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81сh
{
	TEST_CLASS(UnitTest81сh)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "abc+def-g+h=i";
			char* r = ReplaceSymbols(str);
			Assert::AreEqual("abc**def**g**h**i", r);
			delete[] r; 
		}
	};
}

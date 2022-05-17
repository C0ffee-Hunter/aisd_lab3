#include "pch.h"
#include "CppUnitTest.h"
#include "../aisd_lab3/Class.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab3_UnitTest
{
	TEST_CLASS(lab3_UnitTest)
	{
	public:
		TEST_METHOD(ExeptionTest)
		{
			Floyd f;
			try
			{
				f.way("k", "l", "abrakadabra");
				Assert::IsTrue(false);
			}
			catch (invalid_argument e)
			{
				Assert::AreEqual("Error! You entered the data incorrectly or the file was not found!!", e.what());
			}
		}
		TEST_METHOD(CorrectMatrixTest)
		{
			Floyd f;
			string str = f.way("1", "2", "data.txt");
			Assert::AreEqual("1->4->2", str.c_str());
			str = f.way("1", "3", "data.txt");
			Assert::AreEqual("1->4->2->3", str.c_str());
			str = f.way("1", "4", "data.txt");
			Assert::AreEqual("1->4", str.c_str());
			str = f.way("2", "1", "data.txt");
			Assert::AreEqual("2->3->1", str.c_str());
			str = f.way("2", "3", "data.txt");
			Assert::AreEqual("2->3", str.c_str());
			str = f.way("2", "4", "data.txt");
			Assert::AreEqual("2->3->1->4", str.c_str());
			str = f.way("3", "1", "data.txt");
			Assert::AreEqual("3->1", str.c_str());
			str = f.way("3", "2", "data.txt");
			Assert::AreEqual("3->1->4->2", str.c_str());
			str = f.way("3", "4", "data.txt");
			Assert::AreEqual("3->1->4", str.c_str());
			str = f.way("4", "1", "data.txt");
			Assert::AreEqual("4->2->3->1", str.c_str());
			str = f.way("4", "2", "data.txt");
			Assert::AreEqual("4->2", str.c_str());
			str = f.way("4", "3", "data.txt");
			Assert::AreEqual("4->2->3", str.c_str());
			str = f.way("1", "1", "data.txt");
			Assert::AreEqual("1->1", str.c_str());
			str = f.way("2", "2", "data.txt");
			Assert::AreEqual("2->2", str.c_str());
			str = f.way("3", "3", "data.txt");
			Assert::AreEqual("3->3", str.c_str());
			str = f.way("4", "4", "data.txt");
			Assert::AreEqual("4->4", str.c_str());
		}
	};
}
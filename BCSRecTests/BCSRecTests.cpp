#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
    TEST_CLASS(BCSRecTests)
    {
    public:

        TEST_METHOD(getArea_ValidInput_ReturnsCorrectArea)
        {
            int length = 5;
            int width = 4;
            int result = getArea(&length, &width);
            Assert::AreEqual(20, result);
        }

        TEST_METHOD(getPerimeter_ValidInput_ReturnsCorrectPerimeter)
        {
            int length = 5;
            int width = 4;
            int result = getPerimeter(&length, &width);
            Assert::AreEqual(14, result);
        }
        TEST_METHOD(setLength_ValidMiddle)
        {
            int length = 10;
            setLength(55, &length);
            Assert::AreEqual(55, length);
        }

        TEST_METHOD(setLength_Zero_Updates)
        {
            int length = 10;
            setLength(0, &length);
            Assert::AreEqual(0, length);
        }

        TEST_METHOD(setLength_InvalidHigh_NoChange)
        {
            int length = 10;
            setLength(100, &length);
            Assert::AreEqual(10, length);
        }

        TEST_METHOD(setWidth_ValidMiddle)
        {
            int width = 20;
            setWidth(55, &width);
            Assert::AreEqual(55, width);
        }

        TEST_METHOD(setWidth_LowerBoundary)
        {
            int width = 20;
            setWidth(1, &width);
            Assert::AreEqual(1, width);
        }

        TEST_METHOD(setWidth_InvalidZero_NoChange)
        {
            int width = 20;
            setWidth(0, &width);
            Assert::AreEqual(20, width);
        }

    };
}
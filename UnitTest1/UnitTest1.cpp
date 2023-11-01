#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include "../PR 6.3 iter/PR 6.3 iter.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(GenerateArrayTest) {
public:

    TEST_METHOD(GeneratesArrayWithCorrectSize) {
        int size = 10;
        int min = 1;
        int max = 100;

        std::vector<int> array = generateArray(size, min, max);

        Assert::AreEqual(size, static_cast<int>(array.size()));
    }

    TEST_METHOD(GeneratesArrayWithinSpecifiedRange) {
        int size = 10;
        int min = 1;
        int max = 100;

        std::vector<int> array = generateArray(size, min, max);

        for (int element : array) {
            Assert::IsTrue(element >= min && element <= max);
        }
    }
};

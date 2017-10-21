/* Created by vonking on 2017/9/17. Copyright (c) 2017 Steven Fung. All rights reserved. */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Src/Include/StringAlgorithm.hpp"

using namespace testing;

namespace {
    class StringAlgorithmTest : public testing::Test {
    public:
        StringAlgorithmTest() {
        }

        virtual ~StringAlgorithmTest() {

        }
    };
}

TEST_F(StringAlgorithmTest, reversestring)
{
    string str = "hello world!";
    string ref = "!dlrow olleh";
    EXPECT_EQ(ref, *StringAlgorithm::ReverseString(str));
}

TEST_F(StringAlgorithmTest, reversestring2)
{
    string str = "hello world!";
    string ref = "!dlrow olleh";
    StringAlgorithm::ReverseString(&str, str.size(), 0);
    EXPECT_EQ(ref, str);
}

TEST_F(StringAlgorithmTest, reverseword)
{
    string str = "hello world!";
    StringAlgorithm::ReverseWord(&str);
    string ref = "olleh !dlrow";
    EXPECT_EQ(ref,str);
}

/*
* The MIT License
*
* Copyright (c) 2011, Tamás Szelei
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#include "gtest/gtest.h"

TEST(ByteArray, CanAddItems)
{
    misi::ByteArray ba;
    ba.push_back('w');
}

TEST(ByteArray, CanRemoveItems)
{
    misi::ByteArray ba;
    ba.push_back('w');
    ba.push_back('w');

    ba.pop_back();
    EXPECT_EQ(ba.size(), 1);
}

TEST(ByteArray, CantRemoveZeroItems)
{
    misi::ByteArray ba;
    ba.push_back('w');
    ba.push_back('w');

    ba.pop_back();
    ba.pop_back();
    EXPECT_EQ(ba.size(), 0);
    ba.pop_back();
    EXPECT_EQ(ba.size(), 0);
}

TEST(ByteArray, ReturnsCorrectNumberOfItems)
{
    misi::ByteArray ba;
    ba.push_back('w');
    ba.push_back('w');
    ba.push_back('w');
    EXPECT_EQ(ba.size(), 3);
}

TEST(ByteArray, ReturnsExpectedItems)
{
    misi::ByteArray ba;
    ba.push_back('a');
    ba.push_back('b');
    EXPECT_EQ(ba[0], 'a');
    EXPECT_EQ(ba[1], 'b');
}

TEST(ByteArray, CanChangeIndexedItems)
{
    misi::ByteArray ba;
    ba.push_back('a');
    ba.push_back('b');
    EXPECT_EQ(ba[0], 'a');
    EXPECT_EQ(ba[1], 'b');

    ba[0] = 'c';
    EXPECT_EQ(ba[0], 'c');
}

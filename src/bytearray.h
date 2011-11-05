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

#pragma once
#include "global.h"

class ByteArrayPrivate;

namespace misi
{

    
// This class is needed to be C++03-compatible
class ByteArray
{
    typedef size_t size_type;
public:
    ByteArray();
    ByteArray(const ByteArray&);
    ByteArray& operator=(const ByteArray&);

    size_type size();
    size_type max_size();
    void resize(size_t sz, byte c = byte());
    size_type capacity () const;
    bool empty() const;
    void reserve(size_type);

    byte const& operator[](const int) const;
    byte& operator[](const int);
    byte const& at(const int) const;
    byte& at(const int);
    byte const& front() const;
    byte& front();
    byte const& back() const;
    byte& back();
    template class<InputIterator> void assign(InputIterator, InputIterator);
    void assign(size_type, const byte&);
    void swap(ByteArray&);
    void clear();

    void push_back(const byte&);
    void pop_back();

private:
    ByteArrayPrivate* d_ptr;
    DECLARE_PRIVATE(ByteArray)
};

}

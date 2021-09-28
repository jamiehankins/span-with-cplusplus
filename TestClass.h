#pragma once

using namespace System;

public ref class TestClass
{
public:
    Memory<Byte> FunctionThatTakesSpan(Span<Byte> span);
};
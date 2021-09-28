#include "TestClass.h"

Memory<Byte> TestClass::FunctionThatTakesSpan(Span<Byte> span)
{
    return Memory<Byte>(span.ToArray());
}

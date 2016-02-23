#include <string>
#include "string_piece.h"

using base::StringPiece;

namespace {
const char* sString = "123456";

void foo(const std::string& str) {
  printf ("input string address: %x\n", str.c_str() );
}

void foo2(const StringPiece& string_piece) {
  printf ("input string address: %x\n", string_piece.data());
}
}  // namespace

int main()
{
  printf("const string address: %x\n", sString);
  foo(sString);

  foo2(sString);
  return 0;
}
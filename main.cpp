#include "token/token.hpp"
#include <iostream>
int main() {
  Token t1{lookupIdent("let"), "let"};
  Token t2{lookupIdent("foobar"), "foobar"};
  Token t3{TokenType::ASSIGN, "="};

  std::cout << t1 << '\n';
  std::cout << t2 << '\n';
  std::cout << t3 << '\n';

  return 0;
}

#pragma once

#include <string>
struct Lexer {
  std::string input;
  int position;
  int readPosition;
  char ch;

  Lexer(std::string input, int position, int readPosition, char ch);
  void readChar();
  Lexer newLexer();
};

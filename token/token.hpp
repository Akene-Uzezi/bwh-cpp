#pragma once

#include <string>
enum class TokenType {
  ILLEGAL,
  END_OF_FILE,

  INDENT,
  INT,
  ASSIGN,
  LPAREN,
  RPAREN,
  LBRACE,
  RBRACE,
  SEMICOLON
};

struct Token {
  TokenType type;
  std::string literal;
};

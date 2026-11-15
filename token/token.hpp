#pragma once

#include <ostream>
#include <string>
#include <string_view>
enum class TokenType {
  ILLEGAL,
  END_OF_FILE,

  LET,
  IDENT,
  INT,
  PLUS,
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

TokenType lookupIdent(std::string_view ident);

std::string_view tokenTypeToString(TokenType type);

std::ostream &operator<<(std::ostream &os, const Token &tok);

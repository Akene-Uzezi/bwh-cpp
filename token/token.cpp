#include "token.hpp"
#include <string_view>
#include <unordered_map>
namespace {
const std::unordered_map<std::string_view, TokenType> keywords = {
    {"+", TokenType::PLUS},     {"=", TokenType::ASSIGN},
    {"(", TokenType::LPAREN},   {")", TokenType::RPAREN},
    {"{", TokenType::RBRACE},   {"}", TokenType::LBRACE},
    {";", TokenType::SEMICOLON}};
}

TokenType lookupIdent(std::string_view ident) {
  auto it = keywords.find(ident);
  if (it != keywords.end()) {
    return it->second;
  }
  return TokenType::IDENT;
}

std::string_view tokenTypeToString(TokenType type) {
  switch (type) {
  case TokenType::PLUS:
    return "+";
  case TokenType::ASSIGN:
    return "=";
  case TokenType::LPAREN:
    return "(";
  case TokenType::RPAREN:
    return ")";
  case TokenType::LBRACE:
    return "{";
  case TokenType::RBRACE:
    return "}";
  case TokenType::SEMICOLON:
    return ";";
  case TokenType::IDENT:
    return "IDENT";
  case TokenType::END_OF_FILE:
    return "EOF";
  case TokenType::ILLEGAL:
    return "ILLEGAL";
  case TokenType::INT:
    return "INT";
  }
  return "UNKNOWN";
}

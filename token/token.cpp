#include "token.hpp"
#include <unordered_map>
namespace {
const std::unordered_map<std::string_view, TokenType> keywords = {
    {"+", TokenType::PLUS},     {"=", TokenType::ASSIGN},
    {"(", TokenType::LPAREN},   {")", TokenType::RPAREN},
    {"{", TokenType::RBRACE},   {"}", TokenType::LBRACE},
    {";", TokenType::SEMICOLON}};
}

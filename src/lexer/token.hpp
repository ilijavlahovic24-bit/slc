#ifndef TOKEN_HPP
#define TOKEN_HPP
#include<string>
#include<any>
enum TokenType{
    NUMBER, CHAR
};

using String = std::string;
using Object = std::any;
class Token{
private:
    TokenType type;
    String lexme;
    Object literal;
    int line;
public:
    Token(TokenType type, String lexme, Object literal, int line) : type(type), lexme(lexme), literal(literal), line(line) {}
    TokenType getType() const {
        return type;
    }
    String getLexme() const {
        return lexme;
    }
    Object getLiteral() const {
        return literal;
    }
    int getLine() const {
        return line;
    }
};
#endif
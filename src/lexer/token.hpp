#ifndef TOKEN_HPP
#define TOKEN_HPP
#include<string>
#include<any>
enum TokenType{
    //keywoards
    NUMBER, CHAR,CONST, BOOL, FLOAT, DOUBLE, INT, UINT,
    BREAK, CONTINUE, DO, ELSE, FOR, IF,
    DISCARD, //may be removed//
    SUBROUTINE, 
    RETURN, SWITCH, CASE, DEFAULT,
    VEC, MAT, 
    SAMPLER, IMAGE, TEXTURE ,
    STRUCT, VOID, WHILE,
    IDENTIFIER, TYPE_NAME ,
    FLOATCONSTANT, DOUBLECONSTANT, INTCONSTANT, UINTCONSTANT, BOOLCONSTANT,
    FIELD_SELECTION,

    //operators
    LEFT_OP, RIGHT_OP,
    INC_OP, DEC_OP, LE_OP, GE_OP, EQ_OP, NE_OP,
    AND_OP, OR_OP, XOR_OP, MUL_ASSIGN, DIV_ASSIGN, ADD_ASSIGN,
    MOD_ASSIGN, LEFT_ASSIGN, RIGHT_ASSIGN, AND_ASSIGN, XOR_ASSIGN, OR_ASSIGN,
    SUB_ASSIGN,
    LEFT_PAREN, RIGHT_PAREN, LEFT_BRACKET, RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE, DOT,
    COMMA, COLON, EQUAL, SEMICOLON, BANG, DASH, TILDE, PLUS, STAR, SLASH, PERCENT,
    LEFT_ANGLE, RIGHT_ANGLE, VERTICAL_BAR, CARET, AMPERSAND, QUESTION,
    INVARIANT, PRECISE,
    HIGH_PRECISION, MEDIUM_PRECISION, LOW_PRECISION, PRECISION,

    //identifiers and constants
    IDENTIFIER, INTCONSTANT, UINTCONSTANT, FLOATCONSTANT, DOUBLECONSTANT, BOOLCONSTANT

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
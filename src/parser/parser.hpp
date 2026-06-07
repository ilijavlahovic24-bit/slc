#include<vector>
#include "lexer/token.hpp"
#include "parser/ast.hpp"
class Parser{
    public:
        Parser();
        AST* parse(std::vector<Token> tokens);
        AST* generateAST();
    private:
        std::vector<Token> tokens;
    
};
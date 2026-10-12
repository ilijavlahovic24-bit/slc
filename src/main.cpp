#include <iostream>
#include "lexer/lexer.hpp"
#include "parser/parser.hpp"
#include "semantic/symbol_table.hpp"
#include "semantic/semantic_pass.hpp"
#include "codegen/glsl_generator.hpp"

int main(int argc, char* argv[]) {
    /*
    //Lexical Analysis
    char* sourcefile=argv[1];
    Lexer lexer(sourcefile);
    std::vector<Token> tokens = lexer.tokenize();
    //Syntax Analysis
    Parser parser;
    AST* ast = parser.parse(tokens);
    //Semantic Analysis
    SemanticPasser semantic_parser;
    SymbolTable symbol_table= semantic_parser.build_symbol_table(ast);
    semantic_parser.analyze(ast);
    //CodeGeneration
    GLSLGenerator code_generator;
    code_generator.generate(ast, symbol_table);
    return 0;*/
    std::cout << "Hello, World!" << std::endl;
}
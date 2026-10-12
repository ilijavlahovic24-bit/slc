#ifndef SEMANTIC_PASS_HPP
#define SEMANTIC_PASS_HPP
#include "parser/AST.hpp"
#include "semantic/symbol_table.hpp"

class SemanticPasser{
public:
    SymbolTable build_symbol_table(AST* ast);
    void analyze(AST* ast);
};
#endif
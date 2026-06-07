#include "parser/AST.hpp"
#include "semantic/sybol_table.hpp"

class SemanticPasser{
public:
    SymbolTable build_symbol_table(AST* ast);
    void analyze(AST* ast);
};
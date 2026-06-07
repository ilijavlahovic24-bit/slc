#include "semantic/sybol_table.hpp"
#include "semantic/semantic_pass.hpp"
class GLSLGenerator{
public:
    void generate(AST* ast, SymbolTable& symbol_table);
};
#ifndef GLSL_GENERATOR_HPP
#define GLSL_GENERATOR_HPP
#include "semantic/symbol_table.hpp"
#include "semantic/semantic_pass.hpp"
class GLSLGenerator{
public:
    void generate(AST* ast, SymbolTable& symbol_table);
};
#endif
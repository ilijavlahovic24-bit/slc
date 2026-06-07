#include <vector>
#include <string>
#include "token.hpp"
class Lexer {
public:
    explicit Lexer(const std::string& source);
    std::vector<Token> tokenize();
private:
    void new_symbol(const std::string& symbol);
    void next_symbol();
    int curr_line;
};
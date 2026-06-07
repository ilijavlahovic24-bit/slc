class ASTNode{
public:    ASTNode();
private:
    ASTNode* children;
};


class AST{
public:
    AST();
private:
    ASTNode* root;


};
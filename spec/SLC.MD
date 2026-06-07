Specification of Language
Lexical strucutres

Keywords:
    CONST BOOL FLOAT DOUBLE INT UINT
    BREAK CONTINUE DO ELSE FOR IF
    DISCARD //This one may be removed
    SUBROUTINE 
    RETURN SWITCH CASE DEFAULT
    VEC MAT 
    SAMPLER IMAGE TEXTURE 

    STRUCT VOID WHILE
    IDENTIFIER TYPE_NAME 
    FLOATCONSTANT DOUBLECONSTANT INTCONSTANT UINTCONSTANT BOOLCONSTANT
    FIELD_SELECTION
    LEFT_OP RIGHT_OP
    INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
    AND_OP OR_OP XOR_OP MUL_ASSIGN DIV_ASSIGN ADD_ASSIGN
    MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
    SUB_ASSIGN

    LEFT_PAREN RIGHT_PAREN LEFT_BRACKET RIGHT_BRACKET LEFT_BRACE RIGHT_BRACE DOT
    COMMA COLON EQUAL SEMICOLON BANG DASH TILDE PLUS STAR SLASH PERCENT
    LEFT_ANGLE RIGHT_ANGLE VERTICAL_BAR CARET AMPERSAND QUESTION
    INVARIANT PRECISE
    HIGH_PRECISION MEDIUM_PRECISION LOW_PRECISION PRECISION

    operators:
    "+","-", "," , "=", "+=", "-=", "*=", "/=", "%=", "<<=", ">>=", "&=", "^=", "|=", "?:", "||", "^^", "&&", "|", "^", "&", "==", "!=", "<",">","<=" , ">=" , "<<", ">>", "*", "/", "%", "++", "~", "!", "(",")", "[","]"

    Tokens:
    IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*
    INTCONSTANT: [0-9]+
    UINTCONSTANT: [0-9]+[uU]
    FLOATCONSTANT: [0-9]*\.[0-9]+([eE][+-]?[0-9]+)?[fF]?
    DOUBLECONSTANT: [0-9]*\.[0-9]+([eE][+-]?[0-9]+)?(lf|LF)
    BOOLCONSTANT: true | false

Comments:
    Single-line: // ...
    Multi-line:  /* ... */
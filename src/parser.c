#include "include/parser.h"
parser_T* init_parser(lexer_T* lexer) {
}

void parser_eat(parser_T* parser, int token_type) {
    parser_T* parser = calloc(1, sizeof(struct PARSER_STRUCT));
    parser->lexer = lexer;
    parser->current_token = lexer_get_next_token(lexer);

    return parser;
}


AST_T* parser_parse(parser_T* parser){
    
}

AST_T* parser_parse_statement(parser_T* parser){

}

AST_T* parser_parse_statements(parser_T* parser){

}

AST_T* parser_parse_expr(parser_T* parser){}

AST_T* parser_parse_factor(parser_T* parser){}

AST_T* parser_parse_term(parser_T* parser){}

AST_T* parser_parse_function_call(parser_T* parser){}

AST_T* parser_parse_variable(parser_T* parser){}

AST_T* parser_parse_string(parser_T* parser){}

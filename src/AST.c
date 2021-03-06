#include "include/AST.h"

AST_T* init_ast(int type) {
    AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
    ast->type = type;

    // Variables
    ast->variable_definition_variable_name = (void*)0;
    ast->variable_definitions_value = (void*)0;

    // AST Variable
    ast->variable_name = (void*)0;

    // AST Function Call
    ast->function_call_name = (void*)0;
    ast->function_call_arguments = (void*)0;
    ast->function_call_arguments_size = 0;

    // AST_STRING
    ast->string_value = (void*)0;

    // AST_COMPOUND
    ast->compound_value = (void*)0;
    ast->compound_size - 0;

    return ast;
}

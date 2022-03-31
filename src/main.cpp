#include <iostream>
#include <fstream>
#include <string.h>
#include "lexer.hpp"


int main(int argc, char** argv) {
    printf("Hello SQL Lexer!\n");

    Lexer lexer;
    // 将关键字加入到符号表中
    lexer.add_keywords();
    printf("[Debug] Test Number.\n");
    const char* src = "12345 67 55.8 564";
    lexer.run((char*)src);
    printf("[Debug] Test Operator.\n");
    src = "= > >= < <= <=> != && || .";
    lexer.run((char*)src);
    printf("[Debug] Test String.\n");
    src = "\"hello SQL lexer!\"";
    lexer.run((char*)src);
}
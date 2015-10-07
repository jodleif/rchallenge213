//
// Created by jo on 10/7/15.
//

#ifndef AUTOMATA_AUTOMATA_H
#define AUTOMATA_AUTOMATA_H

#include <stddef.h>

void next_iteration(char* current_iteration, char* next_iter, size_t len);
char* make_iteration(const char* based_on);
void print_iteration(char* iter, size_t len);
void p_swap(char** p1, char** p2);
#endif //AUTOMATA_AUTOMATA_H

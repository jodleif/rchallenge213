//
// Created by jo on 10/7/15.
//

#include <string.h>
#include <malloc.h>
#include "automata.h"

void next_iteration(char *current_iteration, char *next_iter, size_t len)
{
        //
        for(size_t i=1;i<(len-1);++i){
                next_iter[i] = current_iteration[i-1] ^ current_iteration[i+1];
        }

}


// malloc in here - free after you're done with the "results!"
char *make_iteration(const char *based_on)
{
        // Small check
        size_t len = strlen(based_on);
        if(based_on == NULL || len == 0)
                return NULL;

        char* iteration = malloc(len*sizeof(char)+2);
        iteration[0] = iteration[len+1] = 0;

        for(size_t i=0;i<len;++i){
                char temp = 0;
                switch(based_on[i]){
                        case 'x':
                        case 'X':
                                temp=1;
                                break;
                        default:
                                break;
                }
                iteration[i+1]=temp;
        }
        return iteration;
}

void print_iteration(char *iter, size_t len)
{
        for(size_t i=1;i<len-1;++i){
                char to_print = iter[i];
                switch(to_print){
                        case 0:
                                to_print = ' ';
                                break;
                        case 1:
                                to_print = 'X';
                                break;
                        default:
                                to_print = ' ';
                }
                printf("%c",to_print);
        }
        printf("\n");
}

void p_swap(char **p1, char **p2)
{
char* temp = *p2;
        *p2 = *p1;
        *p1 = temp;
}

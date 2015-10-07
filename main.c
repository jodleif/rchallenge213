#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "automata.h"

int main()
{
        printf("Reddit challenge 213 - Cellular automata\n");

        char *iter = make_iteration("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000");
        char *iter_next = make_iteration("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000");
        // Adding 2 to pad for boundarycondition -> boundary == 0
        size_t len = strlen("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000")+2;
        print_iteration(iter, len);

        for (size_t i = 0; i < 100; ++i) {
                next_iteration(iter, iter_next, len);
                p_swap(&iter, &iter_next);
                print_iteration(iter, len);
        }

        free(iter);
        free(iter_next);
        return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "automata.h"

int main()
{
        char *iter = make_iteration("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000");
        char *iter_next = make_iteration("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000");
        size_t len = strlen("0000000000000000000000000000000000000000000000000X000000000000000000000000000000000000000000000000");
        for (size_t i = 0; i < 100; ++i) {
                next_iteration(iter, iter_next, len+2);
                p_swap(&iter, &iter_next);
                print_iteration(iter, len+2);
        }

        free(iter);
        free(iter_next);
        printf("Hello wrold\n");
        return 0;
}

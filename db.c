#include <string.h>

#include "input_handler.h"
#include "output_handler.h"

int main(int argc, char* argv[])
{
    InputBuffer* input_buffer = new_input_buffer();
    while (1) {
        print_prompt();
        read_input(input_buffer);

        if (strcmp(input_buffer -> buffer, ".exit") == 0) {
            close_input_buffer(input_buffer);
            exit(EXIT_SUCCESS);
        }
        else {
            printf("Unrecognized command '%s'\n", input_buffer -> buffer);
        }
    }
}
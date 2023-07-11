#include "main.h"

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        return (-1);
    }

    copyf(argv[1], argv[2]);

    return EXIT_SUCCESS;
}

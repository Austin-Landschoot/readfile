#include <stdio.h>

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("No file provided.\n");
        return 1;
    }
    else if (argc == 2) {
        FILE *file = fopen(argv[1], "r");
        if (file != NULL) {
            int ch;
            while ((ch = fgetc(file)) != EOF) {
                putchar(ch);
            }
            return 0;
        }
        else {
            perror("File not found");
            return 1;
        }
    }
    else {
        printf("Too many arguments provided.\n");
        return 1;
    }
}

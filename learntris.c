#include <stdio.h>

int main() {
    while (1) {
        char command = getchar();
        switch (command) {
            case 'q': return 0;
            case 'p':
                break;
            case EOF: break;
            default:
                fprintf(stderr, "Error: Invalid command '%c'\n", command);
                break;
        };
    };
    return 0;
};

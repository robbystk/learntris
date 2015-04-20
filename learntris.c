#include <stdio.h>
#include <stdlib.h>

void printboard(char board[10][22]);

int main() {
    // initialize board
    char board[10][22];
    int i, j;
    for (i=0; i<10; i++) {
        for (j=0; j<22; j++) {
            board[i][j] = '.';
        };
    };

    while (1) {
        char command = getchar();
        switch (command) {
            case 'q': return 0;
            case 'p':
                printboard(board);
                break;
            case EOF: break;
            case '\n': break;
            default:
                fprintf(stderr, "Error: Invalid command '%c'\n", command);
                break;
        };
    };
    return 0;
};

void printboard(char board[10][22]) {
    int i, j;
    for (j=0; j<22; j++) {
        for (i=0; i<10; i++) {
            printf("%c ", board[i][j]);
        };
        printf("\n");
    };
};

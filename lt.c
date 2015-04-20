#include <stdio.h>
#include <stdlib.h>

void printboard(char board[10][22]);
void printhelp();

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
            case 'h':
                printhelp();
                break;
            case 'p':
                printboard(board);
                break;
            case 'q': return 0;
            case EOF: break;
            case '\n': break;
            default:
                fprintf(stderr, "Invalid command '%c' (h for help)\n", //
                        command);
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

void printhelp() {
     printf("\tg\tenter a new board state\n");
     printf("\th\tdisplay this help\n");
     printf("\tp\tdisplay the current state of the board\n");
     printf("\tq\tquit\n");
};

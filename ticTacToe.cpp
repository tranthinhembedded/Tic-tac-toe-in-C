#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char board[SIZE][SIZE]) {
    system("clear || cls"); // Xóa màn hình
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) {
            for (int j = 0; j < SIZE; j++) {
                printf("---");
                if (j < SIZE - 1) printf("+");
            }
            printf("\n");
        }
    }
    printf("\n");
}

int checkWin(char board[SIZE][SIZE]) {
    // Kiểm tra hàng ngang, hàng dọc, đường chéo
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1; // Hàng ngang
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1; // Hàng dọc
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1; // Đường chéo chính
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1; // Đường chéo phụ

    return 0;
}

int checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

void playerMove(char board[SIZE][SIZE], char symbol) {
    int row, col;
    while (1) {
        printf("Nhap vi tri cua ban (hang cot, 1-3): ");
        scanf("%d %d", &row, &col);
        row--; col--; // Chuyển sang chỉ số mảng
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            board[row][col] = symbol;
            break;
        } else {
            printf("Vi tri khong hop le.\n");
        }
    }
}

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';

    initializeBoard(board);

    while (1) {
        printBoard(board);
        printf("Luot cua nguoi choi %c:\n", currentPlayer);
        playerMove(board, currentPlayer);

        if (checkWin(board)) {
            printBoard(board);
            printf("Nguoi choi %c thang!\n", currentPlayer);
            break;
        }

        if (checkDraw(board)) {
            printBoard(board);
            printf("Tro choi hoa!\n");
            break;
        }

        // Đổi lượt
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

/**
Dò mìn đơn giản. Viết chương trình trò chơi dò mình. Input từ bàn phím gồm một cặp số m, n, K nguyên dương nhỏ hơn 10.
Chương trình sinh ngẫu nhiên một bản đồ mìn kích thước m hàng n cột, trên đó có K quả mìn. Lặp đi lặp lại cho đến hết ván:
Người chơi nhập một tọa độ x, y. Với mỗi tọa độ đọc được, chương trình kiểm tra xem tọa độ đó có mìn hay không. Nếu có thì báo ‘YOU’RE DEAD!’,
in lại bản đồ với tất cả các quả mìn ra màn hình và kết thúc trò chơi. Nếu không có thì coi như người chơi đã mở thành công ô đó,
chương trình in ra bản đồ với các ô đã thử mà không có mìn, ghi tại mỗi ô đó số mìn nằm trong 8 ô xung quanh. …..
Đại loại như trò chơi Dò mìn thông thường nhưng không cần loang khi thử vào ô không có mìn tại đó và xung quanh.
*/
#include<iostream>
#include <queue>
#include <random>
using namespace std;
const int MAX_SIZE = 10;

// Tạo bản đồ mìn
void create_board(int m, int n, int k, bool board[][MAX_SIZE]) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, m*n-1);

    for (int i = 0; i < k; i++) {
        int idx = dis(gen);
        int row = idx / n;
        int col = idx % n;
        board[row][col] = true;
    }
}

// In bản đồ
void print_board(int m, int n, char board[][MAX_SIZE]) {
    cout << "  ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << i << " ";
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Tìm số lượng mìn xung quanh ô
int count_mines(int m, int n, bool board[][MAX_SIZE], int row, int col) {
    int count = 0;
    for (int i = row-1; i <= row+1; i++) {
        for (int j = col-1; j <= col+1; j++) {
            if (i >= 0 && i < m && j >= 0 && j < n && board[i][j]) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int m, n, k;
    cout << "Enter board size (m x n): ";
    cin >> m >> n;
    cout << "Enter number of mines: ";
    cin >> k;

    bool board[MAX_SIZE][MAX_SIZE] = {false};
    create_board(m, n, k, board);

    char display_board[MAX_SIZE][MAX_SIZE] = {' '};
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        display_board[i][j] = '-';
    }
}

    bool game_over = false;
    int num_opened = 0;
    while (!game_over) {
    // In bản đồ hiện tại
    print_board(m, n, display_board);

    // Nhập tọa độ ô cần mở
    int row, col;
    cout << "Enter row and column to open: ";
    cin >> row >> col;

    // Kiểm tra ô đã được mở trước đó chưa
    if (display_board[row][col] != '-') {
        cout << "This cell has already been opened! Try again." << endl;
        continue;
    }

    // Kiểm tra có mìn hay không
    if (board[row][col]) {
        cout << "YOU'RE DEAD!" << endl;
        game_over = true;
    } else {
        // Đếm số lượng mìn xung quanh ô đã mở
        int count = count_mines(m, n, board, row, col);
        display_board[row][col] = '0' + count;
        num_opened++;

        // Kiểm tra đã mở hết các ô không có mìn chưa
        if (num_opened == m*n - k) {
            cout << "YOU WIN!" << endl;
            game_over = true;
        }
    }
   }

// In bản đồ với tất cả các quả mìn ra màn hình
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        if (board[i][j]) {
            display_board[i][j] = '*';
        }
    }
    }
    print_board(m, n, display_board);

    return 0;
}

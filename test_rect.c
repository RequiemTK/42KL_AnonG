#include <unistd.h>

void write_char(char c) {
    write(1, &c, 1);
}

void write_newline() {
    write_char('\n');
}

void func_rectangle(int x, int y) {
    if (x < 2 || y < 2) return; // Rectangle needs at least 2x2 to draw corners

    for (int row = 0; row < y; row++) {
        for (int col = 0; col < x; col++) {
            if (row == 0 && col == 0)
                write_char('/');         // Top-left corner
            else if (row == 0 && col == x - 1)
                write_char('\\');        // Top-right corner
            else if (row == y - 1 && col == 0)
                write_char('\\');        // Bottom-left corner
            else if (row == y - 1 && col == x - 1)
                write_char('/');         // Bottom-right corner
            else if (row == 0 || row == y - 1)
                write_char('*');         // Top or bottom border
            else if (col == 0 || col == x - 1)
                write_char('*');         // Left or right border
            else
                write_char(' ');         // Inside of rectangle
        }
        write_newline();
    }
}

int main(){
    func_rectangle(7, 10);
    return 0;
}
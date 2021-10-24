#include <iostream>
#include <ncurses.h>

int main() {
    char *todos[] = {
        "1 kilo domates",
        "Buzdolabı poseti al",
        "Algoritma analizi sunumunu hazırla"
    };

    // start curses mode
    initscr();

    printw("TermiDash v1.0.0");
    printw("\n\n\nYapılacaklar:\n");

    for (int i = 0; i < sizeof(todos) / sizeof(todos[0]); i++) {
        printw("- %s\n", todos[i]);
    }

    refresh();

    // keep it open until someone presses a key
    getch();

    // close the curses
    endwin();

    return 1;
}

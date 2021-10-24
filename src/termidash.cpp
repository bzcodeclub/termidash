#include "termidash.h"

using namespace std;

int main()
{
    fstream todoFile;
    todoFile.open("todo.td", ios::in);

    string todoLine;
    int line = 1;

    initscr();

    /* ToDo Box */
    WINDOW *todoWin = newwin(15, 20, 1, 2);
    box(todoWin, 0, 0);
    mvwprintw(todoWin, 0, 2, " ToDo ");
    refresh();

    while (getline(todoFile, todoLine)) {
        mvwprintw(todoWin, line, 1, todoLine.c_str());

        line++;
    }
    wrefresh(todoWin);

    todoFile.close();

    getch();
    endwin();
    return 1;
}

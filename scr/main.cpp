#include <ncurses.h>
#include <locale.h>

#include "ncurses_extentions.colours.h"
using namespace excolour;

int screenSetUp();

int main()
{
    screenSetUp();

    mvprintw(1, 1, "aaaaaa");
    refresh();

    defDefaultColours();
    
    char input;
    bool stay = true;
    while (stay)
    {
        input=getch();
        switch (input)
        {
            case 'q':
                stay = false;
                break;
       
            default:
                break;
        }
    }

    endwin();

    return 0;

}

int screenSetUp()
{
    setlocale(LC_ALL, "en_GB.utf8");
    initscr();
    noecho();
    refresh();

    return 0;
}

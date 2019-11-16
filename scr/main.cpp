#include <ncurses.h>
#include <locale.h>
#include <list>
#include <string>

#include "ncurses_extentions.colours.h"
#include "ncurses_extentions.guide.h"
using namespace excolour;

int screenSetUp();

int main()
{
    screenSetUp();

    mvprintw(1, 1, "aaaaaa");
    refresh();

    defDefaultColours();


    std::list<std::string> menus = {"Stats", "Inv", "Data", "Map", "Radio"};

    //drawMenu();
    Guide AGuide1(menus); 
    //Guide * AGuide = new Guide(); 
    AGuide1.drawMenu();
    //AGuide->drawMenu();
    
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
    //setlocale(LC_ALL, "");
    initscr();
    noecho();
    refresh();

    return 0;
}

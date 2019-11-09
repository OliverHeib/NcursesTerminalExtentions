//#include <sys/ioctl.h>
//#include <stdio.h>
//#include <unistd.h>

#include <ncurses.h>
#include <locale.h>

#include "ncurses_extentions.colours.h"
// #include "cursesWindow.h"
// #include "cursesDesktop.h"


int screenSetUp();

int main()
{
    
    screenSetUp();
    //clear();
    //wbkgd(stdscr, DefaultColour);
    //refresh();
    mvprintw(1, 1, "aaaaaa");
    refresh();

    defDefaultColour();

    // WINDOW * guideWin = newwin(20, 20, 20, 20);
    // WINDOW * guideWin2 = newwin(21, 21, 23, 23);
    // WINDOW * desktop = newwin( stdscr->_maxy+1, stdscr->_maxx+1, 0, 0);
    
    // //exDrawDesktop(desktop);
    // //exDrawWindow(desktop, false, false, "");
    // exDrawWindow(guideWin, true, true, "test win");
    // exDrawWindow(guideWin2, true, true, "test win 2");
    
    
    // wattron(desktop, COLOR_PAIR(buttonColour));
    // for(int x = 0; x <= desktop->_maxx; x++)
    // {
    //     mvwprintw(desktop, desktop->_maxy-1, x, " ");
    //     mvwprintw(desktop, desktop->_maxy, x, " ");
    // }
    // wattroff(desktop, COLOR_PAIR(buttonColour));

    // mvwprintw(desktop, desktop->_maxy, 2, "\u259D");
    // mvwprintw(desktop, desktop->_maxy-1, 2, "\u2597");
    // mvwprintw(desktop, desktop->_maxy, 3, "\u2598");
    // mvwprintw(desktop, desktop->_maxy-1, 3, "\u2596");

    // wrefresh(desktop);

    // int a = DefaultColour;

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
            
            case 'g':
                //exDrawWindow(guideWin, true, true, "test win");
                break;
            
            case 'k':
                //exDrawWindow(guideWin2, true, true, "test win 2");
                break;

            case 'm':
                //exDrawDesktop(desktop);
                //exDrawWindow(guideWin, true, true, "test win");
                //mvwin(guideWin2, 25, 30);
                //exDrawWindow(guideWin2, true, true, "test win 2");
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
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    refresh();

    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  ncurses_extentions.guide.cpp
 *
 *    Description: Terminal Hitchhikers Guide 
 *
 *        Version:  0.1
 *        Created:  09/11/19 14:36:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Oliver Heib
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include "ncurses_extentions.guide.h"

namespace excolour{

    int Guide::drawMenu()
    {
        for(int y = 0; y <= this->Win->_maxy; y++)
        {
            for(int x = 0; x <= this->Win->_maxx; x++)
            {
                mvprintw(y, x, " ");
            }
        }

        for(int x = 0; x <= this->Win->_maxx; x++)
        {
            mvprintw(10, x, "\u2580");
        }
        move(0,0);
        wrefresh(this->Win);
        return 0;
    }

    Guide::Guide(){
        this->Win = newwin( stdscr->_maxy+1, stdscr->_maxx+1, 0, 0);
    }

}

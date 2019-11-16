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
#include <list>
#include "ncurses_extentions.guide.h"

namespace excolour{

    int Guide::drawMenu()
    {
        for(int y = 0; y <= this->Win->_maxy; y++)
        {
            for(int x = 0; x <= this->Win->_maxx; x++)
            {
                mvwprintw(this->Win, y, x, " ");
                //mvprintw(y, x, " ");
            }
        }

        for(int x = 0; x <= this->Win->_maxx; x++)
        {
            mvwprintw(this->Win, 10, x, "\u2501");
        }
        int count = 0;
        for (std::string i : this->Menus)
        {
            
            mvwprintw(this->Win, 9, (this->Win->_maxx/(this->Menus.size()))*count + ((this->Win->_maxx/(this->Menus.size()))/2),  (i).append("\u2513").c_str());
            mvwprintw(this->Win, 9, (this->Win->_maxx/(this->Menus.size()))*count + ((this->Win->_maxx/(this->Menus.size()))/2)-1, "\u250f");
            mvwprintw(this->Win, 10, (this->Win->_maxx/(this->Menus.size()))*count + ((this->Win->_maxx/(this->Menus.size()))/2)-1, "\u251b");
            mvwprintw(this->Win, 10, (this->Win->_maxx/(this->Menus.size()))*count + ((this->Win->_maxx/(this->Menus.size()))/2), (std::string (i.length()-3, ' ')).c_str());
            mvwprintw(this->Win, 10, (this->Win->_maxx/(this->Menus.size()))*count + ((this->Win->_maxx/(this->Menus.size()))/2)-3 + i.length(), "\u2517");
            //mvwprintw(this->Win, 19, 10+count, i.c_str());
            count++;
        }

        //mvwprintw(this->Win, 19, this->Win->_maxx/(this->Menus.size()), this->Menus.front().c_str());

        move(0,0);
        wrefresh(this->Win);
        return 0;
    }

    Guide::Guide(std::list <std::string> menus )
    {
        this->Win = newwin( stdscr->_maxy+1, stdscr->_maxx+1, 0, 0);
        this->Menus = menus;
    }

}

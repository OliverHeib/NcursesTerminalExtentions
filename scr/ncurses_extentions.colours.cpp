/*
 * =====================================================================================
 *
 *       Filename:  ncurses_extentions.colours.cpp
 *
 *    Description:  Defines Colours within Ncurses framework 
 *
 *        Version:  1.0
 *        Created:  09/11/19 14:39:30
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Oliver Heib
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <ncurses.h>

namespace excolour{


        int defDefaultColours()
        {
                start_color();
                init_pair(0, COLOR_WHITE, COLOR_BLACK);
                init_pair(1, COLOR_BLACK, COLOR_MAGENTA);
                init_pair(2, COLOR_BLACK, COLOR_YELLOW);
                init_pair(3, COLOR_BLACK, COLOR_RED);

                return 0;
        }

}

/*
 * =====================================================================================
 *
 *       Filename:  ncurses_extentions.guide.h
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

#ifndef NCURSESEXTENTIONSGUIDE_H
#define NCURSESEXTENTIONSGUIDE_H

namespace excolour{

    //int drawMenu();
    class Guide
    {
        private:
            WINDOW * Win;
            std::list <std::string> Memus2;
            
        public:
            int drawMenu();
            Guide();

    };

}

#endif

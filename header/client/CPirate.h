
/*
 * CClientPirate.h
 *
 * Copyright 2014 PIRATES
 * http://dps.univ-fcomte.fr/projects/pirates.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef __CPIRATE_H
#define __CPIRATE_H


#include <iostream>
#include <common/SFML.h>


class CPirate
{
    public :
        CPirate(int x, int y);
        ~CPirate();

        void    update(sf::Vector2<int> in);
        void    render(sf::RenderWindow& window);

    private :
        sf::Texture     tPirate;
        sf::Sprite      spPirate;
};


#endif  //__CPIRATE_H



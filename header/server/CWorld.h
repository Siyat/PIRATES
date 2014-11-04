//
//  @ Project : PIRATES
//  @ File Name : CWorld.h
//  @ Date : 20/10/2014
//  @ Author : Romain
//


#ifndef _CWORLD_H
#define _CWORLD_H


#include "Box2D.h"


class CWorld
{
  public :
    CWorld();
    ~CWorld();
  
  private :
    b2Vec2    m_gravity;
    b2World   m_world;
    b2Body    *m_pGroundBody;
}



#endif // _CWORLD_H


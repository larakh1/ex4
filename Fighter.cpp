//
// Created by Shada Sabea on 12/06/2022.
//

#include "Fighter.h"

Fighter::Fighter(const char *name, int maxHP, int force) : Player(name,maxHP,force), m_job("Fighter")
{}

int Fighter::getAttackStrength() const
{
    return m_force*2+m_level;
}



void Fighter::addCoins(const int add)
{
    if(add>=0)
    {
        m_coins += add;
    }
}

void Fighter::heal(const int add)
{ if (add<0)
    {
        return;
    }
    if(m_HP!=m_maxHP)
    {
        m_HP+=add;
        if(m_HP>m_maxHP)
        {
            m_HP=m_maxHP;
        }
    }
}

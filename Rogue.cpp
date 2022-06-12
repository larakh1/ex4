//
// Created by Shada Sabea on 09/06/2022.
//

#include "Rogue.h"

Rogue::Rogue(const char *name, int maxHP, int force) : Player(name,maxHP,force), m_job("Rogue")
{}


void Rogue::addCoins(int add) {
    if(add>0)
    {
        m_coins+=add;
    }
    m_coins*=m_coins;
}

void Rogue::heal(const int add)
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


int Rogue::getAttackStrength() const
{
    return m_force+m_level;
}

//
// Created by Shada Sabea on 09/06/2022.
//
#include"Wizard.h"


void Wizard::heal(const int add)
{ if (add<0)
    {
        return;
    }
    if(m_HP!=m_maxHP)
    {
        m_HP+=(2*add);
        if(m_HP>m_maxHP)
        {
            m_HP=m_maxHP;
        }
    }
}



void Wizard::addCoins(const int add) {
    if (add >= 0) {
        m_coins += add;
    }
}


int Wizard::getAttackStrength() const
{
    {
        return m_force + m_level;
    }
}

Wizard::Wizard(const char *name, int maxHP, int force) : Player(name,maxHP,force), m_job("Wizard")
{}

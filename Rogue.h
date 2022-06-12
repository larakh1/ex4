//
// Created by Shada Sabea on 09/06/2022.
//

#include "Player.h"

#ifndef EX4_ROGUE_H
#define EX4_ROGUE_H

class Rogue : public Player{
public:
    Rogue(const char* name, int maxHP, int force);
    ~Rogue()=default;
    void addCoins(const int add) override;
    void heal(const int add) override;
    int getAttackStrength() const override;

private:
    std::string m_job;
};


#endif //EX4_ROGUE_H

#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H

#include "Player.h"

class Fighter : public Player{
public:

    Fighter(const char* name, int maxHP, int force);
    ~Fighter()=default;
    int getAttackStrength() const override;
    void heal(const int add) override;
    void addCoins(const int add) override;

private:
    std::string m_job;

};

#endif //EX4_FIGHTER_H

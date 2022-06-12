//
// Created by Shada Sabea on 09/06/2022.
//
#include"player.h"
#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H
class Wizard:public  Player{
public:
    Wizard(const char* name, int maxHP, int force);
    ~Wizard()=default;
    void heal(const int add) override;
    void addCoins(const int add) override;
    int getAttackStrength() const override;


private:
std::string m_job;
};



#endif //EX4_WIZARD_H

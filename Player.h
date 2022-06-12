#ifndef EX2_Player_H
#define EX2_Player_H

#include <iostream>
#include "utilities.h"


using std::string;

class Player{

public:
    /**
     * C'tor of Player class
     * @param name - player's name
     * @param maxHP- maximum health points
     * @param force- player's force
     */

    Player(const char* name, int maxHP=MAX_DEFAULT_HP,int force=MAX_DEFAULT_FORCE);


    /*
    * Here we are explicitly telling the compiler to use the default methods
   */

    Player(const Player& player)=default;

   virtual ~Player()=default;

    Player& operator=(const Player& player)=default;

   virtual void operator<<() const =0;///////////////////

    /**
 * printing player's info
 */
    void printInfo() const;
/**
 * leveling up the player until level 10
 */
    void levelUp();
/**
 *
 * @return the player's level
 */
    int getLevel() const;
/**
 *
 * @param add the amount of force we add to the player's force
 */
    void buff(const int add);
/**
 *
 * @param add the amount of hp we add to the player's hp, until it gets to the max_hp
 */
     virtual void heal(const int add)=0;
/**
 *
 * @param decrease the amount of hp we decrease from the player's hp
 */
    void damage(const int decrease);
/**
 *
 * @return true if the player is dead(the hp is 0),else it returns false
 */
    bool isKnockedOut() const;
    /**
     *
     * @param add the amount of coins that we add to the player coins
     */
    virtual void addCoins(const int add)=0;
/**
 *
 * @param price - the price that the player should pay
 * @return true if the purchase has been done successfully,else it returns false
 */
    bool pay(const int price);
/**
 *
 * @return player's attack strength
 */
virtual int getAttackStrength() const=0;

protected:
int m_coins;
int m_HP;
int m_maxHP;
int m_level;
int m_force;


private:
    const char* m_name;
    static const int MAX_LEVEL=10;
    static const int MAX_DEFAULT_HP=100;
    static const int MAX_DEFAULT_FORCE=5;

};

#endif //EX2_Player_H

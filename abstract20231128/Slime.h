#pragma once
#include "Enemy.h"
class Slime :
    public Enemy
{
public:
    Slime();
    void attack(Enemy& enemy);
    void playBase(Enemy& enemy);
};


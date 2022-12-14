#include <iostream>
using namespace std;
#pragma warning(default:4716)

class Fighter
{
public:
    string name;
    int healthy;
    int damage_per_attack;
    Fighter(string Name, int Healthy, int DamagePerAttack)
    {
        name = Name;
        healthy = Healthy;
        damage_per_attack = DamagePerAttack;
    };
};

class Fight
{
public:
    void get_winner(Fighter a, Fighter b)
    {
        if (a.healthy / b.damage_per_attack >= b.healthy / a.damage_per_attack)
            cout << "Winner -- " << a.name << endl;
        else
            cout << "Winner -- " << b.name << endl;
        return ;
        
    };
};

int main()
{
    Fighter Andry("Andry", 15, 4);
    Fighter Dmitro("Dmitro", 20, 3);
    Fight First;
    First.get_winner(Andry, Dmitro);
}

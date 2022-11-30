#include <iostream>
using namespace std;
#pragma warning(default:4716)

class Fighter
{
public:
    string name;
    int healthy;
    int damagePerAttack;
    Fighter(string Name, int Healthy, int DamagePerAttack)
    {
        name = Name;
        healthy = Healthy;
        damagePerAttack = DamagePerAttack;
    };
};

class Fight
{
public:
    void GetWinner(Fighter a, Fighter b)
    {
        if (a.healthy / b.damagePerAttack >= b.healthy / a.damagePerAttack)
            cout << "Winner -- " << a.name << endl;
        else
            cout << "Winner -- " << b.name << endl;
        return ;
        
    };
};

int main()
{

    Fighter Andry("A", 15, 4);
    Fighter Dmitro("B", 20, 3);
    Fight First;//першій бій
    First.GetWinner(N1, N2);
}

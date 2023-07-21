#include <iostream>
using namespace std;

class Agent
{

private:
    string role;

public:
    int health;

    string getRole()
    {
        return role;
    }
    void setRole(string s)
    {
        role = s;
    }
};

int main()
{
    Agent jett;

    cout << "Health of JETT is garbage Value => " << jett.health << endl;
    jett.health = 90;
    cout << "Health of JETT is => " << jett.health << endl;

    cout << "Role of JETT is  garbage Value => " << jett.getRole() << endl;
    jett.setRole("Duelist");
    cout << "Role of JETT is => " << jett.getRole() << endl;

    cout << "Size of JETT " << sizeof(jett) << endl;
    return 0;
}
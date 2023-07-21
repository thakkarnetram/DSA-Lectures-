#include <iostream>
using namespace std;

class Hero
{
public:
    int Level;
    char CodeWord;
    // getter
    int getLevel()
    {
        return Level;
    }
    char getCodeWord()
    {
        return CodeWord;
    }
    // setter
    void setLevel(int x)
    {
        Level = x;
    }
    void setCodeWord(char x)
    {
        CodeWord = x;
    }
};

int main()
{
    // Statically initialized
    cout << "------------Statically Done----------------" << endl;
    cout << endl;
    Hero superman;
    cout << "!---------Before Setting Values---------!" << endl;
    cout << "Size of Superman is " << sizeof(superman) << endl;
    cout << "Superman level is " << superman.Level << endl;
    cout << "Superman Code word is " << superman.CodeWord << endl;
    cout << endl;
    cout << "!---------After Setting Values---------!" << endl;
    superman.setCodeWord('A');
    superman.setLevel(66);
    cout << "Superman level is " << superman.Level << endl;
    cout << "Superman Code word is " << superman.CodeWord << endl;
    cout << endl;

    // Dynamically initialized
    cout << "------------Dynamically Done----------------" << endl;
    cout << endl;
    Hero *batman = new Hero();
    cout << "!---------Before Setting Values---------!" << endl;
    cout << "Size of Batman is " << sizeof(batman) << endl;
    cout << "CodeWord Of using arrow operator Batman is " << batman->CodeWord << endl;
    // cout << "CodeWord Of Batman is " << (*batman).CodeWord << endl;
    cout << "Level of Batman using arrow operator is  " << batman->Level << endl;
    // cout << "Level Of Batman is " << (*batman).Level << endl;
    cout << endl;
    cout << "!---------After Setting Values---------!" << endl;
    batman->setCodeWord('F');
    batman->setLevel(99);
    cout << "CodeWord Of using arrow operator Batman is " << batman->CodeWord << endl;
    cout << "Level of Batman using arrow operator is  " << batman->Level << endl;
    return 0;
}
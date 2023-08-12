#include <iostream>
using namespace std;

class Mom
{
public:
    string skinColor;
    string eyeColor;
    // getter
    string getSkinColor()
    {
        return skinColor;
    }
    string getEyeColor()
    {
        return eyeColor;
    }
    // setter
    void setSkinColor(string x)
    {
        skinColor = x;
    }
    void setEyeColor(string x)
    {
        eyeColor = x;
    }
    // function
    void SkinColor1()
    {
        cout << "Im skin color mom " << endl;
    }
    void EyeColor1()
    {
        cout << "My eye color is blue mom" << endl;
    }
};

class Dad
{
public:
    int height;
    string skinTone;
    // getter
    int getHeight()
    {
        return height;
    }
    string getSkinTone()
    {
        return skinTone;
    }
    // setter
    void setHeight(int x)
    {
        height = x;
    }
    void setSkinTone(string x)
    {
        skinTone = x;
    }
    // function
    void Height1()
    {
        cout << "Im of dad's height" << endl;
    }
    void SkinTone1()
    {
        cout << "Skin tone is brown like dad " << endl;
    }
};

class Son : public Dad
{
    void son()
    {
        cout << "IM dad's son and being inherited" << endl;
    }
};

class Daughter : public Mom
{

    void daughter()
    {
        cout << " Im mom's daughter and being inherited " << endl;
    }
};

int main()
{
    Son ramesh;
    Daughter sunita;
    Mom shalu;
    ramesh.Height1();
    cout << "Before " << ramesh.getHeight() << endl;
    ramesh.height = 10;
    cout << "Before " << ramesh.getHeight() << endl;
    ramesh.setSkinTone("black");
    cout << "SUNITA " << sunita.getEyeColor() << endl;
    sunita.setEyeColor("blue");
    cout << "SUNITA " << sunita.getEyeColor() << endl;
    cout << "Shalu  " << shalu.getEyeColor() << endl;
    shalu.setEyeColor("ornage");
    cout << "Shalu  " << shalu.getEyeColor() << endl;
    return 0;
}
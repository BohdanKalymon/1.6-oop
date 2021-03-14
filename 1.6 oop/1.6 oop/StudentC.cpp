#include "StudentC.h"
#include <iostream> 

using namespace std;

void StudentC::Init(int rik, StudentC::Man man)
{
    setRik(rik);     setMan(man);
}
void StudentC::Display() const
{
    cout << endl;     cout << "man = " << endl;
    man.Display();                       // використовуємо делегування    
    cout << "rik  = " << rik << endl; 
}
void StudentC::Read()
{
    int rik;     StudentC::Man m;     cout << endl;
    cout << "Man  = ? " << endl;
    m.Read();                            // використовуємо делегування    
    cout << "rik = ? "; cin >> rik; 

    Init(rik, m);
}  void StudentC::Man::Init(string name, int age, string gender, int weight)
{
    setName(name);     setAge(age); setGender(gender); setWeight(weight);
}  void StudentC::Man::Display() const
{
    cout << endl;
    cout << "name = " << name << endl;  
    cout << "age  = " << age << endl;
    cout << "gender = " << gender << endl;
    cout << "weight  = " << weight << endl;
}

void StudentC::Man::Read()
{
    string name;     int age;  string gender; int weight;
    cout << endl;
    cout << "name = ? "; cin >> name;
    cout << "age  = ? "; cin >> age;
    cout << "gender = ? "; cin >> gender;
    cout << "weight = ? "; cin >> weight;
    Init(name, age, gender, weight);
}

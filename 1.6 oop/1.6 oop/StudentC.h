#pragma once
#include <string> 

using namespace std;

class StudentC
{
private:     string rik;

       class Man {
       private:
           string name;   
           int age;
           string gender;
           int weight;

       public:
           string getName() const { return name; }
           int getAge() const { return age; }
           string getGender() const { return gender; }
           int getWeight() const { return weight; }
           void setName(string name) { this->name = name; }
           void setAge(int age) { this->age = age; }
           void setGender(string gender) { this->gender = gender; }
           void setWeight(int weight) { this->weight = weight; }

           void Init(string name, int age, string gender, int weight);
           void Display() const;
           void Read();

       };

       Man man;
public:
    string getRik() const { return rik; } 
    StudentC::Man getMan() const { return man; }  
    void setRik(int rik) { this->rik = rik; } 
    void setMan(StudentC::Man man) { this->man = man; }

    void Init(int rik, StudentC::Man man);   
    void Display() const;   
    void Read();
};

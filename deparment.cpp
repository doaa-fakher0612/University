#include <iostream>

using namespace std;

class Department{
//fields
private:
    string name;
    int capacity;
    double reqiuredGpa;

public:

    //constructors
    Department(){
    this->name = "";
    this->capacity =0;
    this->reqiuredGpa = 0.0;
    };

    Department(string name, int capacity , double reqiuredGpa){
    this->name = name;
    this->capacity =capacity;
    this->reqiuredGpa = reqiuredGpa;
    };

    //setters

    void setName(string n){
    name =n;
    }
    void setCap (int cap){
    capacity = cap;
    }
    void setGpa(double reqGpa){
    reqiuredGpa= reqGpa;
    }

    //getters

    string getName(){
    return name;
    }

    int getCap(){
    return capacity;
    }

    double getGpa(){
    return reqiuredGpa;
    }
};
int main()
{
    Department myObj;
  myObj.setName("ali");
  cout << myObj.getName();
  return 0;
}

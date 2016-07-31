#include<iostream>
#include<string>

using namespace std;

class Animal
{
public:
    virtual void bark()=0;
};

class Cat:public Animal
{
public:
    string name;
    Cat(string s):name(s){}
    ~Cat(){}
    virtual void bark()
    {
        cout<<" ������ "<<endl;
    }
    virtual void print()
    {
        cout<<" ���֣�"<<name<<endl;
    }
};

class Dog:public Animal
{
public:
    string name1;
    Dog(string s):name1(s){}
    ~Dog(){}
    virtual void bark()
    {
        cout<<" ������ "<<endl;
    }
    virtual void print()
    {
        cout<<" ���֣�"<<name1<<endl;
    }
};

int main()
{
    Dog one("wangcai");
    one.bark();
    one.print();
    return 0;
}

#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
    string name;
    string academy;
    int MBBN;
    static int id;
    Student(string NAME , string ACADEMY , int mbbn):name(NAME),academy(ACADEMY),MBBN(mbbn){}
    void add1(string NAME,string ACADEMY,int mbbn)
    {
        name = NAME;
        academy = ACADEMY;
        MBBN = mbbn;
        id++;
    }
    void change1(string NAME,string ACADEMY,int mbbn)
    {
        name = NAME;
        academy = ACADEMY;
        MBBN = mbbn;
    }
    void delete1()
    {
        name = "";
        academy = "";
        MBBN = 0;
        id--;
    }
    void display1()
    {
        cout<<" ����: "<<name<<endl<<" Ժϵ: "<<academy<<endl<<" ѧ��: "<<id<<endl;
    }
    void display2()
    {
        cout<<" ������ͼ����Ŀ: "<<MBBN<<endl;
    }
    ~Student(){}
};

class Book
{
public:
    string bookname;
    string author;
    string press;
    int booksize;
    static int bookid;
    Book(string NAME,string AUTHOR, string PRESS,int size):bookname(NAME),author(AUTHOR),press(PRESS),booksize(size){}
    void add(string NAME,string AUTHOR, string PRESS,int size)
    {
        bookname = NAME;
        author = AUTHOR;
        press = PRESS;
        booksize = size;
        bookid++;
    }
    void change(string NAME,string AUTHOR, string PRESS,int size)
    {
        bookname = NAME;
        author = AUTHOR;
        press = PRESS;
        booksize = size;
    }
    void delete3()
    {
        bookname = "";
        author = "";
        press = "";
        booksize = 0;
        bookid--;
    }
    void display()
    {
        cout<<" ������ "<<bookname<<endl<<" ���ߣ� "<<author<<endl<<" �����磺 "<<press<<endl<<" ������ "<<booksize<<endl;
    }
    ~Book(){}
};

int Student::id = 1;
int Book::bookid = 1;

int main()
{
    Student el("mrli","software",99);
    Book il("bignum","mrli","beijing",99);
    string temp1,temp2,temp3,temp4,temp5;
    int num,num1,num2,num3,num4;
    cout<<"           ����Ҫ��ʲô��        "<<endl;
    cout<<"     1.ѧ����Ϣ    2.ͼ����Ϣ    "<<endl;
    cout<<"         ����������ѡ��   ��     "<<endl;
    cin>>num;
    if(num == 1)
    {
        cout<<"         ����Ҫ��ʲô��              "<<endl;
        cout<<"         1.���ѧ����Ϣ              "<<endl;
        cout<<"         2.�޸�ѧ����Ϣ              "<<endl;
        cout<<"         3.�鿴ѧ����Ϣ              "<<endl;
        cout<<"     4.�鿴ѧ���Լ����ĵ���Ŀ��Ϣ    "<<endl;
        cout<<"         5.ɾ��ѧ����Ϣ              "<<endl;
        cout<<"         ����������ѡ��   ��         "<<endl;
        cin>>num1;
        if(num1 == 1)
        {
            cin>>temp1>>temp2>>num3;
            el.add1(temp1,temp2,num3);
        }
        else if(num1 == 2)
        {
            cin>>temp1>>temp2>>num3;
            el.change1(temp1,temp2,num3);
        }
        else if(num1 == 3)
        {
            el.display1();
        }
        else if(num1 == 4)
        {
            el.display2();
        }
        else
        {
            el.delete1();
        }
    }
    else
    {
        cout<<"         ����Ҫ��ʲô��          "<<endl;
        cout<<"         1.���ͼ����Ϣ          "<<endl;
        cout<<"         2.�޸�ѧ����Ϣ          "<<endl;
        cout<<"         3.ɾ��ͼ����Ϣ          "<<endl;
        cout<<"         4.�鿴ͼ����Ϣ          "<<endl;
        cout<<"         ����������ѡ��   ��     "<<endl;
        cin>>num2;
        if(num2 == 1)
        {
            cin>>temp3>>temp4>>temp5>>num4;
            il.add(temp1,temp2,temp5,num4);
        }
        else if(num2 == 2)
        {
            cin>>temp3>>temp4>>temp5>>num4;
            il.change(temp1,temp2,temp5,num4);
        }
        else if(num2 == 3)
        {
            il.delete3();
        }
        else
        {
            il.display();
        }
    }
    return 0;
}

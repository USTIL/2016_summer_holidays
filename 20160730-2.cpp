#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Manager
{
public:
    string name;
    string id;
    string username;
    int password;
    int phonenum;
    int money;
    void add()
    {
        cout<<" ������������";
        cin>>name;
        cout<<" ���������֤���룺";
        cin>>id;
        cout<<" �������û�����";
        cin>>username;
        cout<<" ���������룺";
        cin>>password;
        cout<<" �������ֻ��ţ�";
        cin>>phonenum;
        ofstream f1("cpp.txt");
        f1<<"  ������"<<name<<endl;
        f1<<"  ���֤���룺"<<id<<endl;
        f1<<"  �û�����"<<username<<endl;
        f1<<"  ���룺"<<password<<endl;
        f1<<"  �ֻ����룺"<<phonenum<<endl;
        f1.close();
    }
    void save()
    {
        int money1;
        cout<<" ������Ҫ��Ľ�";
        cin>>money1;
        money+=money1;
        ofstream f1("cpp.txt");
        if(!f1)return;
        f1<<"  ������"<<name<<endl;
        f1<<"  ���֤���룺"<<id<<endl;
        f1<<"  �û�����"<<username<<endl;
        f1<<"  ���룺"<<password<<endl;
        f1<<"  ��"<<money<<endl;
        f1.close();
    }
    int take()
    {
        int money1;
        cout<<" ������Ҫȡ�Ľ�";
        cin>>money1;
        if(money1>money)
        {
            cout<<" ����!"<<endl;
            return take();
        }
        else
        {
            money-=money1;
        }
        ofstream f1("cpp.txt");
        f1<<"  ������"<<name<<" , "<<endl;
        f1<<"  ���֤���룺"<<id<<" , "<<endl;
        f1<<"  �û�����"<<username<<" , "<<endl;
        f1<<"  ���룺"<<password<<" , "<<endl;
        f1<<"  ��"<<money<<" �� "<<endl;
        f1.close();
    }
    void display()
    {
        cout<<" �����˺����Ϊ��"<<money<<" Ԫ "<<endl;
        ofstream f1("cpp.txt");
        f1<<" �����˺����Ϊ��"<<money<<endl;
        f1.close();
    }
    void print()
    {
        cout<<" ������"<<name<<endl;
        cout<<" ���֤���룺"<<id<<endl;
        cout<<" �˺ţ�"<<username<<endl;
        cout<<" ���룺"<<password<<endl;
        cout<<" ��"<<money<<endl;
        cout<<" �ֻ����룺"<<phonenum<<endl;
    }
    void change()
    {
        int password1;
        cout<<" �������޸ĺ�����룺";
        cin>>password1;
        password=password1;
        cout<<" �޸�����ɹ�! "<<endl;
        ofstream f1("cpp.txt");
        f1<<"  ������"<<name<<" , "<<endl;
        f1<<"  ���֤���룺"<<id<<" , "<<endl;
        f1<<"  �˺ţ�"<<username<<" , "<<endl;
        f1<<"  ���룺"<<password<<" , "<<endl;
        f1<<"  ��"<<money<<" , "<<endl;
        f1<<"  �ֻ����룺"<<phonenum<<" �� "<<endl;
        f1.close();
    }
    int out()
    {
         return 0;
    }
    void index()
    {
        int temp;
        cout<<" ��ӭʹ�����й���ϵͳ , ��ѡ��"<<endl;
        cout<<" 1.���� "<<endl;
        cout<<" 2.���� "<<endl;
        cin>>temp;
        switch(temp)
        {
            case 1:add();break;
            case 2:index1();break;
        }
    }
    void index1()
    {
        int temp;
        cout<<" 1.��� "<<endl;
        cout<<" 2.ȡ�� "<<endl;
        cout<<" 3.����ѯ "<<endl;
        cout<<" 4����Ϣ��ѯ "<<endl;
        cout<<" 5���޸����� "<<endl;
        cout<<" 6���˳� "<<endl;
        cout<<" �����������";
        cin>>temp;
        switch(temp)
        {
            case 1:save();break;
            case 2:take();break;
            case 3:display();;break;
            case 4:print();break;
            case 5:change();break;
            case 6:out();break;
        }
    }
};

int main()
{
    Manager one;
	one.index();
    return 0;
}

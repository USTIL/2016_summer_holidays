#include<iostream>
#include<string>

using namespace std;

class   Address
{
    string name,address,city,postnum;
public:
    Address(string name1 = "",string address1 = "",string city1 = "",string postnum1 = "")
    {
        name = name1;
        address = address1;
        city = city1;
        postnum = postnum1;
    }
    ~Address()
    {
    }
    void ChangeName()
    {
        string name2,address2,city2,postnum2;
        cout<<"�����޸ĺ����Ϣ��"<<endl;
        cout<<"������"<<endl;
        cin>>name2;
        name = name2;
        cout<<"��ַ��"<<endl;
        cin>>address2;
        address = address2;
        cout<<"���У�"<<endl;
        cin>>city2;
        city = city2;
        cout<<"�ʱࣺ"<<endl;
        cin>>postnum2;
        postnum = postnum2;
    }
    void Display()
    {
        cout<<name<<" "<<address<<" "<<city<<" "<<postnum<<endl;
    }
};

int main()
{
    Address one("jun","diqiu","shenyang","666666");
    one.ChangeName();
    one.Display();
    return 0;
}

#include<iostream>
#include<cmath>

using namespace std;

class product
{
public:    
    char* tag; //��Ʒ����
    double price; //����
    int quantity; //�������
    product(char *s = "",double price1 = 0,int quantity1 = 0):tag(s) , price(price1) , quantity(quantity1){}
    ~product()
    {
    }//��������
    bool buy(double shiji)
    {
        double fei;
        if(shiji>quantity)
            return false;
        else
        {
            quantity -= shiji;
            fei = shiji * price;
        }
    }//����ĳ����Ʒ����buy������false��ʾ�������������������¿�����������������
    void change(double x,double y)
    {
        price = x;
        quantity = y;
    }//������غ����������������ʾ���������
    void display()
    {
        cout<<" ��Ʒ���ƣ�"<<tag<<" "<<" ���ۣ�"<<price<<" "<<" ���������"<<quantity<<endl;
    }
};

int main()
{
    product one(" ƻ�� ",1.5,20);
    one.display();
    one.buy(30);
    one.display();
    one.buy(10);
    one.display();
    one.change(2.5,30);
    one.display();
    return 0;
}

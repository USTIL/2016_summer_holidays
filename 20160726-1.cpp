#include<iostream>
#include<cmath>

using namespace std;

class sanjiaoxing
{
    double a,b,c;
public:
    sanjiaoxing(double A = 0,double B = 0,double C = 0)
    {
        a = A;
        b = B;
        c = C;
    }
    ~sanjiaoxing()
    {
    }
    int san()
    {
        if(a+b>c&&b+c>a&&a+c>b)
            cout<<"�ܹ���������"<<endl;
        else
            cout<<"���ܹ���������"<<endl;
    }
    int zhijiao()
    {
        if(a*a+b*b==c*c||c*c+a*a==b*b||c*c+b*b==a*a)
            cout<<"�ܹ���ֱ��������"<<endl;
        else
            cout<<"���ܹ���ֱ��������"<<endl;
    }
    double area()
    {
        double p=(a+b+c)/2;
        cout<<sqrt(p*(p-c)*(p-b)*(p-a))<<endl;;
    }
};

int main()
{
    sanjiaoxing one(1,2,3),two(3,4,5);
    one.san();
    two.zhijiao();
    one.area();
    two.area();
    return 0;
}

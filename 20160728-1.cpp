#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class LongInt
{
public:
    int size;
    char* data;        //�����ַ������
    LongInt(){ size = 0; data = 0; }
    LongInt(char* s)
    {
        size = strlen(s);
        data = s;
    }   //���ַ����������������
    LongInt(long num)
    {
        int num1 , temp;
        num1 = num;
        temp = 0;
        while(num1/10)
        {
            temp++;
        }
        size = temp+1;
        while(num)
        {
            data[temp] = num % 10;
            temp--;
        }
    }    //����һ��ָ�����ȵĴ���������
    LongInt(LongInt& li)
    {
        size=li.size;
        for(int i=0;i<size;i++)
            data[i]=li.data[i];
    }  //�������캯��
    ~LongInt()
    {
    }       //��������
    LongInt read()
    {
        string temp;
        cin>>temp;
        size = temp.length();
        for(int i = 0;i<size;i++)
        {
            data[i] = temp[i];
        }
    }      //�Ӽ��̶��������
    void write()
    {
        cout<<data<<endl;
    }    //���������
    LongInt add(LongInt& li)
    {
        int len1 , len2 ,temp1 = 0,temp2 = 0,i,j,k;
        string s;
        len1 = strlen(data);
        len2 = strlen(li.data);
        for( j=len1-1,i=len2-1,k=0; i>=0&&j>=0 ; i--,j--)
        {
            s[k]=data[i]+li.data[j]-'0'+temp1;
            temp1 = 0;
            if(s[k]>=10)
            {
                temp1=1;
                s[k]-=10;
                k++;
            }
        }
        while(i>0)
        {
                s[k]+=data[i]+ temp1-'0';
                temp1=0;
                if(s[k]>=10)
                {
                    temp1=s[k]/10;
                    i++;
                }
                k++;
        }
        while(j>0)
        {
                s[k]+=li.data[j]+ temp1-'0';
                temp1=0;
                if(s[k]>=10)
                {
                    temp1=s[k]/10;
                    j++;
                }
                k++;
        }
        if(temp1!=0)
            data[temp2++] = temp1 - '0';
    } //���������
    LongInt& operator=(const LongInt& li);
};
LongInt& LongInt::operator=(const LongInt& li)
{
  if(this == &li)
    return *this;
  delete[] data;
  size = li.size;
  data = new char[size+1];
  strcpy(data, li.data);
}

int main()
{
    LongInt one;
    return 0;
}

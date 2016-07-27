#include<iostream>
#include<algorithm>

using namespace std;

const int SetCapacity = 100;
class set
{
public:
    int elements[SetCapacity]; //������
    int size; //Ԫ�ظ���
    set(int num = 0):size(num){} //���캯��
    set(const set& src):size(src.size){}//�������캯��
    bool Contains(int el)
    {
        for(int i=0;i<SetCapacity;i++)
        {
            if(elements[i]==el)
                return true;
        }
    } //�Ƿ����Ԫ��el
    void Add(int el)
    {
       elements[size++]==el;
    } //���Ԫ��el
    void Remove(int el)
    {
        for(int i=0;i<size;i++)
        {
            if(elements[i]==el)
            {
                for(int j=i;j>0;j--)
                    elements[j]==elements[j-1];
            }
        }

    } //ɾ��Ԫ��el
    void Assign(set& st)
    {
        size=st.size;
        for(int i=0;i<size;i++)
            elements[i]=st.elements[i];
    } //��st��ֵ����ǰ����
    bool EqualTo(set& st)
    {
        for(int i=0;i<size;i++)
        {
            if(elements[i]!=st.elements[i])
                return 0;
            else
                return 1;
        }
    } //�б𼯺�st�뵱ǰ�����Ƿ���ͬ��Ԫ����ͬ
    bool Empty()
    {
        return size;
    } //�����Ƿ�Ϊ��
    set Intersect(set& st)
    {
        for(int i=0;i<size;i++)
            for(int j=0;j<st.size;j++)
                if(elements[i]==st.elements[j])
                    cout<<elements[i]<<endl;
    } //�󼯺�st �뵱ǰ���ϵĽ���
    set Union(set& st)
    {
        size+=st.size;
        sort(elements,elements+size);
        for(int i=0;i<size-1;i++)
        {
            if(elements[i]==elements[i+1])
            {
                for(int j=i;i<size;i++)
                    elements[j]=elements[j+1];
            }
        }
    } //�󼯺�st �뵱ǰ���ϵĲ���
    void print()
    {
        for(int i=0;i<size;i++)
            cout<<elements[i]<<endl;
    } //��ʾ���ϵ�����Ԫ��
};

int main()
{
    set temp;
    temp.Add(6);
    temp.Remove(6);
    temp.print();
    return 0;
}

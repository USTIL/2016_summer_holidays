#include<iostream>

using namespace std;

class Queue
{
public:
    int* data; //������
    int front, rear; //��βλ��
    int capacity;//����������
    Queue (int size = 10):capacity(size){ data = new int[size];  front = rear = 0;} //���캯��
    ~Queue ()
    {
    } //��������
    bool empty () const
    {
        return front == rear;
    } //�����Ƿ�Ϊ��
    bool full() const
    {
        return rear == capacity;
    }    //�����Ƿ�����
    int size () const
    {
        if(!empty()&&!full())
        {
            return rear;
        }
    }//������Ԫ�صĸ���
    void push (int temp)
    {
        data[rear+1]=temp;
    }    //����һ��Ԫ��
    int pop ()
    {
        for(int i=rear;i>0;i--)
            data[i]=data[i-1];
    }    //����һ��Ԫ��
};//��2016��7��27ҵ 1.������һ�������Ĵ洢�ṹ����������ֻ�ܴ�һ�ˣ���Ϊβ�������룬ȡ��������ֻ�ܴ���һ�ˣ�ͷ����ȡ����������������ʵ��һ���Զ���Ķ�����:

int main()
{
    Queue quene(15);
    cout<<quene.size()<<endl;
    quene.push(6);
    quene.pop();
    return 0;
}

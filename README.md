#15级2016年暑假作业

2016年8月2日作业
--------
1.设计一个自己的字符串类（String）。要求：  
（1）各种串操作（子串操作、串复制、串连接），对字符串的界限进行检查和处理；  
（2）以复制方式实现串赋值，避免不同指针共享字符串的情况，提高数据的独立性；  
（3）使用合适的运算符定义字符串的操作（例如，使用==、>=、<等等）  
（4）可以定义一些高层次的操作，例如子串操作、模式匹配  
  
2.利用列表设计一个小型电话簿管理程序，要求具有加入联系人、删除联系人、显示电话簿内容和查询联系人电话、存盘等基本功能。
  
2016年8月1日作业
--------
1.设计职工信息表  
建立职工信息数据，包括职工编号、姓名、性别和年龄。  
要求如下：  
（1）根据职工信息表，建立只含有姓名和年龄的职工信息简表；  
（2）使用继承的方法构造2个类，使用相应的对象数组放置10个职工信息。  
（3）编写同名display()成员函数，用来输出数组的内容。  
（4）另外编制一个函数print()，用来根据实际对象输出他们的内容。  
  
2.求解有理数分式方程（做过）  
有理数就是两个整数的比率，通常表示为a/b。其中a称为分子，b成为分母。要求：  
（1）分母不能为0；  
（2）分子和分母有公约数，应对其进行简化，也就是约分；  
（3）对其进行四则运算；  
（4）有理数可以比较大小；  
（5）附加：重载<<和>>，能够把分数进行整体输入和输出。  

2016年7月31日作业
--------
1.设公司员工分为：雇员（Employee）、经理（Manager）、技术员（Technician）、销售员（Salesman）和销售经理（SalesManager），他们分别包括如下属性（其中的姓名长度不定）：   
Employee类：姓名、年龄、专业、固定工资   
Manager类：姓名、年龄、固定工资、专业、级别、补贴   
Technician类：姓名、年龄、固定工资、专业、工作时间、计时工资  
Salesman类：姓名、年龄、固定工资、专业、销售额、销售提成比率  
SalesManager类：姓名、年龄、固定工资、专业、补贴、销售额、销售提成比率  
  
类中包括的成员函数（要完成操作有）：  
（1）构造函数；  
（2）析构函数；  
（3）输入函数；  
（4）输出函数；  
（5）计算工资函数，计算工资方法如表2：  
  
工资计算方法  

| 人员类别    | 固定工资  | 补贴  | 计时工资                  | 销售提成                 |
| ----------- | --------  | ----  | ------------------------  | -----------------------  |
| Employee    | 1500      | 0     | 0                         | 0                        |
| Manager     | 8000      | 2000  | 0                         | 0                        |
| Technician  | 1000      | 0     | 100（或根据实际情况修改） | 0                        |
| Salesman    | 500       | 0     | 0                         | 5%（或根据实际情况修改） |
| SaleManager | 2000      | 1000  | 0                         | 2%（或根据实际情况修改） |
  
提示：找到类之间的共性，用继承或多继承实现。  

2.动物园管理程序设计。假设某动物园有20只笼子用于饲养宠物，包括猫和狗。动物园可以收容宠物，也可以被认领出去。猫和狗都有名字属性和"叫"的方法（方法内涵不同）。  
要求用一个数据项（如数组等）管理这20只笼子和其中的宠物，另外编制一个函数bark()，用来根据实际对象调用他们"叫"的方法。   
  
2016年7月30日作业
--------
1.编写一个学生成绩信息类，包含的数据由学号、姓名、程序设计课程设计成绩、计算机网络课程成绩、数据库课程成绩。实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）查询学生成绩函数；  
（2）修改学生成绩函数；  
（3）添加学生信息函数；   
（4）删除学生信息函数；   
  
提示：  
（1）学生的学号从1开始自动排序，由系统自动获取（用静态成员实现）；  
（2）对系统进行测试，测试方法是输入5名学生的成绩信息，显示三门课程总分从高到低的排名和每门成绩都大于85分的学生名单。    
  
2.银行账户管理系统  
设计一个银行账户管理程序，账户的信息有账号（唯一）、姓名、余额、身份证号码等。  
类中包括的成员函数（要完成操作有）：  
（1）用户进行开户函数；  
（2）用户进行销户函数；  
（3）用户进行存款函数；  
（4）用户进行取款函数；  
（5）用户进行转账函数；  
（6）用户进行查询函数。  
  
提示：  
（1）程序运行时，可以由用户选择任何操作；  
（2）开户即为创建一个新的账号对象，要求输入用户信息后自动获取账号；  
（3）销户即删除一个对象，用户销户后账号被收回，并且该账号可以继续分配给其他用户；  
（4）不允许用户透支（余额不能为负）；  
（5）根据账号和姓名可以进行用户信息查询；  
（6）可定义一个账号类存放账号信息以及执行相应的操作。  
  
2016年7月29日作业
--------
1.图书管理系统是对学生信息和图书信息进行管理，学生基本信息包括学号，姓名，院系，最大借阅图书数量属性，图书基本信息中包括图书号，书名，作者，出版社，图书数量属性，要求输入、输出、修改、查询、删除以上信息功能， 实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）添加学生信息函数；   
（2）修改学生信息函数；   
（3）删除学生信息函数；   
（4）查看学生信息函数；  
（5）查看学生自己借阅的数目信息函数；   
（6）添加图书信息函数；   
（7）修改图书信息函数；   
（8）删除图书信息函数；   
（9）查看图书信息函数。  
  
提示：  
（1）如果某个学生退学，就要清除他的信息；  
（2）查看学生的信息和查看图书的信息两个功能基本相似；  
（3）必须包括构造函数和析构函数；  
（4）学生和图书的编号从1开始自动排序，由系统自动获取（用静态成员实现）；  
  
2016年7月28日作业
--------
1.大整数计算程序设计：当一个整数超过了系统提供的整型数据的表示范围时，可以考虑用若干个整型数“拼接”而成，也可以采用字符串来存放。试根据如下梗概描述设计一个大整数类，并编写相应的方法。   
    
class LongInt   
{   
    int size;   
    char* data;        //采用字符串存放   
  public:   
    LongInt(){ size = 0; data = 0; }   
    LongInt(char* s);    //由字符串构造大整数对象   
    LongInt(long num);    //构造一个指定长度的大整数对象  
    LongInt(LongInt& li);  //拷贝构造函数   
    ~LongInt();        //析构函数   
    LongInt read();      //从键盘读入大整数   
    void write();      //输出大整数   
    LongInt add(LongInt& li);  //大整数求和   
    LongInt& operator=(const LongInt& li);   
};   
  
LongInt& LongInt::operator=(const LongInt& li)   
{   
  if(this == &li)   
    return *this;   
  delete[] data;   
  size = li.size;   
  data = new char[size+1];   
  strcpy(data， li.data);   
}  
  
2.电子时钟类:  
设计编写一个电子时钟类ElectronicClock，包含年、月、日、时、分、秒等属性。电子时钟类由时间类和日期类组合而成，实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）构造函数；  
（2）析构函数；  
（3）对时间与日期进行校验的函数，当不正确时进行纠正与改错；  
（4）对年、月、日、时、分、秒等属性进行增加n个单位的函数。  
提示：  
（1）对年、月、日、时、分、秒等属性进行增加n个单位，要注意不要超出范围，进行进位;  
（2）电子时钟类有日期类与时间类组合而成。  
  
2016年7月27日作业  
--------
1.队列是一种连续的存储结构，存入数据只能从一端（称为尾部）进入，取出数据则只能从另一端（头部）取出。根据下述描述实现一个自定义的队列类:  
  
class Queue  
{   
  public:   
    Queue (int size = 10);      //构造函数   
    ~Queue ();      //析构函数   
    bool empty () const { return front == rear; }  //队列是否为空   
    bool full() const;        //队列是否已满   
    int size () const;        //队列中元素的个数   
    void push (int);      //插入一个元素   
    int pop ();      //弹出一个元素   
  private:   
    int* data;         //数据区   
    int front， rear;           //首尾位置   
    int capacity;               //数据区容量   
};  
  
2.集合是一类数据的聚合体，根据下述描述实现一个集合类的定义：   
  
const int SetCapacity = 100;   
class set   
{   
    int elements[SetCapacity];  //数据区   
    int size;          //元素个数   
  public:   
    set();             //构造函数   
    set(const set& src);     //拷贝构造函数   
    bool Contains(int el);    //是否包含元素el   
    bool Add(int el);      //添加元素el   
    bool Remove(int el);    //删除元素el   
    void Assign(set& st);    //将st赋值给当前集合   
    bool EqualTo(set& st);    //判别集合st与当前集合是否相同（元素相同  
    bool Empty();        //集合是否为空   
set Intersect(set& st);   //求集合st 与当前集合的交集  
    set Union(set& st);     //求集合st 与当前集合的并集   
    void print();        //显示集合的所有元素   
};   
  
2016年7月26日作业
--------
1.设计一个三角形处理类，包含三条边长为数据成员，实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）构造函数；  
（2）析构函数；  
（3）判别是否构成三角形函数；  
（4）是否构成直角三角形函数；  
（5）计算面积函数。  
  
2.设计一个地址类Address，其中包括某人姓名、所居住的街道地址、城市和邮编等属性，实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）构造函数；  
（2）析构函数；  
（3）ChangeName()成员函数，用于改变对象的姓名等属性。  
（4）Display()成员函数，用于显示姓名、街道地址、城市和邮编等属性。  
  
3.完善下面的产品类，该类用于管理产品的名称、单价和库存数量，能够根据用户输入的产品名称和购买数量计算相应的金额。在 main 函数中模拟几种商品（由键盘输入） ，并实现一个菜单式程序，演示用户任意购买各种商品的过程。  
  
class product  
{  
    char* tag;         //产品名称  
    double price;    //单价  
    int quantity;    //库存数量  
  public:  
    //构造函数  
    //析构函数  
    //购买某种商品函数buy，返回false表示库存数量不够，否则更新库存数量，并计算费用  
    //属性相关函数，如库存调整、显示库存数量等  
};  

暑假作业汇总
--------
1.C++课程实习  
2.分组编写实验室网页/APP等  
3.待续  

作业提交方式
--------
在自己github中创建仓库（2016_summer）或者fork此仓库。  
每日提交 日期-题号.cpp 文件。  
如 20160726-1.cpp  
  
提交举例：  
powershell/cmd进入当前仓库  
git add 20160726-1.cpp  
git commit -m "20160726"  
git push origin master  

用户名汇总
--------

| 姓名       | 用户名          |
| ---------- | --------------  |
| 李彦俊     | [yanjun0501](https://github.com/yanjun0501)      |
| 李想       | [lixiang521](https://github.com/lixiang521)      |
| 于雷       | [classmateyulei](https://github.com/classmateyulei)  |
| 梁琬琳     | [cherry19970526](https://github.com/cherry19970526)  |
| 李嘉兴     | [645309823](https://github.com/645309823)       |
| 王婷婷     | [wangtingting111](https://github.com/wangtingting111) |
| 龙禹含     | [929624414](https://github.com/929624414)       |
| 薛明奇     | [xuemingqi](https://github.com/xuemingqi)       |
| 金裴阳     | [youngjin1997](https://github.com/youngjin1997)    |
| ...        | ...             |
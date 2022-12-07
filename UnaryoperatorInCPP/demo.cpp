
#include <iostream>
using namespace std;
//一元运算符重载
// ++  --  !  &  ~  *  +  -
//一元运算符的操作数通常在左边
//但++ ，--运算符有前后之分
//为了解决这个问题，C++规定，在重载++，--时，允许写一个增加int形参的版本，编译器处理后置表达式时，再进行编写重载函数
// 如： 前置++  返回值 operator++()   ;  后置++ 返回值 operator++(int)
//注意：
//后置++,--比较特殊，不能返回引用，返回一个临时变量

class CGirl
{
private:
	string m_name;
	int m_ranking;

public :
	CGirl() { m_name = "西施", m_ranking = 5; }
	void show() { cout << "name :" << m_name << " ranking:" << m_ranking << endl; }

	CGirl& operator++()  //前置++
	{
		m_ranking++;
		return *this;
	}
	CGirl operator++(int)  //后置++
	{
		CGirl temp = *this;
		m_ranking++;
		return temp;
	}
	int operator & (int i)
	{
		m_ranking&=i;
		return m_ranking;
	}
};

int main()
{
	CGirl g1;
	g1.show();

	++g1;
	g1.show();
	CGirl g2=g1++;
	//110 
	//011
	int i=g2 & 2;
	cout << "i " << i << endl;
	g2.show();
	return 0;
}
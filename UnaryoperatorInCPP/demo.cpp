
#include <iostream>
using namespace std;
//һԪ���������
// ++  --  !  &  ~  *  +  -
//һԪ������Ĳ�����ͨ�������
//��++ ��--�������ǰ��֮��
//Ϊ�˽��������⣬C++�涨��������++��--ʱ������дһ������int�βεİ汾��������������ñ��ʽʱ���ٽ��б�д���غ���
// �磺 ǰ��++  ����ֵ operator++()   ;  ����++ ����ֵ operator++(int)
//ע�⣺
//����++,--�Ƚ����⣬���ܷ������ã�����һ����ʱ����

class CGirl
{
private:
	string m_name;
	int m_ranking;

public :
	CGirl() { m_name = "��ʩ", m_ranking = 5; }
	void show() { cout << "name :" << m_name << " ranking:" << m_ranking << endl; }

	CGirl& operator++()  //ǰ��++
	{
		m_ranking++;
		return *this;
	}
	CGirl operator++(int)  //����++
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
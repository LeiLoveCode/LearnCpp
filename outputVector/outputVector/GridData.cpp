#include<iostream>
#include<vector>
#include<cmath>
//��ָ���ĺ�����ԭ�㣬���ԭ����Χ�����񻯽��������������

//f=aX^b+mY^n;	X,YΪ����ֵ,fΪ���������a��b����

//dΪ��Ҫ����ķ�Χ���������㣩��deltΪ����ļ��

void GridData(double a, double b, double m, double n, double d, double delt)
{
	//������Ҫ���������ֵ
	double horizontal = 0, vertical = 0;
	//������ֵ
	double fresult;

	//������������¼���
	for (vertical = d;vertical >= -d; vertical = vertical - delt)
	{
		//����double���͵�����������Ϊresult,�������ÿһ�е����ݣ�
		std::vector<double> result;

		//������������Ҽ���
		for (horizontal = -d; horizontal <= d; horizontal = horizontal + delt)
		{
			//����ÿһ����Ľ��������������
			fresult = a*(pow(horizontal, b)) + m*(pow(vertical, n));
			result.push_back(fresult);
		}

		//ʹ�õ�����������еĽ��
		for (std::vector<double>::iterator i = result.begin(); i != result.end(); i++)
		{
			std::cout << *i << "  ";
		}
		//����
		std::cout << std::endl;
	}
}






#include<iostream>

#include<vector>

#include"vector.h"
#include"OutputVector.h"
#include"GridData.h"

void main()
{
	//���double���͵�vector
	//�½�double���͵�����������Output��5�����֣���Ϊ4
	std::vector<double> Output(5,4);
	//���
	OutputVector(Output);
	
	//vector�Ļ���ʹ��
	BasicVector();

	//������һ��f=x+y�ĺ���������20*20��Χ��ֵ�����1
	GridData(1, 1, 1, 1, 10, 1);
	

//���������д���
	system("pause");

}
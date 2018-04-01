#include<vector>
#include<iostream>

//push_back() ��Ա������������ĩβ����ֵ������б�Ҫ����չ�����Ĵ�С��
//size() ������ʾ�����Ĵ�С��
//begin() ��������һ��ָ��������ͷ�ĵ�������
//end() ��������һ��ָ������ĩβ�ĵ�������

void OutputVector()
{
	//����һ��double���͵�vector���������ֽ�ExOutput
	std::vector<double> ExOutput;

	//��ʼ��x,i����double���͵ı���
	double x = 0, i = 0;

	//��ʾ��ʼ��ExOutput�Ĵ�С
	std::cout << "ExOutput's size=" << ExOutput.size() << std::endl;

	//����0-5��ExOutput��
	for (x = 0; x <= 5; x++)
	{
		ExOutput.push_back(x);
	}

	// ��ʾExOutput��չ��Ĵ�С
	std::cout << "extended vector size = " << ExOutput.size() << std::endl;

	// ���������е� 5 ��ֵ
	for (i = 0; i <= 5; i++) {
		std::cout << "value of ExOutput [" << i << "] = " << ExOutput[i] << std::endl;
	}

	// ʹ�õ����� iterator ���

	for (std::vector<double>::iterator v = ExOutput.begin(); v != ExOutput.end(); v++)
	{
		std::cout << *v << "  ";

	}
}
#include<vector>
#include<iostream>


//���vector��ֵ���˴�double����vector


void OutputVector(std::vector<double>out)
{
	std::vector<double>ExOutput;
	//vector�ĸ�ֵ
	ExOutput.assign(out.begin(), out.end());
	// ʹ�õ����� iterator ���

	for (std::vector<double>::iterator v = ExOutput.begin(); v != ExOutput.end(); v++)
	{
		std::cout << *v << "  ";

	}
	//����
	std::cout << std::endl;
}
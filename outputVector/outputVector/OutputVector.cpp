#include<vector>
#include<iostream>


//输出vector的值，此处double类型vector


void OutputVector(std::vector<double>out)
{
	std::vector<double>ExOutput;
	//vector的赋值
	ExOutput.assign(out.begin(), out.end());
	// 使用迭代器 iterator 输出

	for (std::vector<double>::iterator v = ExOutput.begin(); v != ExOutput.end(); v++)
	{
		std::cout << *v << "  ";

	}
	//换行
	std::cout << std::endl;
}
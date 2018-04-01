#include<vector>
#include<iostream>

//push_back() 成员函数在向量的末尾插入值，如果有必要会扩展向量的大小。
//size() 函数显示向量的大小。
//begin() 函数返回一个指向向量开头的迭代器。
//end() 函数返回一个指向向量末尾的迭代器。

void OutputVector()
{
	//创建一个double类型的vector容器，名字叫ExOutput
	std::vector<double> ExOutput;

	//初始化x,i两个double类型的变量
	double x = 0, i = 0;

	//显示初始的ExOutput的大小
	std::cout << "ExOutput's size=" << ExOutput.size() << std::endl;

	//插入0-5到ExOutput中
	for (x = 0; x <= 5; x++)
	{
		ExOutput.push_back(x);
	}

	// 显示ExOutput扩展后的大小
	std::cout << "extended vector size = " << ExOutput.size() << std::endl;

	// 访问向量中的 5 个值
	for (i = 0; i <= 5; i++) {
		std::cout << "value of ExOutput [" << i << "] = " << ExOutput[i] << std::endl;
	}

	// 使用迭代器 iterator 输出

	for (std::vector<double>::iterator v = ExOutput.begin(); v != ExOutput.end(); v++)
	{
		std::cout << *v << "  ";

	}
}
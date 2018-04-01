#include<iostream>

#include<vector>

#include"vector.h"
#include"OutputVector.h"
#include"GridData.h"

void main()
{
	//输出double类型的vector
	//新建double类型的容器，名称Output，5个数字，都为4
	std::vector<double> Output(5,4);
	//输出
	OutputVector(Output);
	
	//vector的基本使用
	BasicVector();

	//定义了一个f=x+y的函数，计算20*20范围的值，间隔1
	GridData(1, 1, 1, 1, 10, 1);
	

//保持命令行窗口
	system("pause");

}
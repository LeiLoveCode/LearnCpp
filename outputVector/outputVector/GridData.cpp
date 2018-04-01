#include<iostream>
#include<vector>
#include<cmath>
//对指定的函数和原点，输出原点周围的网格化结果，正方形网格

//f=aX^b+mY^n;	X,Y为坐标值,f为函数结果，a，b常数

//d为需要计算的范围（距离计算点），delt为计算的间隔

void GridData(double a, double b, double m, double n, double d, double delt)
{
	//定义需要计算的坐标值
	double horizontal = 0, vertical = 0;
	//定义结果值
	double fresult;

	//纵坐标从上往下计算
	for (vertical = d;vertical >= -d; vertical = vertical - delt)
	{
		//定义double类型的容器，名称为result,用于输出每一行的数据；
		std::vector<double> result;

		//横坐标从左往右计算
		for (horizontal = -d; horizontal <= d; horizontal = horizontal + delt)
		{
			//计算每一个点的结果，插入容器中
			fresult = a*(pow(horizontal, b)) + m*(pow(vertical, n));
			result.push_back(fresult);
		}

		//使用迭代器输出该行的结果
		for (std::vector<double>::iterator i = result.begin(); i != result.end(); i++)
		{
			std::cout << *i << "  ";
		}
		//换行
		std::cout << std::endl;
	}
}






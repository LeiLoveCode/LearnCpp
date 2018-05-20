#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>

double FileInFeat(std::string Path) {

	//打开"path"下文件
	std::ifstream ContentIn(Path);

	if (!ContentIn.is_open())
	{
		//如果文件打开失败
		std::cout << "error open txt:" << Path << std::endl;
		//返回0
		return 0;

	}

	//定义一个string类型变量用于存储读取的行
	std::string temp;
	//定义一个double类型变量用于存储没行按照空格分开的double数据
	double temp_one;
	//储存每行的数据
	std::vector<double> line;
	//储存所有数据
	std::vector<std::vector<double>> line_all;

	//如果行不为空，循环读取
	while (std::getline(ContentIn, temp))
	{

		//定义一个char类型的变量为每行的第一个字符
		char IsNote = temp[0];
		//如果该字符为#，跳过该行
		if (IsNote == '#')
		{
			continue;

		}

		//使用串流实现对string的输入
		std::stringstream stringin(temp);
		//清空line的内容准备输入
		line.clear();

		//循环输入每行中的每个数值
		while (stringin >> temp_one)
		{
			//将数值添加到line中
			line.push_back(temp_one);
		}
		//将line添加到line_all中
		line_all.push_back(line);
	}


	//数据读取完毕，关闭文件
	ContentIn.close();


	//输出line_all

	for (std::vector<std::vector<double>>::iterator i = line_all.begin();
		i != line_all.end();
		i++)
	{
		for (unsigned int j=0;//在vector中的size()项目中为unsigned int类型，定义为int类型会出现警告
			j <(*i).size();
			j++)
		{
			double temp_j = (*i)[j];
			//输出line的元素
			std::cout << temp_j << ",";
		}
		//换行
		std::cout << std::endl;
	}


	//返回1
	return 1;

}
#include<iostream>
#include<fstream>
#include<string>


double txtin(std::string path)
{
	//打开"path"下文件
	std::ifstream ContentIn(path);
	if (!ContentIn.is_open())
	{
		//如果文件打开失败
		std::cout << "error open txt:" << path << std::endl;
		//返回0
		return 0;

	}

	//定义一个string类型变量用于存储读取的行
	std::string temp;

	//如果行不为空，循环读取
	while (std::getline(ContentIn,temp))
	{
		//定义一个char类型的变量为每行的第一个字符
		char IsNote = temp[0];
		//如果该字符为#，跳过该行
		if (IsNote == '#')
		{
			continue;

		}

		//输出该行数据
		std::cout << temp << std::endl;

	}

	//数据读取完毕，关闭文件
	ContentIn.close();

	//返回1
	return 1;

}





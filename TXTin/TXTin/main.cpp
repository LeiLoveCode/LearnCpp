#include"txtin.h"
#include"FileInFeat.h"

#include<iostream>



void main()
{

	std::string testPath = "in\\test.txt";
	//txtin函数，按行读取文本文件，并按行输出
	txtin(testPath);
	
	//按行读取文本文件，按空格分割每行数据，储存到vector<vector<double>>中
	FileInFeat(testPath);


	system("pause");



}
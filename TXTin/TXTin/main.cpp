#include"txtin.h"
#include"FileInFeat.h"

#include<iostream>



void main()
{

	std::string testPath = "in\\test.txt";
	//txtin���������ж�ȡ�ı��ļ������������
	txtin(testPath);
	
	//���ж�ȡ�ı��ļ������ո�ָ�ÿ�����ݣ����浽vector<vector<double>>��
	FileInFeat(testPath);


	system("pause");



}
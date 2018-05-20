#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>

double FileInFeat(std::string Path) {

	//��"path"���ļ�
	std::ifstream ContentIn(Path);

	if (!ContentIn.is_open())
	{
		//����ļ���ʧ��
		std::cout << "error open txt:" << Path << std::endl;
		//����0
		return 0;

	}

	//����һ��string���ͱ������ڴ洢��ȡ����
	std::string temp;
	//����һ��double���ͱ������ڴ洢û�а��տո�ֿ���double����
	double temp_one;
	//����ÿ�е�����
	std::vector<double> line;
	//������������
	std::vector<std::vector<double>> line_all;

	//����в�Ϊ�գ�ѭ����ȡ
	while (std::getline(ContentIn, temp))
	{

		//����һ��char���͵ı���Ϊÿ�еĵ�һ���ַ�
		char IsNote = temp[0];
		//������ַ�Ϊ#����������
		if (IsNote == '#')
		{
			continue;

		}

		//ʹ�ô���ʵ�ֶ�string������
		std::stringstream stringin(temp);
		//���line������׼������
		line.clear();

		//ѭ������ÿ���е�ÿ����ֵ
		while (stringin >> temp_one)
		{
			//����ֵ��ӵ�line��
			line.push_back(temp_one);
		}
		//��line��ӵ�line_all��
		line_all.push_back(line);
	}


	//���ݶ�ȡ��ϣ��ر��ļ�
	ContentIn.close();


	//���line_all

	for (std::vector<std::vector<double>>::iterator i = line_all.begin();
		i != line_all.end();
		i++)
	{
		for (unsigned int j=0;//��vector�е�size()��Ŀ��Ϊunsigned int���ͣ�����Ϊint���ͻ���־���
			j <(*i).size();
			j++)
		{
			double temp_j = (*i)[j];
			//���line��Ԫ��
			std::cout << temp_j << ",";
		}
		//����
		std::cout << std::endl;
	}


	//����1
	return 1;

}
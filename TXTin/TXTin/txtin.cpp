#include<iostream>
#include<fstream>
#include<string>


double txtin(std::string path)
{
	//��"path"���ļ�
	std::ifstream ContentIn(path);
	if (!ContentIn.is_open())
	{
		//����ļ���ʧ��
		std::cout << "error open txt:" << path << std::endl;
		//����0
		return 0;

	}

	//����һ��string���ͱ������ڴ洢��ȡ����
	std::string temp;

	//����в�Ϊ�գ�ѭ����ȡ
	while (std::getline(ContentIn,temp))
	{
		//����һ��char���͵ı���Ϊÿ�еĵ�һ���ַ�
		char IsNote = temp[0];
		//������ַ�Ϊ#����������
		if (IsNote == '#')
		{
			continue;

		}

		//�����������
		std::cout << temp << std::endl;

	}

	//���ݶ�ȡ��ϣ��ر��ļ�
	ContentIn.close();

	//����1
	return 1;

}





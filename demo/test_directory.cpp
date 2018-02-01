#include <string>
#include <vector>
#include <iostream>
#include "directory.hpp"
#include "fbc_cv_funset.hpp"

// Blog: http://blog.csdn.net/fengbingchun/article/details/51474728

int test_directory_GetListFiles()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*.jpg"; //"*";
	bool addPath = false; //true;

	// ����ָ���ļ����µ������ļ���������ָ���ļ����ڵ��ļ���
	std::vector<std::string> filenames = dir.GetListFiles(path, exten, addPath);

	std::cout << "file names: " << std::endl;
	for (int i = 0; i < filenames.size(); i++)
		std::cout <<"    "<< filenames[i] << std::endl;

	return 0;
}

int test_directory_GetListFilesR()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*";
	bool addPath = true; //false

	// ����ָ���ļ����µ������ļ�������ָ���ļ����ڵ��ļ���
	std::vector<std::string> allfilenames = dir.GetListFilesR(path, exten, addPath);

	std::cout << "all file names: " << std::endl;
	for (int i = 0; i < allfilenames.size(); i++)
		std::cout <<"    "<< allfilenames[i] << std::endl;

	return 0;
}

int test_directory_GetListFolders()
{
	fbc::Directory dir;

	std::string path = "E:/GitCode/OpenCV_Test/test_images";
	std::string exten = "*d*"; //"*"
	bool addPath = false; //true

	// ����ָ���ļ����µ������ļ��У�������ָ���ļ����µ��ļ�
	std::vector<std::string> foldernames = dir.GetListFolders(path, exten, addPath);

	std::cout << "folder names: " << std::endl;
	for (int i = 0; i < foldernames.size(); i++)
		std::cout << "    "<< foldernames[i] << std::endl;

	return 0;
}


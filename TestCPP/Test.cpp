#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<map>
#include<assert.h>
#include<vector>
#include<fstream>
#include "Myclass.h"
using namespace std;

#include "../MyLib/stdafx.h"
#pragma comment(lib,"MyLib.lib")

int addmeme(int a)
{
	int rs = 0;
	if (a > 0)
	{
		int i = 0;
		while (i <= a)
		{
			rs += i;
			i++;
		}
	}
	else
	{
		rs = 0;
	}
	return rs;
}

int main()
{
	cout << "\r\n----------------------�����ⲿ��̬��--------------------------\r\n";
	int s = AddMe(100); //�����ⲿ��
	cout << s << endl;

	/* ������ĵ���
	cout << "\r\n----------------------������--------------------------\r\n";
	std::cout << "��Է�����/r/n" << std::endl;
	//const char* mychar;
	int r = addme(1000000);
	//cout << r;

	MyClass clss;
	cout << clss.AddMe(1000000) << endl;
	*/

	/*
	cout << "\r\n----------------------�������--------------------------\r\n";
	//�������������
	std::cout << "�������������֣�" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2<< " is " << v1 + v2 << std::endl;
	*/
	cerr << "iam a error";
	clog << "I am log";

	/*
	cout << "\r\n----------------------string--------------------------\r\n";
	//string
	string s;
	//s = towupper('c');
	//cout << towupper('c')<<"����"<< isupper('c');
	s = "abckdhd##Ds###Dsdfsd�й���";
	for (string::size_type index = 0; index != s.size(); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;
	*/

	/*
	//vector
	cout << "\r\n----------------------vectortest--------------------------\r\n";
	vector<string> text;    // empty vector 
	for (int i = 0;i < 3;i++)
	{
		string word;
		cin >> word;
			text.push_back(word);
		//while (cin >> word) {
		//	text.push_back(word);     // append word to text
	}
	

	for (vector<string>::size_type ix = 0; ix != text.size(); ++ix)
		cout << text[ix];
	cout << "\r\n----------------------������--------------------------\r\n";
	//vector<string>::iterator iter = text.begin();
	//������
	for (vector<string>::iterator iter = text.begin(); iter != text.end(); ++iter)
		cout << *iter;

		*/

	/*
	cout << "\r\n----------------------����ָ��--------------------------\r\n";
	const size_t array_size = 7;
	int ia[] = { 0, 1, 2, 3, 4, 5, 6 };
	int ia2[array_size]; // local array, elements uninitialized 
	for (int*p = ia;p<ia + 7;p++)
	{
		cout << *p << endl;
	}

	const char *cp = "some value\0";
	while (*cp) {
		// do something to *cp 
		cout << *cp;
		cp++;
	}
	cout << "i am *cp2" << endl;
	
	char str[7];
	strcpy_s(str, "hellof"); //����ַ���Ҫ�ǳ���7������\0����ᱨ��
	char *cp2 = str;
	while (*cp2) {
		// do something to *cp 
		cout << *cp2;
		cp2++;
	}
	//delete str;
	//delete [] cp2;// �ͷ���Դ
	*/

	/*
	
	cout << "\r\n----------------------�����--------------------------\r\n";
	int i = 939392939;
	//cout << ++i;  //++i �ȼ� i++��+
	string s = "abc";

	string strArr1[] = { "Trend", "Micro", "Soft" };

	cout << sizeof(i)<<endl;
	cout << sizeof(string) << endl;
	cout << sizeof(strArr1) << endl;
	*/

	/*for (int i = 0;i < 2000000000;i++)
	{
		int temp = i;
	}*/

	/*
	int j = 0;
	do
	{
		cout << j << endl;
		j++;
	} while (j <= 10);

	try{ 
		int m = 100;
		m = m / 0;
		cout << "OK" << endl;
	
	}
	catch (exception *ex) {
			cout << "Erro:"<<ex->what << endl;
	}

	string s;
	while (cin >> s)
	{
		assert(cin);
	}
	*/

	/*�ļ�����
	
	cout << "\r\n----------------------�ļ�����--------------------------\r\n";
	cout << "\r\n----------------------д�ļ�����--------------------------\r\n";

	ifstream fin("D:\\MyMFCAPP.exe", ios::_Nocreate | ios::binary);
	if (!fin) {
		cout << "File open error!\n";
		return 0;
	}
	ofstream fout("D:\\MyMFCAPP2.exe", ios::binary);
	char c[1024];
	while (!fin.eof())
	{
		fin.read(c, 1024);
		cout << c;
		fout.write(c, fin.gcount());
	}
	fin.close();
	fout.close();
	cout << "Copy over!\n";
	*/

	/*
	cout << "\r\n----------------------map--------------------------\r\n";
	map <string, int> m1;
	m1.insert(pair <string, int>("a", 10));
	m1.insert(pair <string, int>("s", 20));
	cout << m1["a"] << endl;
	*/

	int a;
	std::cin >> a;

	return 0;
}

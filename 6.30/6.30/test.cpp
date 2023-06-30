#include <iostream>
using namespace std;


//int main()
//{
//	string a = "hello world";
//
//	string b = a;
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	string c = b;
//
//	c = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	a = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	return 0;
//}

int main()
{
	string s("hello xiaotao");

	string s2 = s.substr(6, -1);
	cout << s2 << endl;
	string s3 = s.substr(5, -1);
	cout << s3 << endl;
	string s4 = s.substr(6, 7);
	cout << s4 << endl;
	//如果后面的数值是负数则从当前位置开始拷贝到字符结尾。
}
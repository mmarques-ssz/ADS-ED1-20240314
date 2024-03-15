#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string str1 = "A";
    string str2 = "B";
    string str3 = "A";
    
    cout << str1.compare(str2) << endl;
    cout << str1.compare(str3) << endl;
	cout << str2.compare(str3) << endl;    
    
    if (str1.compare(str2) == 0)
	{
		cout << "Iguais";
	}
	else
	{
		cout << "Diferentes";
	}
    
    cout << endl;
    return 0;
}
#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg;
	msg = "amanhã será sexta-feira!";
	cout << msg << endl;
	cout << msg[5] << endl;
	cout << msg.at(4) << endl;
    cout << msg.front() << endl;
	cout << msg.back() << endl;
	cout << msg.size() << endl;
	for(int i=0; i<msg.size(); ++i) {
		cout << msg[i] << endl;
	}
	
	return 0;
}
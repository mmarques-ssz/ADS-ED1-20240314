#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string msg = "amanhã será";
	cout << msg << endl;
	
	msg.append(" sexta-feira");
	cout << msg << endl;
	
	msg.pop_back();
	cout << msg << endl;
	
	msg.push_back('a');
	cout << msg << endl;
	
	msg.erase(0, 3);
	cout << msg << endl;
	
	msg.insert(3, ", dia 15,");
	cout << msg << endl;
	
	msg.replace(0, 3, "Amanhã");
	cout << msg << endl;
	
	// Preenchendo com zeros à esquerda
	string s = "10";
    s.insert(0,5-s.size(),'0');
    cout << s << endl;
	

	return 0;	
}
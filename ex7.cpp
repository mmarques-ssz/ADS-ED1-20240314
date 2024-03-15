#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ofstream arq("lista1.txt", ios::app);

    if (arq.is_open()) {

		arq << "bbbbb" << endl;
		arq << "ccccc" << endl;
		arq << "ddddd" << endl;
		
        arq.close();
    } else {
        cout << "Erro ao abrir o arquivo";
    }
	
	return 0;
}
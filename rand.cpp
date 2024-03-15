#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char** argv)
{
	int r;
	
	srand(time(0));
	for(int i=1; i<21; ++i)
	{	
   	   r = rand(); // 0..32767
	   cout << "Gerado o numero: " << r << " - " << r%52 << endl;
	}
	
	// intervalo: 50 e 80
	// r % (LS+1 - LI) + LI
	
	return 0;
}
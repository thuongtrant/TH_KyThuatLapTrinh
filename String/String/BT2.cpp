#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[] = "Ho, ten";
	char s2[] = " ";
	char* ptok = strtok(s1, s2);
	while (ptok != NULL)
	{
		cout << ptok << endl;
		ptok = strtok(NULL, s2);
	}

}
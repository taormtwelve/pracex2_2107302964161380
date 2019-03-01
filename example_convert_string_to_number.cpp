#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	string cppstr = "123.45";
		
	cout << 100*atoi(cppstr.c_str()) << "\n";
	cout << 100*atof(cppstr.c_str()) << "\n";

	return 0;
}


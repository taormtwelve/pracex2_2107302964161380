#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
		cout << line << "\n";
	}
	
	return 0;
}


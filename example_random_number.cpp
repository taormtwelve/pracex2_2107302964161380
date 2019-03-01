#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));	
	cout << rand()%5+1; //possible values are 1,2,3,4,5
}

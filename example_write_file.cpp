#include<string>
#include<fstream>

using namespace std;

int main(){
	string names[4] = {"Prayut","Sudarat","Abhisit","Thanathorn"};
	ofstream dest("out.txt");
	for(int i = 0; i < 4;i++){
		dest << names[i] << "\n";
	}
	dest.close();
	
	return 0;
}


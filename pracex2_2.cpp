#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	float score[21]={};
	ifstream source("score3.txt");
	string line;
	int i=0;
	while(getline(source,line)){
		score[i]=atof(line.c_str());
		i++;
	}
	sort(score,20);
	ofstream dest("rank.txt");
	for(int i=0;i<20;i++){

		if(score[i]==score[i-1] && i>0){
			int j=i;
			do{
				dest << score[j] << "=" << i  << endl; 
				j++;
			}while(score[j]==score[j-1]);
			i=j-1;
		}
		else dest << score[i] <<"="<<i+1 << endl;
	}


	return 0;
}


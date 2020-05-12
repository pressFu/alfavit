#include<iostream>
using namespace std;
void sort(int N,char String, char Words){
	for (int j=N-1;j>0;j--){
		for (int i=0;i<j;i++){
    		if (strcmp(&String[Words[i]], &String[Words[i + 1]]) > 0){
    		Temp = Words[i];
    		Words[i] = Words[i + 1];
	    	Words[i + 1] = Temp;
			}
		}
	}
}


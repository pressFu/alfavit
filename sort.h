//<<<<<<< HEAD
#include<iostream>
#include <string.h>
using namespace std;
//=======
//>>>>>>> master
void sort(int N,char *p, char *words){
	cout<<N;
	for (int j=N-1;j>0;j--){
		for (int i=0;i<j;i++){
    		if (strcmp(&p[words[i]], &p[words[i + 1]]) > 0){
    		int Temp = words[i];
    		words[i] = words[i + 1];
	    	words[i + 1] = Temp;
			}
		}
	}
}


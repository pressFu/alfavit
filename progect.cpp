#include<iostream>
#include<stdlib.h>
#include "input.h"
using namespace std;
const int n = 10;
main(){
	setlocale(LC_ALL,"Rus");
	int N,K;
	char *p = new char[N];
	char *words = new char[K];
	cout<<"¬ведите текс: ";
	cin>>N;
	int A[n];
	for(int i=0;i<n;i++){
		A[i] = i;
	}
	input(n,A);
	
	
	
	
	delete p;
	delete words;
	return 0;
}

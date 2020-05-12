#include<iostream>
#include<stdlib.h>
#include <string.h>
#include "input.h"
#include "rasp.h"
#include "sort.h"
using namespace std;

main(){
	setlocale(LC_ALL,"Rus");
	int N,K,n=0;
	char p[10000];
	char words[10000];
	cout<<"¬ведите текс: ";
	gets(p);
	cout<<"A"<<endl;
	rasp(n,p,words);
	cout<<"B"<<endl;
	sort(n,p,words);
	cout<<"C"<<endl;
	for (int i = 0; i < n; i ++)
	printf("%s\n", &p[words[i]]);
	
//	delete p;
//	delete words;
	return 0;
}

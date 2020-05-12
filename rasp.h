#include<iostream>
#include <string.h>
using namespace std;
void rasp(int n,char *p,char *words){
	int i=0;
	int flag;
	cout<<"A-1"<<endl;
	for(n, flag=1;p[i];i++){
		if ((p[i]==',')||(p[i]=='.')||(p[i]==':')){
			p[i]=' ';
			p[i]++;
		}
		cout<<"A-2"<<endl;
		if(p[i]==' '){
			p[i] = 0;
		    flag = 1;
		}
		else if (flag){
    		words[n++] = i;
    		flag = 0;
		}
	}
//	return ;
}

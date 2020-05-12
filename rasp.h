#include<iostream>
using namespace std;
void rasp(char *p,char *words){
	for(int n=0,i=0,flag=1;p[i];i++){
		if ((p[i]==',')||(p[i]=='.')||(p[i]==':')){
			p[i]=' ';
			p[i]++;
		}
		if(p[i]==' '){
			p[i] = 0;
		    flag = 1;
		}
		else if (flag){
    		words[n++] = i;
    		flag = 0;
		}
	}
}

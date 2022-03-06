#include<iostream>
#include"biblioteca.hpp"

using namespace std;

char divid(float a, float b); 
float division(float a, float b)
{	
	if(a > b){
		if(b == 0){
			cout<<"!Indefinido!";
		}
		return a/b;
	}
	else{
		if(a == 0){
			cout<<"!Indefinido!";
		}
		return b/a;
	}
}


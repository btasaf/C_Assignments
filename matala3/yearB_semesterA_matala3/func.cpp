#include<iostream>
#include <string>
#include<math.h>;
#include"func.h"
using namespace std;


template<class T>
void print_array(T arr)
{
    cout << "same" << endl;
}
template<typename T>
T asaf(T a,T b){
	if(a>b)return a;
	else return b;
}
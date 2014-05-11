#include<iostream>
#include <string>

using namespace std;

template<class T>
void print_array(T arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ,";
	}
	cout<<endl;
}
template<class T>
double average(T arr[],int n){
	double sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum/n;
}




void main(){
	
	char q;
	int n=4,arrint[4]={1 ,2,3,4};
	double arrdouble[4]={1.2,2.3,3.4,4.5};
	char arrchar[4]={'a','b','c','d'};
	print_array(arrint,n);
	print_array(arrdouble,n);
	print_array(arrchar,n);
	cout<<average(arrint,n)<<endl;
	cout<<average(arrdouble,n)<<endl;
	
	//poly<int> ::start();
	int a[] = {6,-5,1,8,4};  
	cin>>q;
}
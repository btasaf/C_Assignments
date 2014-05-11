#include<iostream>
#include<math.h>;
#include"MyString.h";
using namespace std;

MyString::MyString(const char* astr){
	int i;
	str=new char[strlen(astr)];
	for( i=0;i<strlen(astr);i++){
		str[i]=astr[i];
	}
	str[i]='\0';

}
MyString::MyString(const MyString &strObj){
	int i;
	str=new char[strlen(strObj.str)];
	for( i=0;i<strlen(strObj.str);i++){
		str[i]=strObj.str[i];
	}
	str[i]='\0';
}
MyString& MyString::operator=(const MyString &s){
	int i;
	str=new char[strlen(s.str)];

	for( i=0;i<strlen(s.str);i++){
		str[i]=s.str[i];
	}
	str[i]='\0';

	MyString newstr=str;
	return newstr;
}
void MyString:: print()const{
	for(int  i=0;i<strlen(str);i++){
		cout<<str[i];
	}
	cout<<endl;
}
MyString::~MyString(){
	delete[] str;
}
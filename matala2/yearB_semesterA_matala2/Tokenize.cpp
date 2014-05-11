#include <iostream>
#include <string>

using namespace std;
class Tokenize{
private :
	string* strarr;
	int arrsize,arrindex;
public:
	Tokenize(string str,string sep){
		arrindex=0;
		int fir=0,last=0,size=0,strindex=0,i=0;
		
		while(i<str.length()){
			
		while(i+1<str.length()&&sep.find(str[i])==string::npos){
			
			last++;
			i++;
		}

		while(i+1<str.length()&&sep.find(str[i])!=string::npos){
			i++;

		}
			if(i+1==str.length()){
						i++;
				}
			else{
				size++;
				last=fir=i;
				}
				
	}
			
		
		i=fir=last=0;
		arrsize=size+1;
		strarr=new string[size+1];
	while(i<str.length()){
			
		while(i+1<str.length()&&sep.find(str[i])==string::npos){
			
			last++;
			i++;
		}

		while(i+1<str.length()&&sep.find(str[i])!=string::npos){
			i++;

		}
			if(i+1==str.length()){
						i++;
				}
			else{
				strarr[strindex++]=str.substr(fir,last);
				
				
				fir=i;
				last=0;
				}
				
	}
			strarr[strindex++]=str.substr(fir,last);
				
			
		

		
	}
	Tokenize(string str){
		arrindex=0;
		string sep=" ";
	int fir=0,last=0,size=0,strindex=0,i=0;
	while(i<str.length()){
		while(i+1<str.length()&&sep.find(str[i])==string::npos){
			
			last++;
			i++;
		}
		while(i+1<str.length()&&sep.find(str[i])!=string::npos){
			i++;
		}
			if(i+1==str.length()){
						i++;
				}
			else{
				size++;
				last=fir=i;
				}
	}
		i=fir=last=0;
		arrsize=size+1;
		strarr=new string[size+1];
	while(i<str.length()){
		while(i+1<str.length()&&sep.find(str[i])==string::npos){
			last++;
			i++;
		}
		while(i+1<str.length()&&sep.find(str[i])!=string::npos){
			i++;
		}
			if(i+1==str.length()){
						i++;
				}
			else{
				strarr[strindex++]=str.substr(fir,last);
				fir=i;
				last=0;
				}
				
	}
			strarr[strindex++]=str.substr(fir,last);

		
	}
	string nextToken(){
		if(hasMoreTokens()){
		return strarr[arrindex++];
		}
		else
			return "";
	}
	bool hasMoreTokens() {
		if((arrsize-arrindex)==0)return false;
		else return true;
	}
	int countTokens() {
		return arrsize-arrindex;
	}

};
void main1(){
	char w;
	
	
	string line =  "this is: a test.split(/s)";
	Tokenize tok(line, ": .()");
	cout<<"toc: number of tokens: "<<tok.countTokens()<<endl;
	while(tok.hasMoreTokens())
	{
		cout<<tok.nextToken()<<endl;
	}
	Tokenize tok1(line);
	cout<<"tok1: number of tokens: "<<tok1.countTokens()<<endl;
	while(tok1.hasMoreTokens())
	{
		cout<<tok1.nextToken()<<endl;
	}

	cin>>w;
}
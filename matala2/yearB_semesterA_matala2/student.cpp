#include <iostream>
#include <string>
using namespace std;


struct course{
	string name;
	int id;
	
	course(int n=0){
		if(n==1){
				name="c";
				id=1;
			}
			if(n==2){
				name="c++";
				id=2;
			}
			if(n==3){
				name="Data_Structure";
				id=3;
			}
			if(n==4){
				name="Algorithms";
				id=4;
			}
			if(n==5){
				name="java";
				id=5;
			}
			if(n==0){
				name="";
				id=0;
			}
	}
	
} ;



class student{
public:
	string name,adress;
	long id;
	course *courses;

	student(){
		name="";
		adress="";
		id=0;
		courses=new course[3];

	}
	student(string name,string adress,int id){
		this->name=name;
		this->adress=adress;
		this->id=id;
		courses=new course[3];
	}
	string getname(){
		return name;
	}
	string setname(string newname){
		name=newname;
	}
	void setCourses(course *courses, size_t courses_len){
		int j=0;
		while(j<courses_len&&j<=3){
			this->courses[j]=courses[j];

		}
	}
	void removecourse(int out){
		for(int i=0;i<=3;i++){
			if(courses[i].id==out)courses[i].id=0;
		}
	}
	void setstudent(string name,string adress,int id){
		this->name=name;
		this->adress=adress;
		this->id=id;
	}
	void printstu(){
		cout<<"student name is:"<<this->name<<endl;
		cout<<"student adress is:"<<this->adress<<endl;
		cout<<"student id is:"<<this->id<<endl;
		cout<<this->name<<" courses is:"<<endl;

		for(int i=0;i<=3;i++){
			if(courses[i].id!=0){
				cout<<courses[i].name<<endl;
			}
		}

	}
};
void main2(){
	char w;
	int numofstu,id1;
	string name1,adress1;
	cout<<"enter numbers of student"<<endl;
	cin>>numofstu;
	student *stuarr=new student[numofstu];
	for(int i=0;i<numofstu;i++){
		cout<<"enter student "<<i+1<<" name "<<endl;
		cin>>name1;
		cout<<"enter student "<<i+1<<" adress "<<endl;
		cin>>adress1;
		cout<<"enter student "<<i+1<<" id "<<endl;
		cin>>id1;
		stuarr[i]=student(name1,adress1,id1);
		
	}

	
	int exit=0,Choice;
	while(exit==0){
			cout<<endl<<endl<<endl;
		cout<<"to add cours to a student enter 1 \nto print student and his courses enter 2\nto print all student enter 3\nto exit enter 4"<<endl;
		cin>>Choice;
		if(Choice==1){
			int stuid;
			int cour;
			int isin=0;
			cout<<"enter student id"<<endl;
			cin>>stuid;
			cout<<"enter 1 for c"<<endl;
			cout<<"enter 2 for c++"<<endl;
			cout<<"enter 3 for Data_Structure"<<endl;
			cout<<"enter 4 for Algorithms"<<endl;
			cout<<"enter 5 for java"<<endl;
			cin>>cour;
			for(int i=0;i<numofstu;i++){
				if(stuarr[i].id==stuid){
					for(int j=0;j<=3;j++){
						
						if(stuarr[i].courses[j].id==0&&isin==0){
							stuarr[i].courses[j]=course(cour);
							cout<<endl;
							isin++;
							cout<<stuarr[i].courses[j].name<<endl;
						}
						
					}
				}
			}
			if(isin==0){
				cout<<"no sach student"<<endl;
			}
		}
		if(Choice==2){
			int stuid;
			cout<<"enter student id"<<endl;
			cin>>stuid;
			for(int i=0;i<numofstu;i++){
				if(stuarr[i].id==stuid){
					stuarr[i].printstu();
				}
			}
		}
		if(Choice==3){
			for(int i=0;i<numofstu;i++){
					stuarr[i].printstu();
			}
		}
		if(Choice==4){
			cout<<"good bey \n enter any buten to exit now";
			exit++;
		}


	}

	cin>>w;
}
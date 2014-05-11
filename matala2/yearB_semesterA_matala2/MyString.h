class MyString
{
public:
	MyString(const char* aStr);
	MyString(const MyString &strObj);		// copy constructor
	MyString& operator=(const MyString &s);
	~MyString(); 			// destructor
	void print()const;
	private:
	char* str;
};

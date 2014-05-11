template<class T> class poly{
private:
	int deg;
	static int count;
	T* arr;
public:
	poly();
	poly(T* ,int );
	poly(const poly<T> &p);
	poly<T> operator+(const poly<T> &p);
	poly<T> operator-(const poly<T> &p);
	poly<T> operator*(int val);
	void printpoly();
	static void start(){count=0;};
	static void printCount(){cout<<count<<endl;};
	~poly();

};
template<class T> poly<T>::poly(){
this->degree=0;
arr= new T[1];
arr[0]=0;
count++;
}
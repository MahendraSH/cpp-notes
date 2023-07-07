#include <iostream>
using namespace std;

// Class Stack with default parameter
template<typename T, int N=10>
class Stack
{
public:
	Stack();
	~Stack();
	void Push(T data);
	T Pop();
private:
	T *Data;
	int count;
};

// Constructor
template<typename T, int N>
Stack<T,N>::Stack()
{
	Data = new T[N];
	count = 0;
}

// Destructor
template<typename T, int N>
Stack<T,N>::~Stack()
{
	delete [] Data;
}

// Method to push data
template<typename T, int N>
void Stack<T,N>::Push(T data)
{
	if (count < N)
	{
		Data[count++] = data;
	}
	else
	{
		cout<<"\n stack Overflow!!!"<<endl;
	}
}

// Methos to pop data
template<typename T, int N>
T Stack<T,N>::Pop()
{
	if (count > 0)
	{
		return Data[--count];
	}
	else
	{
		cout<<"\n stack is Empty"<<endl;
	}
}

int main() 
{
	Stack<int,5> stack;
	Stack<int> stack1;
	stack.Push(10);
	stack.Push(20);
	stack.Push(70);
	stack.Push(50);
	stack.Push(40);
	
	cout<<stack.Pop()<<endl;
	cout<<stack.Pop()<<endl;
	cout<<stack.Pop()<<endl;
	cout<<stack.Pop()<<endl;
	cout<<stack.Pop()<<endl;
	return 0;
}
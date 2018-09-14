package Stack_Array;

public class StackArray<T> implements Stack<T> {
	
	public final int CAPACITY=20;
	public int t=-1;
	public T[] data;
	public StackArray()
	{
		data=(T[]) new Object[CAPACITY];
	}
	public int size() {
		
		return t+1;
	}
	public boolean isEmpty() {
		if(t == -1)
		{
			return true;
		}
		
		else 
			return false;
	}
	public void push(T e) {
		if(t+1==CAPACITY)
		{
			System.out.println("Stack is full");
			return;
		}
		else
		{
			t++;
			data[t]=e;
		}
		
	}
	public T pop() 
	{	
		if(t==-1)
		{
			System.out.println("Stack Empty exception");
			return null;
		}
		else
		{
			T x=data[t];
			data[t]=null;
			t--;
			return x;
		}
	}
	public T top() 
	{	
		return data[t];
	}
	public void printStack() {
		int i;
		for(i=0;data[i]!=null;i++)
			System.out.print(data[i]+":");
		
	}
	
}

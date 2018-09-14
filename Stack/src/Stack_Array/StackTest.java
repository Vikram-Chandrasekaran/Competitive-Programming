package Stack_Array;

public class StackTest {
	public static void main(String[] args)
	{
		Stack<Integer> st = new StackArray<Integer>();
		Stack<Integer>	r=new StackArray<Integer>();
		
		st.push(10);
		st.push(20);
		st.push(30);
		st.push(40);
		
			for(int i=1;i<st.size();i++)
			{
				for(int j=0;j<st.size()-i;j++)
					r.push(st.pop());
				Integer x=st.pop();
				for(int j=0;j<st.size()-i;j++)
					st.push(r.pop());
				r.push(x);
				
			}
			r.push(st.pop());
			r.printStack();
		
		
	}

}
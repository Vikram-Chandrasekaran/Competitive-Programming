/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String s;
		int t,counter=0;
		Vector<Integer> obj=new Vector<Integer>();
		Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-- !=0)
        {
            int flag=0,i;
    		s = sc.next();
    		char c[] = s.toCharArray();
    		if(c.length<3)
    		{
    		    System.out.println("Dynamic");
    		}
    		else
    		{
        		Arrays.sort(c);
        		int count=1;
        		for(i=1;i<c.length-1;i++)
        		{
        		    if(c[i]==c[i-1])
        		        count++;
        		    else
        		    {
        		        obj.add(count);
        		        count=1;
        		    }
        		}
        		obj.add(count+1);
        		Collections.sort(obj);
        		ListIterator k = obj.listIterator();
        		for(i=2;i<obj.size();i++)
        		{
        		    if(obj.get(i)!=(obj.get(i-1)+obj.get(i-2)))
        		        {
        		            flag=1;
        		            break;
        		        }
        		}
        		if(flag==0)
        		     System.out.println("Dynamic");

        		else
        		{
        		    int x;
        		    Vector<Integer> obj1=new Vector<Integer>();
        		    flag=0;
        		    obj1.add(obj.get(1));
        		    obj1.add(obj.get(0));
        		    for(i=2;i<obj.size();i++)
        		        obj1.add(obj.get(i));
        		    for(i=2;i<obj.size();i++)
            		{
            		    if(obj1.get(i)!=(obj1.get(i-1)+obj1.get(i-2)))
            		        {
            		            flag=1;
            		            break;
            		        }
            		}
            		if(flag==0)
            		     System.out.println("Dynamic");

            		else
            		    System.out.println("Not");
        		}
        		    obj.clear();
    	    }
        }
	}
}

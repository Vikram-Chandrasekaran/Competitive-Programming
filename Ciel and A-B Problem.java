/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a,b,x;
		Scanner sc=new Scanner(System.in);
		a=sc.nextInt();
		b=sc.nextInt();
		x=a-b;
		if(x == 1)
		{
		    System.out.println("2");
		    return;
		}
		else
		{
		    if(x % 10 == 0)
		        System.out.println((x+1));
		    else
		        System.out.println((x-1));
		}

	}
}

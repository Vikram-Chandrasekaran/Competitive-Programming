import java.util.*;
public class MergeSort {
	static void Merge(int arr[],int left[],int right[])
	{
		int i=0,j=0,k=0;
		int l=left.length;
		int r=right.length;
		while(i!=l && j!=r)
		{
			if(left[i]<right[j])
			{
				arr[k++]=left[i];
				i++;
			}
			else
			{
				arr[k++]=right[j];
				j++;
			}
		}
		while(i!=l)
		{
			arr[k++]=left[i++];
		}
		while(j!=r)
		{
			arr[k++]=right[j++];
		}
	}
	static void  Sort(int arr[])
	{
		int n=arr.length;
		int mid=n/2;
		if(n<2)
			return;
		int left[]=new int[mid];
		int right[]=new int[n-mid];
		System.arraycopy(arr, 0, left, 0, mid);
		System.arraycopy(arr, mid, right,0 , n-mid);
		Sort(left);
		Sort(right);
		Merge(arr,left,right);
	}

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		Sort(a);
		for(int i=0;i<n;i++)
			System.out.println(a[i]);
	}

}

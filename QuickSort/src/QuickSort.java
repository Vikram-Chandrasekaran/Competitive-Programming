import java.util.*;
public class QuickSort {
	static void Sort(int[] arr,int l,int h)
	{
		int j;
		if(l<h)
		{
			j=partition(arr,l,h);
			Sort(arr,l,j-1);
			Sort(arr,j+1,h);
		}
	}
	static int partition(int[] arr,int l,int h)
	{
		int i=l,j=h;
		int temp;
		int pivot=arr[l];
		while(i<=j)
		{
			do
			{
				i++;
			}while(arr[i]<pivot);
			do
			{
				j--;
			}while(arr[j]>pivot);
			if(i<=j)
			{	
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i++;
				j--;
			}
		}
		temp=arr[l];
		arr[l]=arr[j];
		arr[j]=temp;
		return j;
	}
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i;
		int a[]=new int[n];
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		Sort(a,0,n-1);
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
	}
}

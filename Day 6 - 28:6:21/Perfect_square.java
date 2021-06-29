import java.io.*;
import java.util.*;
import java.math.*;
class Test {
	static int PerfectDivisors(int n)
	{
		int cnt = 0;
		for (int i = 1; i <= n; i++)
		{
		    if(n%i==0 && (Math.sqrt(i)-(int)Math.sqrt(i)==0)){
                cnt++;
            }
		}
		return cnt;
	}
	public static void main(String args[])
	{
	    Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
		System.out.println(PerfectDivisors(k));
	}
}
//{ Driver Code Starts
import java.util.Scanner;
import java.util.Stack;
class SortedStack{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			Stack<Integer> s=new Stack<>();
			int n=sc.nextInt();
			while(n-->0)
			s.push(sc.nextInt());
			GfG g=new GfG();
			Stack<Integer> a=g.sort(s);
			while(!a.empty()){
				System.out.print(a.peek()+" ");
				a.pop();
			}
			System.out.println();
		}
	}
}
// } Driver Code Ends


/*Complete the function below*/
class GfG{
    public static void sort1(Stack<Integer> s,int a)
    {
        if(s.empty())
        {
            s.push(a);
            return;
        }
        if(s.peek()>a)
        {
            int x=s.peek();
            s.pop();
            sort1(s,a);
            s.push(x);
        }
        if(a>=s.peek()) s.push(a);
    }
	public Stack<Integer> sort(Stack<Integer> s)
	{
		//add code here.
		if(s.empty())
		{
		    return s;
		}
		int a=s.peek();
		s.pop();
		sort(s);
		sort1(s,a);
		return s;
		
	}
}
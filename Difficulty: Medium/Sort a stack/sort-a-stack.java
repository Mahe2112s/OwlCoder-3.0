//{ Driver Code Starts
import java.util.*;
import java.util.Scanner;
import java.util.Stack;

class SortedStack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Stack<Integer> s = new Stack<>();
            int n = sc.nextInt();
            while (n-- > 0) s.push(sc.nextInt());
            GfG g = new GfG();
            Stack<Integer> a = g.sort(s);
            while (!a.empty()) {
                System.out.print(a.peek() + " ");
                a.pop();
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


/*Complete the function below*/
class GfG {
    public static void Sort(Stack<Integer> S,int a)
    {
        if(S.empty())
        {
            S.push(a);
            return;
        }
        if(S.peek()>a)
        {
            int x=S.peek();
            S.pop();
            Sort(S,a);
            S.push(x);
        }
        if(a>=S.peek()) S.push(a);
    }
    public Stack<Integer> sort(Stack<Integer> s) {
        // add code here.
        if(s.empty()) return s;
        int x=s.peek();
        s.pop();
        sort(s);
        Sort(s,x);
        return s;
    }
}
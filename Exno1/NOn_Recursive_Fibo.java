public class NOn_Recursive_Fibo {
    public static void main(String[] args) {
        int n=10;
        int prev=1;
        int curr=1;
        System.out.println(prev);
        System.out.println(curr);
        for (int i=2;i<n;i++){
            int temp=curr;
            int val=curr+prev;
            System.out.println(val);
            curr=val;
            prev=temp;;


        }
    }
    
}

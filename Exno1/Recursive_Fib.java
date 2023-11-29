public class Recursive_Fib {
    public static void main(String[] args) {
        int n=10;
        for (int i=1;i<n;i++){
            System.out.println(fibo(i));
        }
    }
    static int  fibo(int n){
        if (n==1|| n==2){
            return 1;
        }else{
            return fibo(n-1)+fibo(n-2);
        }

    }
    
}

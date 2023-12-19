public class Fibonacci{
    public static void main(String[] args) {
        int n=10;
        for (int i=0;i<n;i++){
            System.out.println(fibo(i))
            ;

        }
        
    }
    private static int fibo(int n){
        if (n<=1){
            return 1;
        }else{
            return fibo(n-1)+fibo(n-2);

        }
    }
    
    
}

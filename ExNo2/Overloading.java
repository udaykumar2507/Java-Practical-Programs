public class Overloading {
    public static void main(String[] args) {
        MethodOverloading method1=new MethodOverloading();
        int sum1=method1.add(2,3);
        System.out.println(sum1);
        int sum2=method1.add(2,3,4);
        System.out.println(sum2);
        MethodOverloading method2=new MethodOverloading(5);
        
    }
    
}

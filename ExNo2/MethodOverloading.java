public class MethodOverloading{
    public int add(int a,int b){
        return a+b;
    }
    public int add(int a, int b,int c){
        return a+b+c;
    }
    MethodOverloading(){
        System.out.println("Hello WOrld");
    }
    public MethodOverloading(int a){
        System.out.println("This is a num "+a);
    }
}
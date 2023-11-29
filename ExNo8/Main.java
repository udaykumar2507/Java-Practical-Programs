package ExNo8;

public class Main {
    public static void main(String[] args) {
        Outer.StaticInnerClass staticinner=new Outer.StaticInnerClass();
        staticinner.display();
        Outer outerobj=new Outer();
        Outer.InnerClass inner=outerobj.new InnerClass();
        inner.display();
        outerobj.MethodwithInnerClass();
        outerobj.displayGreeting();
    }
    
}

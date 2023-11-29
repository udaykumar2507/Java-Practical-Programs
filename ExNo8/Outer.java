package ExNo8;

public class Outer {
    int OuterVariable=10;
    static class StaticInnerClass{
        public void display(){
            System.out.println("This is StaticIneerClass");
        }
    }
    class InnerClass{
        public void display(){
            System.out.println("This is Normal Inner Class ");
        }
    }
    void MethodwithInnerClass(){
        class methodInnerclass{
            void display(){
                System.out.println("This Class is Inside Method ");
            }
        }
        methodInnerclass method=new methodInnerclass();
        method.display();
    }
    interface Greeting{
        void greet();
    } 
    void displayGreeting(){
        Greeting greeting=new Greeting() {
            public void greet(){
                System.out.println("This is Anonymous Class by Interface");
            }
        };
        greeting.greet();
    }
    
    
}

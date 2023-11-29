package ExNo5;

public class Main {
    public static void main(String[] args) {
        Circle circle=new Circle(50);
        Rectangle rectangle=new Rectangle(4, 5);
        circle.displayMessage();
        System.out.println(circle.calculatearea());
        rectangle.displayMessage();
        System.out.println(rectangle.calculatearea());

    }    
}
package ExNo6;

public class MAin {
    public static void main(String[] args) {
        Rectange1 rectangle=new Rectange1(4, 5);
        Circle1 circle=new Circle1(20);
        rectangle.draw();
        System.out.println(rectangle.area());
        circle.draw();
        System.out.println(circle.area());
    }   
}

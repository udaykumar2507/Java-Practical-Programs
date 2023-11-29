package ExNo5;

public class Circle extends Shape{
    private double radius;
    Circle(double radius){
        this.radius=radius;
    }
    public double calculatearea(){
        return 3.14*radius*radius;
    }
    
}

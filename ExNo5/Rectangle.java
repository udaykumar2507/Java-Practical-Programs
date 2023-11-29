package ExNo5;

public class Rectangle extends Shape {
    double  length;
    double breadth;
    Rectangle(double length,double breadth){
        this.length=length;
        this.breadth=breadth;
    }
    public double calculatearea(){
        return length*breadth;
    }

    
}

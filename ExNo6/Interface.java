package ExNo6;
interface Shape{
    void draw();

}
abstract public class Interface implements Shape {
    
    public void draw(){
        System.out.println("This is a shape");
    }
    abstract double area();
    
}

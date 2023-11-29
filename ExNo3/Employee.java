package ExNo3;

public class Employee {
    private String name;
    private int age;
    private String designation;
    private int salary;
    Employee(String name,int age,String designation,int salary){
        this.name=name;
        this.age=age;
        this.designation=designation;
        this.salary=salary;
    }
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
    public String getdesignation(){
        return designation;
    }
    public int getsalary(){
        return salary;
    }
    
}

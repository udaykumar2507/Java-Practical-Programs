package Exno9;

public class SalariedEmployee extends Employee{
    int salary;
    SalariedEmployee(String name,int EmployeeId,int salary){
        super(name, EmployeeId);
        this.salary=salary;
    }
    void displaydetails(){
        super.displaydetails();
        System.out.println("Salary is "+salary);
    }
    
}

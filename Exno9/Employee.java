package Exno9;

public class Employee {
    String name;
    int EmployeeId;

        public Employee(String name,int EmployeeId ){
            this.name=name;
            this.EmployeeId=EmployeeId;
        }
        void displaydetails(){
            System.out.println("Name is "+name);
            System.out.println("Employee Id is "+ EmployeeId);
        }
        void CalculateSalary(){

        }
    
}

package Exno9;

public class HourlyEmployee extends Employee{
    int workingHours;
    int payperHour;
    public HourlyEmployee(String name,int EmployeeId,int workingHours,int payperHour){
        super(name, EmployeeId);
        this.workingHours=workingHours;
        this.payperHour=payperHour;
    }
    void  CalculateSalary(){
        super.displaydetails();
        System.out.println(workingHours*payperHour);
    }
    
}

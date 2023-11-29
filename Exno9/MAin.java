package Exno9;

public class MAin {
    public static void main(String[] args) {
        HourlyEmployee emp1=new HourlyEmployee("Jagadish", 12, 3, 200);
        SalariedEmployee emp2=new SalariedEmployee("sushi", 13, 40000);
        emp1.CalculateSalary();
        emp2.displaydetails();
    }
    
}

package ExNo3;
import java.util.*; 

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the name:");
        String name=sc.nextLine();
         System.out.print("Enter the age:");
        int age=sc.nextInt();
        sc.nextLine();
         System.out.print("Enter the designation:");
        String designation=sc.nextLine();
         System.out.print("Enter the salary:");
        int salary=sc.nextInt();
        Employee emp1=new Employee(name, age, designation, salary);
        System.out.println(emp1.getName());
        System.out.println(emp1.getAge());
        System.out.println(emp1.getdesignation());
        System.out.println(emp1.getsalary());
        sc.close();
    }
    
}

package ExNo10;
import java.util.*;

public class TryCatch {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        try{
            System.out.println("Enter a number");
            int num=sc.nextInt();
            int result=100/num;
            System.out.println(result);
        }catch(ArithmeticException e){
            System.out.println("Arithmetic Exception");
        }catch(NumberFormatException e){
            System.out.println("Number not Found");
        }catch(Exception e){
            System.out.println("An Unexpected exception Occured");
        }finally{
            System.out.println("Executed Finally");
        }

    }
    
}

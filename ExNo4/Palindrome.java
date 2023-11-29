package ExNo4;

public class Palindrome {
    public static void main(String[] args) {
        String s="nooooom";
        if (ispalindrome(s)){
            System.out.println("its a Palindrome");
        }else{
            System.out.println("not a Palindrome");
        }
        
    }
    static boolean ispalindrome(String s){
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            if (s.charAt(start)!=(s.charAt(end))){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    
}

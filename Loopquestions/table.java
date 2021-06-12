package Loopquestions;
import java.util.Scanner;
public class table {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = in.nextInt();
        int i ;
        for(i=1;i<=100;i++){
            System.out.println(n+"x"+i+"="+(n*i));
        }
        


    }
    
}

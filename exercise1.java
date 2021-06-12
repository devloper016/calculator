package Loopquestions;
import java.util.Scanner;
public class exercise1 {
    public static void main(String[] args) {
        //average of three numbers
        Scanner in = new Scanner(System.in);
        int limit,count=0,number,sum=0,avg;
        System.out.print("Enter a total number of N: ");
        limit = in.nextInt();
        if(limit>count){
            while(limit>count){
                System.out.println("Enter a number: "+ (count+1) );
                number = in.nextInt();
                sum = sum + number ;
                count++;

            }
            avg = sum/limit ;
            System.out.println("Average of the numer is: " + avg);

        }
        else{
            System.out.print("You are IDIOT!");
        }
            }
            
        
        

    }
    

package javaPrograms;
import java.util.Scanner;
public class Palindrome {

  public static void main(String[] args) {
  
  
	Scanner sc =new Scanner(System.in);
	System.out.print("Enter a number :");
	int number=sc.nextInt();
	boolean isTrue=true;
	
	int a=number;
	int noOfDigits=0;
	while(a>0){
	    a /= 10;
	    noOfDigits++;
	}
	
	int n=noOfDigits,b=number;
	for(int i=1;i<=noOfDigits/2;i++){
	//  int n=noOfDigits-(i-1);
	  int nthDigit = (number/(int)Math.pow(10,n-1))%10;
      n--;
      
      int ithDigit=b%10;
      b /= 10;
      
     // System.out.println(nthDigit+" "+ithDigit);
      
     isTrue = nthDigit == ithDigit ? true : false ;
	}
	if(isTrue) System.out.println("\npalindrome");
	else System.out.println("\nnot a palindrome");
	sc.close();
}

}

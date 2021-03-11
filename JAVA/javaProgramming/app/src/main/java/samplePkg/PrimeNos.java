package samplePkg;
import java.util.Scanner;
public class PrimeNos{
 
  public static boolean prime(int x){
    
    boolean isPrime = true;
   for(int i=2; i<x; i++){
     if(x % i == 0){
         isPrime = false;
         break;
     }
   }
   if(x<1 || x == 2)
     isPrime = false;
   if(isPrime)
     return true;
   else
     return false;
     
  }

  public static void main(String[] args){
   
   Scanner sc = new Scanner(System.in);
   
   System.out.println("no. of prime no.'s :");
   int n = sc.nextInt();
   int j=0;
   for(int i=0; ;i++){
     if(prime(i)){
       System.out.print(i+" ");
       j++;
     }
     if(j == n) break;
   }
   
   
   
   } 
  }
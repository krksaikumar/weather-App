package javaPrograms;

public class StringReverseOwn {

  public static void main(String[] args) {

  
   String str1 = "    KRK   sai      kumar   ";
   String str2 = "";
  int j= 0;
   
   for(int i=str1.length()-1; i>=0; i=j){
     if(str1.charAt(i) != ' '){
       
       j = i;
       while(str1.charAt(j) != ' '){
         j--;
       }

       str2 += " "+ str1.substring(j+1,i+1);
     }else j = i-1;
   }
   System.out.println(str2.trim());
     
  }
}

package javaPrograms;

public class AnagramOfString2 {

  public static void main(String[] args) {

  String a = "aab_£#@";
  String b = "aba@#£_";
  boolean isAnagram = true;
  if(a.length() == b.length()){
    int al[] = new int[256];
  /*  int bl[] = new int[256];
     for another approach */
    
    for(char c : a.toCharArray()){
      int index = (int)c;
      al[index]++;
    }
    for(char c : b.toCharArray()){
      int index = (int)c;
      al[index]--;
    }
    for(int i=0; i<256; i++){
      if(al[i] != 0)
        isAnagram = false;
    }    
  }
  if(isAnagram)
    System.out.println("Anagram");
  else
	System.out.println("Not Anagram");

  }
}

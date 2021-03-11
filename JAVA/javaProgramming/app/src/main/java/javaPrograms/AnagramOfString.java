package javaPrograms;

public class AnagramOfString {

  public static void main(String[] args) {

  String a = "acb";
  String b = "abc";
  boolean isAnagram = false;
  boolean visited[] = new boolean[b.length()];
  if(a.length() == b.length()){
  
    for(int i=0; i<a.length(); i++){
      isAnagram = false;
      char c = a.charAt(i);
      for(int j=0; j<b.length(); j++){
        if(c == b.charAt(j)&& !visited[j]){
          isAnagram = true;
          visited[j] = true;
          break;
        }
      }
      if(!isAnagram)
        break;
    }
  }
  if(isAnagram)
    System.out.println("Anagram");
  else
	System.out.println("Not Anagram");
  
  }
}

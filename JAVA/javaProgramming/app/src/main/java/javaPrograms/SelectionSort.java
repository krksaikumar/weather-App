package javaPrograms;

public class SelectionSort {

  public static void main(String[] args) {

 int  a[]={2,3,4,5,1};
 int n=a.length;
 for(int i=0;i<n-1;i++){
    int minInd=i;
    for(int j=i;j<n-1;j++){
       if(a[j+1]<a[minInd]){
         minInd=j+1;
       }
    }
    int temp=a[i];
    a[i]=a[minInd];
    a[minInd]=temp;
 }
 for(int e : a)
 	System.out.print(e+" ");
 
 }
}

package javaPrograms;
import java.util.Scanner;
public class MatrixMultiplication {

  public static void main(String[] args) {
 Scanner sc = new Scanner(System.in);
  
  System.out.println("Enter rows,columns of matrix 1");
  int r1 = sc.nextInt();
  int c1 = sc.nextInt();
  
  System.out.println("Enter rows,columns of matrix 2");
  int r2 = sc.nextInt();
  int c2 = sc.nextInt();
if(c1 == r2){
  int m1[][] = new int[r1][c1];
  int m2[][] = new int[r2][c2];
  int m3[][] = new int[r1][c2];
     System.out.println("Enter matrix 1");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      m1[i][j] = sc.nextInt();
    }
  }
  System.out.println("Enter matrix 2");
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      m2[i][j] = sc.nextInt();
    }
  }
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      m3[i][j] = 0;
      for(int k=0;k<r2;k++){
        m3[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      System.out.print(m3[i][j]+" ");
    }
      System.out.println();
  }
  
  
}else{
  System.out.println("Enter valid rows,columns for mult plication");
}
sc.close();

  }

}

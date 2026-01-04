package array;

import java.util.Scanner;

public class foreach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] marks=new int[n];
        for(int i=0;i<n;i++){
            marks[i]=sc.nextInt();

        }
        for(int num:marks){
            System.out.println(num);
        }
    }
}
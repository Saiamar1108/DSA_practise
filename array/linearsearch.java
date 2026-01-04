package array;

import java.util.Scanner;

public class linearsearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] marks=new int[n];
        for(int i=0;i<n;i++){
            marks[i]=sc.nextInt();

        }
        int key=sc.nextInt();
        for(int i=0;i<n;i++){
            if(marks[i]==key){
                System.out.println(i);
                break;
            }
        }
    }
}
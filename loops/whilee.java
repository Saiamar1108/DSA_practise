package loops;

import java.util.Scanner;

public class whilee {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int number=Integer.MIN_VALUE;;
        int i=1;
        while(i<=n){
            int cn=sc.nextInt();
            if(cn>number){
                number=cn;
            }i++;


        }System.out.println(number);


}}

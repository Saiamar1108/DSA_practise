package loops;
import java.util.*;


public class largestofnnumbers {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int number=Integer.MIN_VALUE;;
        for(int i=1;i<=n;i++){
            int cn=sc.nextInt();
            if(cn>number){
                number=cn;;

            }



        }System.out.println(number);

    }

}


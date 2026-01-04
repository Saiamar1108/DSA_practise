import java.util.Scanner;
public class calculator {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int principle=sc.nextInt();
        int time=sc.nextInt();
        int rate=sc.nextInt();
        int si=(principle*time*rate)/100;
        System.out.println(si);;
    }


}

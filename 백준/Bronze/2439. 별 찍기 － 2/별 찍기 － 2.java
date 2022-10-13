import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();
        int a = 1;
        for(int i = 1; i <= cnt; i++) {
            for(int j = 0; j < cnt-a; j++) {
                System.out.print(" ");
            }
            for(int k = 0; k < a; k++) {
                System.out.print("*");
            }
            a++;
            System.out.println("");


        }
    }

}
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[9];
       for(int i = 0; i < 9; i++) {
           num[i] = sc.nextInt();
       }
        int max = 0;
        int cnt = 0;
        for(int j = 0; j < num.length; j++) {
            if(max < num[j]) {
                max = num[j];
                cnt = j+1;
            }
        }
       System.out.println(max);
       System.out.println(cnt);
       
    }


    }
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = 0;
        int num = sc.nextInt();
        int fin = num;
        int part = 0;
        while(true) {
            cnt++;
          
          part = num%10; //5 0
          num = num/10 + part; //  10 5
          if(num >= 10) {num %= 10;} // 0
          
          num += part*10; // 50 5
          
          if(fin == num) {
              break;
          }
          
            
        }
        System.out.println(cnt);
    }


    }

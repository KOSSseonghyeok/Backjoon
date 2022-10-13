import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       int cnt = sc.nextInt();
       int[] num = new int[cnt];
       for(int i = 0; i < cnt; i++) {
           num[i] = sc.nextInt();
       }
       int max = num[0];
       int min = num[0];
       for(int j = 1; j < num.length; j++) {
           if(max < num[j]) {
               max = num[j];
           }else if(min > num[j]) {
               min = num[j];
           }
       }
       System.out.println(min+" "+max);
       
    }


    }

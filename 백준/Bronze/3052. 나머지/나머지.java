import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] num = new int[10];
            int cnt = 10;
            for (int i = 0; i < 10; i++) {
                num[i] = sc.nextInt() % 42;
                for (int j = 0; j < 10; j++) {
                    if (num[i] == 43) {
                        break;
                    }
                    if (i != j && num[j] == num[i]) {
                        num[j] = 43;
                        break;
                    }

                }
            }

            for (int k = 0; k < 10; k++) {

                if (num[k] == 43) {
                    cnt--;

                } else if (num[k] != 43) {
                    continue;
                }

            }
            System.out.println(cnt);
        }

    }

}
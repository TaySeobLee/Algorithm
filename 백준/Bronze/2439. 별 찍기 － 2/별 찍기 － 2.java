import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for (int i = 0; i < N; i++)
        {
            String s = " ".repeat(N-i-1) + "*".repeat(i+1);
            System.out.println(s);
        }

    }
}
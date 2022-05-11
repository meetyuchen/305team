import java.util.Scanner;

public class VaultingHorse {

    public static void main(String[] args) {

        new VaultingHorse().sf();
    }

    int n = 0, m = 0;
    int[] a = new int[] { 1, 2, 1, 2 };
    int[] b = new int[] { 2, 1, -2, -1 };
    int t = 0;

    public void sf() {

        Scanner in = new Scanner(System.in);

        n = in.nextInt();
        m = in.nextInt();
        in.close();

        dfs(0, 0);
        System.out.println(t);
    }

    public void dfs(int x, int y) {
        if (x == m && y == 0) {
            t++;
            return;
        }
        for (int i = 0; i < 4; i++) {
            if (x + a[i] < 0 || y + b[i] < 0 || x + a[i] > m || y + b[i] > n) {
                continue;
            }
            dfs(x + a[i], y + b[i]);
        }
    }

}
import java.util.*;
class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String a[] = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.next();
        }
        int k = 1;
        for (int i = 0; i < n - 1; i++) {
            k = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[i].equals(a[j])) {
                    a[j] = a[i] + k;
                    k++;
                }
            }
        }
        for (k = 0; k < n; k++) {
            System.out.println(a[k]);
        }
    }
}
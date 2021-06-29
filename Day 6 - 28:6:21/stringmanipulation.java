import java.util.*;
import java.util.*;
class Test {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        char arr[] = new char[str.length()];
        for (int i = 0; i < arr.length; i++) {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' ||
                str.charAt(i) == 'i' || str.charAt(i) == 'o' ||
                str.charAt(i) == 'u') {
                arr[i] = 'V';
            } else {
                arr[i] = 'C';
            }
        }
        char k;
        k = arr[0];
        System.out.print(k);
        for (int i = 1; i < arr.length; i++) {
            if (k != arr[i]) {
                k = arr[i];
                System.out.print(k);
            }
        }
    }
}
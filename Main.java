//1
public class Main
{
	public static void main(String[] args) {
		String s = "AaBbCcDd";
		for (int i = 0; i < s.length(); i+=2){
		    System.out.print(s.charAt(i));
		}
		for (int i = 1; i < s.length(); i+=2){
		    System.out.print(s.charAt(i));
		}
	}
}
//2
import java.util.Arrays;
import java.util.Scanner;

public class SortCharacters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        char[] chars = input.toCharArray();
        Arrays.sort(chars);
        System.out.println(new String(chars));
        scanner.close();
    }
}
```

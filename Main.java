/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

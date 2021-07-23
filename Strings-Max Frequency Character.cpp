/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
*/
import java.util.*;
public class Main {
    public static void main(String args[]) {
        // Your Code Here
		Scanner sc=new Scanner(System.in);
		HashMap<Character,Integer> h=new HashMap<Character,Integer>();
		String str=sc.nextLine();
		for(int i=0;i<str.length();i++){
			int freq=h.get(str.charAt(i))==null?1:h.get(str.charAt(i))+1;
			h.put(str.charAt(i),freq);
		}
		int max=0;
		char result=str.charAt(0);
		for(Map.Entry<Character,Integer> m: h.entrySet()){
			if(max<m.getValue()){
				result=m.getKey();
				max=m.getValue();
			}
			
		}
		System.out.println(result);
    }
}


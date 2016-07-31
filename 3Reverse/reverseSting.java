public class Solution {
    public String reverseString(String s) {
        char[] newStr = new char[s.length()];
    	for (int i = s.length()-1; i >= 0 ; i--) {
			newStr[s.length()-1-i]=s.charAt(i);
		}
    	return new String(newStr);
    }
}

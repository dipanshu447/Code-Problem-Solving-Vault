class Solution {
    public boolean isPalindrome(String s) {
        String str = "";
        for(int i = 0; i < s.length(); i++){
            if((s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') || (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') || (s.charAt(i) >= '0' && s.charAt(i) <= '9')){
            str += s.charAt(i);
            }
        }

        String rev = "";
        for(int i = str.length()-1; i >= 0; i--){
            rev += str.charAt(i);
        }

        if(str.equalsIgnoreCase(rev)){
            return true;
        }
        return false;
    }
}
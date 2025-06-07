class Solution {
    int sumofSquares(int num){
        int sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }

    public boolean isHappy(int n) {
        int slow = n, fast = n;
        while(true){
            slow = sumofSquares(slow);
            fast = sumofSquares(sumofSquares(fast));
            if(fast == 1) return true;
            if(slow == fast) return false;
        }
    }
}
// efficient solution
class Solution {
    public int hammingWeight(int n) {
        int setBitCount = 0;
        while(n != 0){
            n &= (n-1);
            ++setBitCount;
        }
        return setBitCount;
    }
}

// this one is good and creative
class Solution {
    public int hammingWeight(int n) {
        int setBitCount = 0;
        while(n != 0){
            setBitCount += (n%2);
            n /= 2;
        }
        return setBitCount;
    }
}
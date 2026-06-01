class Solution {
    public boolean isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int xOriginal = x;
        long xReversed = 0;

        while (x > 0) {

            xReversed = xReversed * 10 + x % 10;
            x /= 10;

        }

        return xOriginal == xReversed;
        
    }
}
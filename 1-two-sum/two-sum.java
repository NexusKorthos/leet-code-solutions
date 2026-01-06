import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer, Integer> hash = new HashMap<>();

        int[] result = new int[2];

        for (int i = 0; i < nums.length; i++ ) {

            int currentNumber = nums[i];
            int secondNumber = target - currentNumber;
            
            if (hash.get(secondNumber) != null) {
                result[0] = hash.get(secondNumber);
                result[1] = i;
                return result;
            }

            hash.put(currentNumber, i);

        }

        return result;
        
    }
}
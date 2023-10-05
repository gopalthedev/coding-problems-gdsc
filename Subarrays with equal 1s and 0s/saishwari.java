public class SubarraysWithEqualOnesAndZeros {
    public static int countSubarrays(int[] nums) {
        int count = 0;
        int sum = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        
        // Initialize the sum to 0 with count 1 (for the empty subarray)
        map.put(0, 1);
        
        for (int num : nums) {
            // Calculate the running sum
            sum += num;
            
            // If the sum - k has been seen before, add its count to the result
            if (map.containsKey(sum - 0)) {
                count += map.get(sum - 0);
            }
            
            // Update the count for the current sum
            map.put(sum, map.getOrDefault(sum, 0) + 1);
        }
        
        return count;
    }

    public static void main(String[] args) {
        int[] nums = {0, 1, 0, 1, 0};
        int result = countSubarrays(nums);
        System.out.println("Count of subarrays with equal 1s and 0s: " + result);
    }
}

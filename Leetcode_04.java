
import java.util.Arrays;

class Leetcode_04 {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        int[] nums3 = new int[nums1.length + nums2.length];
        System.arraycopy(nums1,0,nums3,0,nums1.length);
        System.arraycopy(nums2,0,nums3,nums1.length,nums2.length);
        Arrays.sort(nums3);
        int len = nums3.length;
        return (len%2 == 1) ? nums3[len/2] : (nums3[len/2] + nums3[len/2-1])/2.0;
        
    }
    public static void main(String[] args) {
        int[] a1 = {1,2};
        int[] a2 = {3,4};
        double result = findMedianSortedArrays(a1, a2);
        System.out.println(result);
    }
    
}


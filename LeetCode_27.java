class LeetCode_27{
    public static int removeElement(int[] nums,int val){
        int j = 0,count = 0;
        for(int i = 0; i<nums.length; i++)
        {
            if(nums[i] != val)
            {
                nums[j++] = nums[i];
                count += 1;
            }
        }
        for(int i = 0; i<j; i++)
        {
            System.out.print(nums[i] + " ");
        }
        return count;
    }
    public static void main(String[] args) {
        int[] arr = {1,2,4,2,5,2,5};
        int value = 2;
        int result = removeElement(arr,value);
        System.out.println("\n"+result);

    }
}
class plus_one{

    public static void main(String[] args){
        int[] nums = {1,2,5,3,6,9};

        int n = nums.length;
        if(nums[n - 1] == 9)
        {
            nums[n-1] = 1;
            nums[n] = 1;
        }
        else {
            nums[n -1] += 1;
        }

        for(int i = 0; i<n; i++){
            System.out.print(nums[i]+ " ");
        }

    }
    
}
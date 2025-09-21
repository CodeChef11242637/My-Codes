class LeetCode_11{
    public static int maxWater(int[] arr , int n){
        int max = 0,key = arr.length,max1;
        for(int i = n-1; i>=(n/2); i--)
        {
            key = key-1;
            for(int j = 0; j<=i-1; j++)
            {
                if(arr[i]>arr[j])
                {
                    max1 = arr[j]*key;
                }
                else{
                    max1 = arr[i]*key;
                }
                if(max1>max)
                {
                    max = max1;
                }
                key--;
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int[] array = {1,8,6,2,5,4,8,3,7};
        int n = array.length;
        int result = maxWater(array,n);
        System.out.println(result);
    }
}
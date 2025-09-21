class Stock {
    public int BuyAndSell(int[] arr) {
        int miniPrice = Integer.MAX_VALUE;
        int maxpProfit = 0;
        for(int price : arr) {
            if(price<miniPrice) miniPrice = price;
            else maxpProfit = Math.max(maxpProfit, price - miniPrice);
        }
        return maxpProfit;
    } 

    public static void main(String[] args) {
        int[] arr = {7,1,4,3,2,5,6};
        Stock ob = new Stock();
        int result = ob.BuyAndSell(arr);
        System.out.println(result);
    }
}

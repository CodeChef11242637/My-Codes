

class CountAndSay {
    public String CountAndSay(int n) {
        String st = "1";
        if(n == 1) return st;
        for(int i = 2; i<=n; i++)
        {
            StringBuilder sb = new StringBuilder();
            int count = 1;
            char ele = st.charAt(0);
            for(int j = 1; j<st.length(); j++)
            {
                char curChar = st.charAt(j);
                if(curChar == ele) count++;
                else {
                    sb.append(count).append(ele);
                    ele = curChar;
                    count = 1;
                }
            }
            sb.append(count).append(ele);
            st = sb.toString();
        }
        return st;
        
    }
    public static void main(String[] args) {
        int n = 4;
        CountAndSay ob = new CountAndSay();
        String result = ob.CountAndSay(n);
        System.out.println(result);
    }
}
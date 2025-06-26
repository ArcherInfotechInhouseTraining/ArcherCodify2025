class mostOptimized {
    public static void main(String[] args) {
        int arr[]={-2,-9,-6,-2,-1,-7};
        int maxSum= Integer.MIN_VALUE;
        int curSum=0;

        for(int i=0; i<6; i++)
        {
            curSum+=arr[i];
            maxSum=Math.max(curSum, maxSum);
            if(curSum<0)
            {
                curSum=0;
            }
        }

        System.out.print("Max Subarray:"+maxSum);
    }
}

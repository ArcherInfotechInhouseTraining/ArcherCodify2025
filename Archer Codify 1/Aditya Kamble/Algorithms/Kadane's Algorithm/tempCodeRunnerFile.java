import java.util.*;
class bruteforce{
    public static void main(String[] args) {
        int arr[]={2,-2,4,5,6};
        
        int MaxSum = Integer.MIN_VALUE;
        for(int start=0; start<5; start++)
        {
            int curSum=0;
            for(int end=start; end<5; end++)
            {
                curSum=curSum+arr[end];
                MaxSum= Math.max(curSum,MaxSum);
                System.out.print(" "+arr[end]);
            }
        }

        System.out.println("Max Subarray is: "+MaxSum);
    }


}

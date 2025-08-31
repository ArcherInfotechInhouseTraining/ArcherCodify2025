import java.util.*;
class bruteforce{
    public static void main(String[] args) {
        int arr[]={-3,-4,-5,-4,-1,-7,-8};
        
        int MaxSum = Integer.MIN_VALUE;
        for(int start=0; start<7; start++)
        {
            int curSum=0;
            for(int end=start; end<7; end++)
            {
                curSum=curSum+arr[end]; 
                MaxSum= Math.max(curSum,MaxSum); 
                if(curSum<0)
                {
                    curSum=0;
                }
            }
            System.out.print(" "+arr[start]);
        }

        System.out.println("Max Subarray is: "+MaxSum);
    }


}

//To Print All The Subarrays


class SubarraysApproch{
    public static void main(String[] args) {

        int arr[]= {1,2,3,4,5};
        for(int start=0; start<5; start++)
        {
            for(int end=start; end<5; end++){
                    for(int i=start; i<=end; i++)
                    {
                        System.out.print(arr[i]);
                    }
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
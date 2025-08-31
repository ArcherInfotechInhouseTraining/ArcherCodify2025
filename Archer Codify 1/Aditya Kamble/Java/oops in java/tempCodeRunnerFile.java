class BirdsWatcher
{
    private final int[] birdsPerDay; 

    public BirdsWatcher(int[] birdsPerDay)
    {
        this.birdsPerDay=birdsPerDay.clone();
    }

    public int[] getLastWeek()
    {
        int[] birdsPerDay={0,2,5,3,7,8,4};
        return birdsPerDay;
    }

    public int getToday()
    {
        return birdsPerDay[birdsPerDay.length-1];
    }

    public int incrementTodaysCount()
    {
        return birdsPerDay[birdsPerDay.length-1]++;
    }

    public boolean hasDayWithoutBirds()
    {
        for(int i=0; i<birdsPerDay.length; i++)
        {
            if(birdsPerDay[i]==0)
            {
                return true;
            }
        }
        return false;
    }

    public int getCountForFirstDays(int noOfDays)
    {
        int cnt=0;
        int limit=Math.min(noOfDays, birdsPerDay.length);
        for(int i=0; i<limit; i++)
        {
            cnt=cnt+noOfDays;
        }
        
        return cnt;
    }

    public int getBusyDays()
    {
        int busyDays=0;
        for(int birds: birdsPerDay)
        {
            if(birds>=5)
            {
                busyDays++;
            }
        }
        return busyDays;
    }

    public static void main(String[] args) {
        int [] intialarray={2,3,5,8,9};
        BirdsWatcher b=new BirdsWatcher(intialarray);
        System.out.println(java.util.Arrays.toString(b.getLastWeek())); 
        System.out.println(b.getToday());
        System.out.println(b.incrementTodaysCount());
        System.out.println(b.hasDayWithoutBirds());
        System.out.println(b.getCountForFirstDays(3));
        System.out.println(b.getBusyDays());
    }

}
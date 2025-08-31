class DemoContinue
{
	public static void main(String []args)
	{
		int i,j;

		for(i=0;i<10;i++)
		{
			System.out.print("-");
			for(j=0;j<10;j++)
			{
				if(j>i)
				{
					continue;
				}
				System.out.print("*");
			}
			System.out.println();
		}
	}
}

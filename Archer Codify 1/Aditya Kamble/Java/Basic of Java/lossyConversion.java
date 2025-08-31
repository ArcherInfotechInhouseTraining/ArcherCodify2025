class lossyConversion{
  public static void main(String []args)
	{
		int x=10; // 4 byte
		//byte b=(int)x;  // 2 to 4 byte
		short s=(byte)x; // 2 to 1
		long l=25;
		System.out.println("\n x="+x+"\t s="+s+"\t l="+l);

		float f1=45.23F;
		double d1=f1;
		System.out.println("\n f1="+f1+"\t d1="+d1);

		float f2=(float)d1;
		System.out.println("\n f2="+f2);
	}
}
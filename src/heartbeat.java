
public class heartbeat {
	public static void main(String[] args)
	{
		double time = 0;
		while(time < 10)
		{
			try
			{
				Thread.sleep(1000);
				time += 1.0;
				System.out.println("Time Elapsed = "+ time);
			}
			catch(InterruptedException e)
			{
				e.printStackTrace();
			}
		}
	}
}

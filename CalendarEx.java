//-----------Calendar-----------//
import java.util.*;

class CalendarEx
{
	public static void main(String args[])
	{
		Calendar now = Calendar.getInstance();
		System.out.println("Current Date:- " 
				+ now.get(Calendar.DATE) + "/"
				+ now.get(Calendar.MONTH)+ "/"
				+ now.get(Calendar.YEAR));
				
		System.out.println("Week of Year:- "
				+ now.get(Calendar.WEEK_OF_YEAR) + "\nWeek of the Month "
				+ now.get(Calendar.WEEK_OF_MONTH));
		
		TimeZone t = now.getTimeZone();
		System.out.println(t.getDisplayName());
		
		System.out.println("Time in 12hr Format " 
				+ now.get(Calendar.HOUR)+ ":"
				+ now.get(Calendar.MINUTE) + ":"
				+ now.get(Calendar.SECOND) +"\nTime in 24hr Format " 
				+ now.get(Calendar.HOUR_OF_DAY)+ ":"
				+ now.get(Calendar.MINUTE) + ":"
				+ now.get(Calendar.SECOND));
				
		System.out.println(now.getTimeInMillis());
	}
}
import java.util.Calendar;

class TempCalendar{
	public static void main(String ... args){
		Calendar now = Calendar.getInstance();
		System.out.println(now.get(Calendar.DATE)
			+ "/" + (now.get(Calendar.MONTH)+1)
			+ "/" + now.get(Calendar.YEAR));
	
	//Show date after 20 days//
	now.add(Calendar.DATE, 30);
	System.out.println( now.get(Calendar.DATE)
			+ "/" + (now.get(Calendar.MONTH)+1)
			+ "/" + now.get(Calendar.YEAR));
	//------------week-----------//
	System.out.println(now.get(Calendar.WEEK_OF_YEAR));
	System.out.println(now.get(Calendar.WEEK_OF_MONTH));
	now.add(Calendar.WEEK_OF_MONTH, 1);
	System.out.println( now.get(Calendar.DATE)
			+ "/" + (now.get(Calendar.MONTH)+1)
			+ "/" + now.get(Calendar.YEAR));
	now.add(Calendar.WEEK_OF_YEAR, 1);
	System.out.println( now.get(Calendar.DATE)
			+ "/" + (now.get(Calendar.MONTH)+1)
			+ "/" + now.get(Calendar.YEAR));
	now = Calendar.getInstance();
	System.out.println( now.get(Calendar.DATE)
			+ "/" + (now.get(Calendar.MONTH)+1)
			+ "/" + now.get(Calendar.YEAR));
	//------Time-----------------//
	System.out.println( now.get(Calendar.HOUR_OF_DAY)
			+ ":" + (now.get(Calendar.MINUTE))
			+ ":" + now.get(Calendar.SECOND));
	now.add(Calendar.HOUR_OF_DAY, 20);
	System.out.println( now.get(Calendar.HOUR_OF_DAY)
			+ ":" + (now.get(Calendar.MINUTE))
			+ ":" + now.get(Calendar.SECOND));
	now = Calendar.getInstance();
	String[] strDay = new String[7]
			{"Sunday", "Monday", "Tuesday","Wednesday",
			"Thursday","Friday","Saturday"};
	System.out.println("Today is "+ 
			strDay[now.get(Calendar.DAY_OF_WEEK) -1];
	
	}
}
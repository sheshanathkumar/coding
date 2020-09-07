package com.sk.dp;

import java.sql.Timestamp;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDateTime;
import java.time.ZoneId;
import java.time.temporal.TemporalField;
import java.util.Date;

public class DateDemo {

	public static void main(String[] args) throws ParseException {
		// TODO Auto-generated method stub
		
		Timestamp ts = new Timestamp(System.currentTimeMillis());
		
		Timestamp ts1 = new Timestamp(System.currentTimeMillis() + 1);
		
		
		
		LocalDateTime ldt = LocalDateTime.now();
		LocalDateTime midnight = ldt.plusDays(1).toLocalDate().atStartOfDay();
		
		long md = midnight.atZone(ZoneId.systemDefault()).toInstant().toEpochMilli();
		
		System.out.println(ts);
		
		System.out.println(new Timestamp(md));
		
		String t = "29-AUG-2020 02:31:08 AM";
		SimpleDateFormat format = new SimpleDateFormat("dd-MMM-yyyy HH:mm:ss a");
		Date d = format.parse(t);
		
		Timestamp tss = new Timestamp(d.getTime());
		System.out.println(tss);

	}

}

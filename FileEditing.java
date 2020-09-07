package com.sk.dp;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.HashSet;
import java.util.Random;
import java.util.Set;

public class FileEditing {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Random random = new Random();
		File f = new File("C:\\Users\\HOME\\Desktop\\eclipse-proj\\DynamicProblem\\src\\com\\sk\\dp\\sql.txt");

		BufferedReader bf = new BufferedReader(new FileReader(f));

		String s = bf.readLine();

		Set<String> sqlSet = new HashSet<String>();
		while ((s = bf.readLine()) != null) {
			int x = random.nextInt(900) + 900;
			s = s.replace("xyz", "" + x);
			s = s.replaceFirst("xxyyzz", "ABC3" + x);
			sqlSet.add(s);
		}
		File nf = new File("C:\\Users\\HOME\\Desktop\\eclipse-proj\\DynamicProblem\\src\\com\\sk\\dp\\resSql.txt");
		if (nf != null) {
			 FileWriter myWriter = new FileWriter("C:\\Users\\HOME\\Desktop\\eclipse-proj\\DynamicProblem\\src\\com\\sk\\dp\\resSql");
			 for (String sss : sqlSet) {
				 myWriter.write(sss);
				 myWriter.write("\n");
			 }
			 myWriter.close();
		}
		

	}

}

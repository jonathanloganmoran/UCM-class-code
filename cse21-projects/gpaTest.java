// tests gpa.java to make sure it runs properly

import static org.junit.Assert.*;
import org.junit.Test;

public class GPATest {
	@Test
	public void testcourseNumInputChecker() {
		int test1 = 3;
		int test2 = -1;
		int test3 = 12;
		int test4 = 20;
		int test5 = 99;
		assertEquals(true, GPA.courseNumInputChecker(test1));
		assertEquals(false, GPA.courseNumInputChecker(test2));
		assertEquals(true, GPA.courseNumInputChecker(test3));
		assertEquals(true, GPA.courseNumInputChecker(test4));
		assertEquals(false, GPA.courseNumInputChecker(test5));
		
	}
	@Test
	public void testgreaterThanTwelve() {
		double test1 = 12.0;
		double test2 = -99.9;
		double test3 = 11.999999;
		double test4 = 12.01;
		double test5 = 999.999;
		assertEquals(true, GPA.greaterThanTwelve(test1));
		assertEquals(false, GPA.greaterThanTwelve(test2));
		assertEquals(false, GPA.greaterThanTwelve(test3));
		assertEquals(true, GPA.greaterThanTwelve(test4));
		assertEquals(true, GPA.greaterThanTwelve(test5));
	}
	@Test
	public void testpointSum() {
		double [] points;
		double [] units;
		points = new double[5];
		units = new double[5];
		for (int i = 0; i < 5; i++) {
			points[i] = i*2;
			units[i] = i*3;
		}
		assertEquals(180, GPA.pointSum(points, units), 0.1);
		points[0] = 3.7;
		units[0] = 4.0;
		assertEquals(194.8, GPA.pointSum(points, units), 0.1);
		points[1] = 3.7;
		units[1] = 2.0;
		assertEquals(196.2, GPA.pointSum(points, units), 0.1);
		points[2] = 5.0;
		units[2] = 5.5;
		assertEquals(199.7, GPA.pointSum(points, units), 0.1);
		points[3] = -6.23;
		units[3] = -23.4;
		assertEquals(291.48, GPA.pointSum(points, units), 0.1);
		
	}
	@Test
	public void testunitSum() {
		double [] units;
		int numClasses;
		numClasses = 5;
		units = new double[numClasses];
		for (int i = 0; i < numClasses; i++) {
			units[i] = i+2;
		}
		assertEquals(20.0, GPA.unitSum(units, numClasses), 1.0);
		units[2] = 6;
		assertEquals(22.0, GPA.unitSum(units, numClasses), 1.0);
		units[3] = 4.3;
		assertEquals(21.3, GPA.unitSum(units, numClasses), 1.0);
		units[1] = 23.3;
		assertEquals(41.6, GPA.unitSum(units, numClasses), 1.0);
		units[4] = -11;
		assertEquals(24.6, GPA.unitSum(units, numClasses), 1.0);

	}
	@Test
	public void testcalcGPA() {
		double num1 = 48.3;
		double denom1 = 14;
		double num2 = 60;
		double denom2 = 20;
		double num3 = 999;
		double denom3 = -999;
		double num4 = 43543;
		double denom4 = 23423;
		double num5 = 14.3424;
		double denom5 = 49;
		
		assertEquals(3.45, GPA.calcGPA(num1, denom1), 0.1);
		assertEquals(3.0, GPA.calcGPA(num2, denom2), 0.1);
		assertEquals(-1.0, GPA.calcGPA(num3, denom3), 0.1);
		assertEquals(1.86, GPA.calcGPA(num4, denom4), 0.1);
		assertEquals(.29, GPA.calcGPA(num5, denom5), 0.1);

	}
}

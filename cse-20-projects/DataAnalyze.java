import java.util.Scanner;
public class DataAnalyze {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); // scanner setup
        int avg1=0, avg2=0, avg3=0, avg4=0; //initializing the average of each array
        int sum1=0, sum2=0, sum3=0, sum4=0; //initializing the sum of each array
        int i;
        System.out.print("Please enter the sample size: ");
        int SampleSize = input.nextInt(); //takes user input for max sample size
        int[]arr1 = new int[SampleSize+1]; //the four arrays which correspond to the four trials
        int[]arr2 = new int[SampleSize+1];
        int[]arr3 = new int[SampleSize+1];
        int[]arr4 = new int[SampleSize+1];
        System.out.println("Enter numbers for Trial 1");
        for (i = 1; i <= SampleSize; i++) {                      //First trial input
            System.out.print("Enter sample #" + i + ": ");
            arr1[i] = input.nextInt();
            sum1 += arr1[i];
        }
        System.out.println();
        System.out.println("Enter numbers for Trial 2");
        for (i = 1; i <= SampleSize; i++) {                          //Second trial input
            System.out.print("Enter sample #" + i + ": ");
            arr2[i] = input.nextInt();
            sum2 += arr2[i];
        }
        System.out.println();
        System.out.println("Enter numbers for Trial 3");
        for (i = 1; i <= SampleSize; i++) {                      //Third trial input
            System.out.print("Enter sample #" + i + ": ");
            arr3[i] = input.nextInt();
            sum3 += arr3[i];
        }
        System.out.println();
        System.out.println("Enter numbers for Trial 4");
        for (i = 1; i <= SampleSize; i++) {                      //Fourth trial input
            System.out.print("Enter sample #" + i + ": ");
            arr4[i] = input.nextInt();
            sum4 += arr4[i];
        }
        avg1 = sum1 / SampleSize;   //the avg1-4 variables calculate the average using the sum in the for loops above and the sample size
        avg2 = sum2 / SampleSize;
        avg3 = sum3 / SampleSize;
        avg4 = sum4 / SampleSize;
        int[] avgArr = {avg1, avg2, avg3, avg4};  //new array introduced to store the averages of each trial
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int j = 0; j < 4; j++) {  //This for-loop will give us the minimum and maximum averages, respectively
            if (min > avgArr[j])
                min = avgArr[j];
            if (max < avgArr[j])
                max = avgArr[j];
        }
        System.out.println("\tSample #\tTrial 1\tTrial 2\tTrial 3\tTrial 4");   //this line sets up the format for which the trial values will go under
        for (i = 1; i <= SampleSize; i++) {  // This for loop prints out each index value of each of the four trial arrays and spaces it to setup 4 columns
            System.out.println("\t" + i + "\t\t" + arr1[i] + "\t" + arr2[i] + "\t" + arr3[i] + "\t" + arr4[i]);
        }
        System.out.println("\t-----------------------------------------------"); //formatting
        System.out.println("Average:\t" + "\t" + avg1 + "\t" + avg2 + "\t" + avg3 + "\t" + avg4 + "\t");// prints out the average of each column under
        System.out.println(); //a space for cleanness
        System.out.println("Min Average: " + min);  //prints out the minimum average value from avgArr calculated from the for loop with j
        System.out.println("Max Average: " + max);  //prints out the maximum average value from avgArr calculated from the for loop with j
        System.out.println();// another space for cleanness
        if (min == max)         // executes if the minimum average value is equal to the maximum average value
            System.out.println("The trials match EXACTLY!");
        else if (max < (2* min) && min != 0)     // executes if the max average value is less than 2 times the minimum average value
            System.out.println("The trials concur with each other!");
        else // self explanatory
            System.out.println("The trials do NOT concur!");
        input.close(); // closes the scanner
    }
}

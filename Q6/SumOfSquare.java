/**
 * Hello
 */
public class SumOfSquare {
    public static void main(String [] args){
        int sumOfSquare = 0;
        int squareOfSum = 0;
        for(int i = 0; i <= 100; i++){
            sumOfSquare = sumOfSquare + i; 
            squareOfSum = squareOfSum + i * i;
        }
        System.out.println(sumOfSquare);
        System.out.println(squareOfSum);
        sumOfSquare = sumOfSquare * sumOfSquare;
        int diff = sumOfSquare - squareOfSum;
        System.out.println(diff);

    }
}
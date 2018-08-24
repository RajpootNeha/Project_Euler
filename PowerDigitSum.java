import java.math.*;
import java.util.*;
public class PowerDigitSum {

   public static void main(String[] args) {
   Scanner sc = new Scanner(System.in);
    //BigInteger bi = sc.nextBigInteger();
       int t=sc.nextInt();
       while(t>0)
       {
    int n=sc.nextInt();
      BigInteger big = BigInteger.valueOf(2).pow(n);
    String digits = big.toString();
    int sum = 0;

for(int i = 0; i < digits.length(); i++) {
    int digit = (int) (digits.charAt(i) - '0');
    sum = sum + digit;
}

System.out.println(sum);
   }
   }
}


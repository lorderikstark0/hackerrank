import java.util.*;


public class MyCalculator {

    long power(int base ,int exp){
        try {
            return Math.pow(bsae,exp);
        }
        catch()
    }

}

public class excptionHandling{
    public static final MyCalculator my_calc = new MyCalculator();

    public static final Scanner in = new Scanner(System.in);

    public static void main(String[] args){
        while(in.hasNextInt()){
            int n = in .nextInt();
            int p =in.nextInt();
            try{
                Ssytem.out.println(my_calc.power(n,p));
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}

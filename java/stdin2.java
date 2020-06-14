import java.util.*;
import java.io.*;

public class stdin2{
    public static void main(String[] main){
        Scanner sc =new Scanner(System.in);
        int i=sc.nextInt();
        sc.nextLine();
        double d=sc.nextDouble();
        sc.nextLine();

        String s =sc.nextLine();

        System.out.println("String: "+s);
        System.out.println("Double: "+d);
        System.out.println("Int: "+ i);

    }
}

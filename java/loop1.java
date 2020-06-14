import java.util.*;
import java.io.*;


public class loop1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        sc.nextLine();
        for(int i=1;i<11;i++){
            int res = n*i;
            System.out.println(n + "x"+ i+"="+res);
        }
    }
}

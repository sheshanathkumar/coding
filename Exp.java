import java.util.Stack;
import java.util.Scanner;

public class Exp {
    
    public String inf2psf (String exp) {
        String psf = null;
        Stack <Character> stack = new Stack<Character>();
        
        for (int i = 0; i < exp.length(); i ++) {
            char sym = exp.charAt(i);
            
            switch (sym) {
                case '(' :
                    stack.push((Character)sym);
                    break;
                case ')' :
                    psf = psf + sym;
                    break;
                case '^' :
                case '/' :
                case '*' :
                case '+' :
                case '-' :
                    while (! stack.empty() && 
                            priority (stack.firstElement()) >= priority (sym)) {
                        psf = psf + stack.firstElement();
                        stack.pop();
                    }
                    stack.pop();
                    break;
                default :
                    psf = psf + sym;
            }
        }                       
        return psf;
    }
    
    public int priority (char x) {
        int pr = 0;
        if (x == '(') pr = 0;
        else if (x == '^') pr = 3;
        else if (x == '%' || x == '/' || x == '*') pr = 2;
        else if (x == '+' || x == '-') pr = 1;
        return pr;
    }
        
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int test = sc.nextInt();
        while (test != 0) {
        
            String exp = sc.next();
            String res = inf2psf(exp);
            test --;
        }
    }
           
}

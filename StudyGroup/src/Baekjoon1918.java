import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class Baekjoon1918 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception{
        String infix = br.readLine();
        System.out.println(convertInfixToPostfix(infix));
    }

    static int getPriorityOfOperator(char operator) { // 높을수록 우선순위를 가짐
        if (operator == '(' || operator == ')') { 
            // 괄호 안의 수식은 가장 높은 우선순위지만, 괄호로 인해 pop이 이뤄지면 안되기 때문에 가장 낮은 값을 반환  
            return 0;
        }
        if (operator == '+' || operator == '-') {
            return 1;
        }
        if (operator == '*' || operator == '/') {
            return 2;
        }
        return -1;
    }

    static String convertInfixToPostfix(String infix) {
        StringBuilder output = new StringBuilder();
        Stack<Character> operators = new Stack<>();

        for (int i=0; i<infix.length(); i++) {
            char currentValue = infix.charAt(i);
            switch (currentValue) {
                case '+': case '-': case '*': case '/':
                    while (!operators.isEmpty() && getPriorityOfOperator(currentValue) <= getPriorityOfOperator(operators.peek())) {
                        output.append(operators.pop());
                    }
                    operators.push(currentValue);
                    break;
                case '(':
                    operators.push(currentValue);
                    break;
                case ')':
                    while(!operators.isEmpty() && operators.peek() != '('){
                        output.append(operators.pop());
                    }
                    operators.pop();
                    break;
                default:
                    output.append(currentValue);
            }
        }

        while (!operators.isEmpty()) {
            output.append(operators.pop());
        }

        return output.toString();
    }
}

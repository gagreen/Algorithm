import java.io.*;
import java.util.Stack;

public class Baekjoon9093 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException{
        int testcase = Integer.parseInt(br.readLine());

        while(testcase-- > 0) {
            writeReveredSentence(br.readLine());
        }

        bw.flush();
        /*
        1. 테스트 케이스 입력받기
        2. 입력받은 값을 스페이스를 기준으로 나누기
        3. 거꾸로 출력하기
         */
    }

    static void writeReveredSentence(String sentence) throws IOException{
        Stack<Character> stack = new Stack<>();
        StringBuilder reveredSentence = new StringBuilder();
        sentence += " ";
        for (Character ch : sentence.toCharArray()) {
            if(ch == ' ') {
                while(!stack.isEmpty()) {
                    reveredSentence.append(stack.pop());
                }
                reveredSentence.append(ch);
            } else {
                stack.push(ch);
            }
        }

        bw.write(reveredSentence.toString()+"\n");
    }
}
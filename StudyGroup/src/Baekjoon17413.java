import java.io.*;
import java.util.Stack;

public class Baekjoon17413 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    //    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static Stack<Character> stack = new Stack<>();

    public static void main(String[] args) throws IOException {
        String sentence = br.readLine();
        System.out.println(reverseSentenceExceptTag(sentence));
    }

    static String reverseSentenceExceptTag(String sentence) {
        sentence += " ";
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < sentence.length(); i++) {
            char c = sentence.charAt(i);
            if (c == ' ') {
                sb.append(flushStack());
                sb.append(' ');
            } else if (c == '<') {
                sb.append(flushStack());
                while (sentence.charAt(i) != '>') { // '>'가 올 때까지
                    sb.append(sentence.charAt(i));
                    i++;
                }
                sb.append('>');
            } else {
                stack.push(c);
            }
        }

        return sb.toString();
    }

    static String flushStack() {
        StringBuilder output = new StringBuilder();
        while (!stack.isEmpty()) {
            output.append(stack.pop());
        }

        return output.toString();
    }
}

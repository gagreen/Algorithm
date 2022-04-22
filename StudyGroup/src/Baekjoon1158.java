import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Baekjoon1158 {
    /**
     * 1. 입력받기 N, K
     * 2. 1부터 N까지의 순열을 큐로 만들기
     * 3. K번 poll(마지막 값은 출력 값에 ), 다시 K-번 add
     */

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static Queue<Integer> queue = new LinkedList<>();

    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        System.out.println(getJosephusPermutation(n, k));
    }

    static String getJosephusPermutation(int n, int k) {
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= n; i++) { // queue에 1..n 삽입
            queue.add(i);
        }

        sb.append("<");
        while (queue.size() != 1) {
            for (int i=0; i < k - 1; i++) {
                queue.add(queue.poll());
            }
            sb.append(queue.poll()).append(", ");
        }
        sb.append(queue.poll()).append(">");

        return sb.toString();
    }
}

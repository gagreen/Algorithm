import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Baekjoon2309 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static final int SUM_OF_7_DWARF = 100;

    /**
     * 1. 입력을 받는 동시에 9명 모두의 키의 합을 구한다.
     * 2. 2명의 키를 빼서 100인지 판별(9 combinations of 2)
     * 3. 100이라면 종료
     */

    public static void main(String[] args) throws Exception {
        int[] heights = new int[9];
        int sum = 0;
        for (int i = 0; i < heights.length; i++) {
            heights[i] = Integer.parseInt(br.readLine());
            sum += heights[i];
        }

        Arrays.sort(heights); // 출력 시 오름차순 정렬을 위함

        for (int i = 0; i < heights.length; i++) {
            for (int j = 0; j < heights.length; j++) {
                if (SUM_OF_7_DWARF == sum - (heights[i] + heights[j])) {
                    printDwarfsWithoutFake(heights, i, j);
                    System.exit(0);
                }
            }
        }
    }

    static void printDwarfsWithoutFake(int[] heights, int fakeIndex1, int fakeIndex2) throws Exception{
        for (int i=0; i<heights.length; i++){
            if(i == fakeIndex1 || i == fakeIndex2) {continue;}

            bw.write(heights[i] + "\n");
        }

        bw.flush();
    }
}

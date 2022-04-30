import java.io.*;

public class Baekjoon3085 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    /**
     * 1. 입력 (n과 n*n 크기의 문자 배열)
     * 2. n*n만큼 반복하면서 바꾸기
     * 2-1. 배열[i][j]번째와 인접한 부분 바꾸기
     *      (오른쪽과 아래만 할 것 => 위와 왼쫀은 그 전에 인덱스에서 한 결과와 똑같기 때문)
     * 2-2. 각각 배열들의 행이나 열의 line 수가 최댓값인지 확인
     *      이전값과 비교해 같다면 ++
     * 3. 최댓값 출력
     *
     * issue. swap하고 또 swap하는 것이 싫어서 clone() 메서드를 사용하려 했으나,
     *  2차원 배열의 경우 따로 깊은 복사를 해야 한다.
     *  둘 중 다시 swap하는 것이 리소스가 덜 들 것 같아 포기하였다.ㄴ
     */

    public static void main(String[] args) throws IOException {
        int n = Integer.parseInt(br.readLine());
        char[][] candies = new char[n][n];

        for (int i = 0; i < n; i++) {
            candies[i] = br.readLine().toCharArray();
        }

        int max = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                max = getMaxOfSwappedCandies(candies, max, i, j);
            }
        }

        System.out.println(max);
    }

    static int getMaxOfSwappedCandies(char[][] candies, int currentMax, int i, int j) {
        char temp;

        if (j + 1 < candies.length) {
            temp = candies[i][j];
            candies[i][j] = candies[i][j + 1];
            candies[i][j + 1] = temp;

            currentMax = Math.max(currentMax, getMaxOf(candies));

            temp = candies[i][j];
            candies[i][j] = candies[i][j + 1];
            candies[i][j + 1] = temp;
        }
        if (i + 1 < candies.length) {
            temp = candies[i][j];
            candies[i][j] = candies[i + 1][j];
            candies[i + 1][j] = temp;

            currentMax = Math.max(currentMax, getMaxOf(candies));

            temp = candies[i][j];
            candies[i][j] = candies[i + 1][j];
            candies[i + 1][j] = temp;
        }

        return currentMax;
    }

    static int getMaxOf(char[][] array) {
        int max = 0;
        int rowCnt;
        int colCnt;

        for (int i = 0; i < array.length; i++) {
            rowCnt = 1;
            colCnt = 1;
            for (int j = 1; j < array.length; j++) {
                // col
                if (array[i][j] == array[i][j - 1]) {
                    colCnt++;
                } else {
                    colCnt = 1;
                }
                max = Math.max(max, colCnt);

                // row
                if (array[j][i] == array[j - 1][i]) {
                    rowCnt++;
                } else {
                    rowCnt = 1;
                }
                max = Math.max(max, rowCnt);

            }
        }

        return max;
    }

    static void printArr(char[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }
        System.out.println();
    }
}

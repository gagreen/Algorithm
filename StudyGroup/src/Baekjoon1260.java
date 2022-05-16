import java.io.*;
import java.util.*;

public class Baekjoon1260 {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	static int[][] adjMat; // adjacency matrix 인접 행렬
	static int n;
	static int startPoint;


	public static void main(String[] args) throws Exception {
		getInput();
//		printAdjMat(); // for Test

		printResult(doDfs());
		printResult(doBfs());
	}

	static void getInput() throws IOException {
		int firNode, secNode;
		StringTokenizer st = new StringTokenizer(br.readLine());
		n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		startPoint = Integer.parseInt(st.nextToken()) - 1; // 배열은 zero-base이므로 -1 해준다.

		adjMat = new int[n][n];
		for (int i = 0; i < m; i++) {
			String[] nodes = br.readLine().split(" ");
			firNode = Integer.parseInt(nodes[0]);
			secNode = Integer.parseInt(nodes[1]);

			// 참고: 배열은 zero-base이므로 -1 해준다.
			adjMat[firNode - 1][secNode - 1] = 1;
			adjMat[secNode - 1][firNode - 1] = 1;
		}
	}

	static void printAdjMat() {
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				System.out.print(adjMat[i][j] + " ");
			}
			System.out.println();
		}
	}

	static List<Integer> doDfs() {
		List<Integer> result = new ArrayList<Integer>();
		boolean[] visitedArr = new boolean[n];
		Stack<Integer> depth = new Stack<Integer>();
		depth.push(startPoint);
		visitedArr[startPoint] = true;
		result.add(startPoint + 1);

		while (!depth.isEmpty()) {
			int[] currentNodesEdges = adjMat[depth.peek()];

			boolean isVisitOtherNode = false;
			for(int i=0; i<n; i++) {

				if (currentNodesEdges[i] != 0 && !visitedArr[i] ) {
					isVisitOtherNode = true;
					visitedArr[i] = true;
					depth.push(i);
					result.add(i + 1);
					break;
				}
			}
			if (!isVisitOtherNode) {
				depth.pop();
			}
		}

		return result;
	}

	static List<Integer> doBfs() {
		List<Integer> result = new ArrayList<Integer>();
		boolean[] visitedArr = new boolean[n];
		Queue<Integer> breadth = new ArrayDeque<Integer>();

		breadth.add(startPoint);
		visitedArr[startPoint] = true;


		while (!breadth.isEmpty()) {
			int currentNode = breadth.poll();
			result.add(currentNode + 1);
			int[] currentNodesEdges = adjMat[currentNode];
			for(int i=0; i<n; i++) {
				if(currentNodesEdges[i] != 0 && !visitedArr[i]) {
					breadth.add(i);
					visitedArr[i] = true;
				}
			}
		}

		return result;
	}

	static void printResult(List<Integer> result) throws IOException {
		for (int i=0; i<result.size(); i++) {
			bw.write(result.get(i) + " ");
		}
		bw.write("\n");
		bw.flush();
	}
}

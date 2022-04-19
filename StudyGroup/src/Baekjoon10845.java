import java.io.*;

public class Baekjoon10845 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static Queue queue = new Queue();


    public static void main(String[] args) throws IOException {
        int times = Integer.parseInt(br.readLine());

        while (times-- > 0) {
            controlQueue(br.readLine());
        }

        bw.flush();
    }

    static void controlQueue(String command) throws IOException{
        String[] splitCommand = command.split(" ");
        switch (splitCommand[0]) {
            case "push":
                queue.push(Integer.parseInt(splitCommand[1]));
                break;
            case "pop":
                bw.write(queue.pop()+"\n");
                break;
            case "size":
                bw.write(queue.size()+"\n");
                break;
            case "empty":
                bw.write(queue.empty()+"\n");
                break;
            case "front":
                bw.write(queue.front()+"\n");
                break;
            case "back":
                bw.write(queue.back()+"\n");
                break;
        }
    }

    static class Queue {
        int[] arr = new int[100000];
        int _front = -1;
        int _back = -1;

        void push(int x) {
            arr[++_back] = x;
        }

        int pop() {
            if (empty() == 1) {
                return -1;
            }
            return arr[++_front];
        }

        int size() {
            return _back - _front ;
        }

        int empty() {
            return _front == _back ? 1 : 0;
        }

        int front() {
            if (empty() == 1) {
                return -1;
            }
            return arr[_front+1];
        }

        int back() {
            if(empty() == 1) {
                return -1;
            }
            return arr[_back];
        }
    }
}

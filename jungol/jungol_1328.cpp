#include <stdio.h>
#include<stack>
using namespace std;
typedef struct {
	int data;
	int idx;
}node;

int n, top=-1;
int view[100001];
node arr[100001];

int main(){
	int i;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &arr[i].data);
		arr[i].idx = i;
		view[i] = -1;
	}//End of Input
	
	stack<node> st;
	
	for(i=1; i<=n; i++){
		if(view[i] != -1){
			continue;
		}
		if(st.empty()){
			st.push(arr[i]);
		}
		else if(arr[i].data <= st.top().data){
			st.push(arr[i]);
		}
		else if(arr[i].data > st.top().data){
			while(!st.empty() && arr[i].data > st.top().data){
				if(arr[i].data <= st.top().data){
					st.push(arr[i]);
				}
				else{
					view[st.top().idx] = i;
					st.pop();
				}
			}
			st.push(arr[i]);
		}
	}
	
	
	for(i=1; i<=n; i++){
		if(view[i] == -1){
			printf("0\n");
		}
		else{
			printf("%d\n", view[i]);
		}
	}
	
	return 0;
}

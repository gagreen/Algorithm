#include <stdio.h>
#include <stack>
using namespace std;

typedef struct {
	int idx;
	int data;
}node;

int n;
int output[500000];
node arr[500000];
stack<node> st;

int main(){
	int i;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i].data);
		arr[i].idx = i+1;
	}
//End of Input
	 
	for(i=0; i<n; i++){
		if(st.empty()){
			printf("0 ");	
		}
		else if(st.top().data >= arr[i].data){
			printf("%d ", st.top().idx);
		}
		else{
			while(!st.empty()){
				if(st.top().data < arr[i].data){
					st.pop();
					if(st.empty()){
						printf("0 ");
					}
				}
				else if(arr[i].data <= st.top().data){
					printf("%d ", st.top().idx);
					break;
				}
			}
		}
		st.push(arr[i]);
	}
	
	return 0;
}

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int n, q;

struct Data{
	int id;
	char name[11];
	int p;
	
	bool operator<(const Data&r) const{
		if(p != r.p){
			return p > r.p;
		}
	return strcmp(name, r.name) < 0;
	}
	
	void output(){
		printf("%d ", id);
	}
};

bool comp(const Data&a, const Data&b){
    if(a.p != b.p){
        return a.p > b.p;
    }
    if(a.name != b.name){
    	return strcmp(a.name, b.name) < 0;
	};
	return a.id < b.id;
}

struct Comparator{
    bool operator()(const Data&a, const Data&b){
		    if(a.p != b.p){
		    return a.p > b.p;
		}
		if(a.name != b.name){
			return strcmp(a.name, b.name) < 0;
		};
		return a.id < b.id;
    }
}compObject;

int main(){
	int i, qu;
	scanf("%d %d", &n, &q);
	Data arr[n];
	
	for(i=0; i<n; i++){
		arr[i].id = i+1;
		scanf("%s", &arr[i].name);
		scanf(" %d", &arr[i].p);
	}
	
	sort(arr, arr+n, comp);
	for(i=0; i<q; i++){
		scanf("%d", &qu);
		arr[qu-1].output();
	}
	
	return 0;
}

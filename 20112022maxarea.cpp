#include<iostream>
#include<stack>
using namespace std;
int maxArea(int arr[],int n){
  stack<int>st;
	int area=0;
    int i=0;
    while(i<n){
    	if(st.empty() || arr[i]>= arr[st.top()]){
    		st.push(i);
    		i++;
		}
		else{
			int s= st.top();
			st.pop();
			if(st.empty()){
				area= max(area,i * arr[s]);
			}
			else{
				area= max(area,arr[s]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
		int s= st.top();
			st.pop();
			if(st.empty()){
				if(area<i*arr[s]){
					area= i*arr[s];
				}
			}
			else{
				if(area<(i-st.top()-1)*arr[s]){
					area= (i-st.top()-1)*arr[s];
				}
			}
	}
	return area;
}

int main(){
  int a,b;
  cin >> a >> b;
  int arr[a][b];
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      cin >> arr[i][j];
    }
  }
  stack<int>st;
  for(int i=1;i<a;i++){
    for(int j=0;j<b;j++){
      if(arr[i][j]!=0){
      arr[i][j]+=arr[i-1][j];
        }
    }
  }
  int max=0;
  for(int i=0;i<a;i++){  
    int a[b];
    for(int j=0;j<b;j++){
      a[j]= arr[i][j];
    }
    if(max< maxArea(a,b)){
      max= maxArea(a,b);
    }
  }
  cout << max;
}

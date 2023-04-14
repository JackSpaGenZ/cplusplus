#include<iostream>

using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
	cout << endl;
}
void shellSort(int a[], int n){
	int interval, i, j, temp;
	for(interval = n/2; interval > 0; interval /= 2){
		for(i = interval; i < n; i++){
			temp = a[i];
			for(j = i; j >= interval && a[j - interval] > temp; j -= interval){
				a[j] = a[j - interval];				
			}
			a[j] = temp;
		}
    }
}
int a[100001];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];		
	}
	shellSort(a, n);
	printArray(a, n);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int MaxElement(vector<int> a){
    int maxValue = a[0];
    for(int i = 0; i < a.size(); i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}
 
void GetMaxPosition(vector<int> a){
    int maxValue = MaxElement(a);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < a.size(); i++){
        if(a[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}
	

int main(){
 	int N;
 	cout << "Nhap vao so nguyen N: ";
 	cin >> N;
 	vector<int> V(N);
 	for(int i = 0; i < V.size(); i++){
 		cin >> V[i];
	}
	GetMaxPosition(V(N));
}
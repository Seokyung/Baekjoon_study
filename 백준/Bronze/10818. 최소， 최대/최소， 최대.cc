#include <iostream>
using namespace std;
int main() {
    int n, i, min, max;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for(i=0;i<n;i++) {
        if(a[i]<min) {
            min = a[i];
        }
        else if(a[i]>max) {
            max = a[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}
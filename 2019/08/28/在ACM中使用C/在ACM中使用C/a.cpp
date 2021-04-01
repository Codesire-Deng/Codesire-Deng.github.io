#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n;
char st[100];

int main() {
    freopen("in", "r", stdin);
    // cin >> n;
    scanf("%d", &n);
    printf("-------\n");
    for (int i=0; i<n; ++i) {
        cin.getline(st, 99);
        printf("%s %u\n", st, strlen(st));
    }
    
    
    return 0;
}
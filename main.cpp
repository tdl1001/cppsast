#include "iosteam"
#include "string"

void main(){
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 1;
    int n = 1;

    for(int i = 0; i < 10; i++)
        int k = m + n; n = m; m = k;
    
    return;
}
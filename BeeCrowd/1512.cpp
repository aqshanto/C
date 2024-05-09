#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    while(1){
    cin>>n>>a>>b;
    if(n==0 && a==0 && b==0)
        break;
    int count =0;
    for(int i=1;i<=n;i++){
        if(i%a==0 || i%b==0){
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    while (true) {
        cin >> n >> a >> b;
        if (n == 0 && a == 0 && b == 0)
            break;

        int lcm = (a * b) / __gcd(a, b);
        int count = (n / a) + (n / b) - (n / lcm);

        cout << count << endl;
    }
    return 0;
}
#include <stdio.h>

// Function to calculate the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, a, b;
    while (1) {
        scanf("%d %d %d", &n, &a, &b);
        if (n == 0 && a == 0 && b == 0)
            break;

        int lcm_ab = lcm(a, b);
        int count = (n / a) + (n / b) - (n / lcm_ab);

        printf("%d\n", count);
    }
    return 0;
}

    #include <iostream>
    using namespace std;
     
    int main()
    {
        long long b, c, d, m, n, o, p, y, z, w, ans;
        cin >> m >> n >> o >> p;
         y = m*o;
         z = o*p;
         w = p*n;
         ans = 0;
        for (int i = 1; i <= 1000000; i++) {
        	long long x = i*m*n;
        	if (x%y == 0 && x%z == 0 && x%w == 0)
        		if (x/y <= 1000000 && x/z <= 1000000 && x/w <= 1000000)
        			ans++;
        }
        cout << ans*1000000 << endl;
        return 0;
    }
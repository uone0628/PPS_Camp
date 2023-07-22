    #include <iostream>
    #include <algorithm>
    using namespace std;

    const int MAX = 50;
    const int INF = 987654321;

    int main() {
        int N, M;

        ios_base::sync_with_stdio(0);
        cin.tie(0); 

        cin >> N >> M;

        int package = INF, unit = INF;
            for (int i = 0; i < M; i++)
            {
                int packageCost, unitCost;
            
                cin >> packageCost >> unitCost;
                package = min(package, packageCost);
                unit = min(unit, unitCost);
            }

            if (N <= 6)                    
                cout << min(package, unit * N) << endl;
            else
            {
                int result = INF;

                for (int i = 0; i <= (N / 6) + 1; i ++)

                        result = min(result, package * i + unit * max(N - 6 * i, 0));

                cout << result << "\n";

            }

            return 0;
    }
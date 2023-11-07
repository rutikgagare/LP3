#include <bits/stdc++.h>
using namespace std;

// fractional knapsack
// greedy approach
// TC - O(nlogn)
// SC - O(n)

class Item{
	public:
	int weight;
	int profit;
};

static bool cmp(class Item a, class Item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
    
}

double solve( vector<Item> v, int n, int capacity ){
    
    double totalProfit = 0;

    for (int i = 0; i < n; ++i){
        if (capacity >= v[i].weight){
            capacity -= v[i].weight;
            totalProfit += v[i].profit;
        }
        else{
            totalProfit += ((double(v[i].profit)/double(v[i].weight)) * capacity);
            break;
        }
    }
    
	return totalProfit;
}
int main(){

	int n;
    cout<<"Enter number of items : ";
    cin >> n; 

    vector<Item> v(n);

    for(int i = 0; i < n; ++i){
        double weight, profit;
        cout<<"Enter profit weight : ";
        cin >> profit >> weight;
        
		v[i].weight = weight;
		v[i].profit = profit;
    }

    sort(v.begin(), v.end(), cmp);

    double capacity;
    cout<<"Enter capacity : ";
    cin >> capacity;

	cout << "Final profit = " << solve(v , n , capacity)<< endl;
}


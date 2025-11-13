#include <bits/stdc++.h>
#include <functional>
using namespace std;

int carFleet(int target, vector<int> &position, vector<int> &speed) {
		int N = (int) position.size();
		vector<pair<int, int>> v;
		stack<pair<int,int>> fleets;
		for(int i = 0 ; i < N ; i++){
				int dist = (target - position[i]) / speed[i];
				if((target - position[i]) % speed[i] != 0){
								dist++;
								}
				v.push_back({position[i] , dist});
		}
		sort(v.begin() , v.end(), greater<>());
		for(auto p : v){
				if(!fleets.empty() && p.second <= fleets.top().second){
						continue;
				}
				fleets.push(p);
		}
		return fleets.size();
}

int main(int argc, char *argv[]) {
		int target = 10;
		vector<int> position = {1, 4};
		vector<int> speed = {3, 2};
		cout << carFleet(target, position, speed);
		return 0;
}

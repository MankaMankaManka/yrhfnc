#include <vector>
#include <cmath>
#include <queue>

int kth_largest(std::vector<int> values, int k){
	if (values.size()<k){return 0;}
	else {
	std::priority_queue<int> pq;
	for (int i = 0; i < values.size(); i++) {
			pq.push(values[i]);
	}
	for (int i = 0; i < k-1; i++){
		pq.pop();
	}
	return pq.top();
	}
}




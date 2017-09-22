#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Item {
public:
	unsigned int index, value;
	Item(unsigned int input_index, unsigned int input_value) {
		index = input_index;
		value = input_value;
	}
};

bool sort_by_value (const Item& left, const Item& right)
{
	return (left.value < right.value);
}

bool sort_by_index (const Item& left, const Item& right)
{
	return (left.index < right.index);
}

int main() {

	unsigned int n, m, k, i, j, last, input;
	cin>>n>>m>>k;

	vector<Item> items;
	vector<Item> candidates;

	for(i = 0; i < n; i++) {
		cin>>input;
		items.push_back(Item(i, input));
	}

	sort(items.begin(), items.end(), sort_by_value);

	for(i = 0; i < k - 1; i++) {
	  candidates.push_back(items[i]);
	  candidates.push_back(Item(items[i].index + n, items[i].value));
	}
	for(i = k - 1; i < n; i++) {
		candidates.push_back(items[i]);
		candidates.push_back(Item(items[i].index + n, items[i].value));

		sort(candidates.begin(), candidates.end(), sort_by_index);

		for(j = 0; (last = j + k - 1) < candidates.size(); j++) {
			if (candidates[j].index + m > candidates[last].index) {
				cout<<items[i].value<<endl;
				return 0;
			}
		}
	}
	return -1;
}

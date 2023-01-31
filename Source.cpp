#include<iostream>
#include<vector>

using namespace std;


int main() {
	vector<int>list{};
	char c{};
	int data{},sum{};
	do {
		cout << "P - Print numbers \n";
		cout << "A - Add numbers \n";
		cout << "M - Display the mean of the numbers \n";
		cout << "S - Display the smallest number \n";
		cout << "L - Display the largest number \n";
		cout << "Q - Quit \n";
		
		cout << "Enter Your Choice \n";
		cout << "___________________________________________________________ \n";
		
		cin >> c;
		if (c == 'P' || c == 'p') {

				if (list.size()==0) 
					cout << "[] - The list is empty \n";
				else {
					cout << "[ ";
					for(auto val:list)
						cout<<val<<" ";
					cout << "]"<<endl;
				}
		}
		else if (c == 'A' || c == 'a') {
			cin >> data;
			list.push_back(data);
			cout << data << " added\n";
		}
		else if (c == 'M' || c == 'm') {
				if (list.size() == 0) {
					cout << "Unable to calculate the mean - no data \n ";
				}
				else {
					for (size_t i = 0; i < list.size(); ++i) {
						sum += list.at(i);
					}

					cout << "The mean equals to " << static_cast<double> (sum) / list.size() << endl;
				}
		}

		else if (c == 'S' || c == 's') {

				if (list.size() == 0) {
					cout << "Unable to determine the smallest - no data \n";
				}
				else {
					int smallest = list.at(0);
					for (auto val : list) {
						if (val < smallest)
							smallest = val;
					}
					cout << "The Smallest number is " << smallest<<endl;
				}
		}
		
		else if (c == 'L' || c == 'l') {
				if (list.size() == 0) {
					cout << "Unable to determine the largest - no data \n";
				}
				else {
					int largest = list.at(0);
					for (auto val : list) {
						if (val > largest)
							largest = val;
					}
					cout << "The largest number is " << largest<<endl;
				}
		}
		else if (c == 'q' || c == 'Q') {
			cout << "          G O O D     B Y E              \n";
		}
		else
			cout << "Unknown Selection, Please try again \n";
	} while ((c != 'Q' && c != 'q'));
}

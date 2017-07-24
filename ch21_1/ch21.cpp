#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

struct Item
{
    string name;
    int iid;
    double value;
};


int main()
{
    vector <Item> vi;
    ifstream in_1("in.txt");

    int q = 0;
    in_1 >> q;
    cout << q << endl;

    Item el;

    for (int i = 0; i < q; i++)
    {
        in_1 >> el.name >> el.iid >> el.value;
        vi.push_back(el);

    }
    in_1.close();

   

	sort (vi.begin(), vi.end(), 
			[] (Item& a, Item& b)
	{
		return a.name < b.name;
	}
	);

 for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
	cout << endl;


	sort (vi.begin(), vi.end(), 
			[] (Item& a, Item& b)
	{
		return a.iid < b.iid;
	}
	);

	 for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
	cout << endl;

		sort (vi.begin(), vi.end(), 
			[] (Item& a, Item& b)
	{
		return a.value > b.value;
	}
	);
	 for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
	cout << endl;

    return 0;
}



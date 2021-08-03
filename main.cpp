#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void StringArrayWithVectorView()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string &word : msg)
    {
        cout << word << endl;
    }
    cout << endl;
}

void StringArrayWithVectorInput()
{
    vector<string> msg{};
    string inputString;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> inputString;
        msg.push_back(inputString);
    }
    cout << "--------------Output----------------------";
    for (size_t i = 0; i < 5; i++)
    {
        cout << msg[i] << endl;
    }
}

void VectorTakeOnlyDistinct()
{
    vector<int> v = {1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8}, i;

    vector<int>::iterator ip;

    // Using std::unique
    ip = std::unique(v.begin(), v.begin() + v.size());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined

    // Resizing the vector so as to remove the undefined terms
    v.resize(std::distance(v.begin(), ip));

    // Displaying the vector after applying std::unique
    for (ip = v.begin(); ip != v.end(); ++ip)
    {
        cout << *ip << " ";
    }
}

struct customer
{
    uint32_t id = {};
    uint32_t customer_id = {};
};

void TakeCustomerDistinctIds()
{
    std::vector<customer> customers;
    int customerSize = 10;
    for (size_t i = 0; i < customerSize; i++)
    {
        customer customerRecord;
        customerRecord.id = i + 1;
        customerRecord.customer_id = i + 10;
        customers.push_back(customerRecord);
        customers.push_back(customerRecord);
    }
    
    cout << endl << "Customers ---------------" << endl;
    for (size_t i = 0; i < customerSize; i++)
    {
        cout << customers[i].id << " - " << customers[i].customer_id << endl;
    }

    cout << endl << "Customer Ids ---------------" << endl;;
    std::vector<int> customerIds;
    for (size_t i = 0; i < customers.size(); i++)
    {
        customerIds.push_back(customers[i].customer_id);
        cout << customers[i].customer_id << endl;
    }

    // make unique
    cout << endl << "Customer Ids - unique ---------------" << endl;
    vector<int>::iterator iterator;
    iterator = std::unique(customerIds.begin(), customerIds.begin() + customerIds.size());
    customerIds.resize(std::distance(customerIds.begin(), iterator));

    // Displaying the vector after applying std::unique
    for (iterator = customerIds.begin(); iterator != customerIds.end(); ++iterator)
    {
        cout << *iterator << endl;
    }


}

int main()
{
    // StringArrayWithVectorView();
    // StringArrayWithVectorInput();
    // VectorTakeOnlyDistinct();
    TakeCustomerDistinctIds();
}

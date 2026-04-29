#include <iostream>
using namespace std;

// Function to show drone route
void showRoute(string route) {
    cout << "Drone is following route: " << route << endl;
}

// Function to show delivery status
void deliveryStatus(bool delivered) {
    if (delivered)
        cout << "Package Delivered Successfully ?" << endl;
    else
        cout << "Package is still in transit ??" << endl;
}

// Function to track package
void trackPackage(string id) {
    cout << "Tracking Package ID: " << id << endl;
    cout << "Current Location: Distribution Center" << endl;
}

int main() {
    string route, packageID;
    int choice;
    bool delivered = false;

    cout << "===== Drone Delivery System =====" << endl;

    do {
        cout << "\n1. Set Drone Route";
        cout << "\n2. Check Delivery Status";
        cout << "\n3. Track Package";
        cout << "\n4. Mark as Delivered";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Route (e.g. A to B): ";
                cin.ignore();
                getline(cin, route);
                showRoute(route);
                break;

            case 2:
                deliveryStatus(delivered);
                break;

            case 3:
                cout << "Enter Package ID: ";
                cin >> packageID;
                trackPackage(packageID);
                break;

            case 4:
                delivered = true;
                cout << "Package marked as delivered." << endl;
                break;

            case 5:
                cout << "Exiting system..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}

#include <iostream>
using namespace std;

/* List prices for large & smale rooms, prompt customer to type quantity of
their purchase, use if else statement to change course once or twice. Caclculate
price then display it. prompt a confirmation of yes or no. Then say what the
price estimation would be, and thats the estimate is valid for 30 days*/

int main() {
cout << "CALEB'S ROOM CLEANING SERVICE" <<
endl << "\nHow many rooms would you like cleaned?: ";
int PurchaseQuantity {0};
cin >> PurchaseQuantity;

cout << "\nThere are two types of rooms.\nOption 1: Room must less than 100square ft,and are $25 each.\nOption 2: Rooms greater than 100square ft, and are $35 each.";
cout << "\nWhich option would you like?(1 or 2): ";
int PurchaseType {0};
cin >> PurchaseType;

const int LargeRoomRate {35};
const int SmallRoomRate {25};

if ((PurchaseType) == 2) cout << "ESTIMATED COST: $" << PurchaseQuantity * LargeRoomRate << "\n TAX ESTIMATE: $" << (PurchaseQuantity * LargeRoomRate) * .08 << endl;
else cout << "ESTIMATED COST: $" << PurchaseQuantity * SmallRoomRate << "\n TAX ESTIMATE: $" << (PurchaseQuantity * SmallRoomRate) * .08 << endl;
cout << "These Estimates are valid for 30 days." << endl;

}

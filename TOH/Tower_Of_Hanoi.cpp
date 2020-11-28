#include<iostream>
using namespace std;

void tower_of_hanoi(int num_of_disk, char from, char to, char aux) {

    if(num_of_disk == 1) {

        // Move 1 disk direct from A to C
        cout << "\nMove disk 1 from " << from << " to " << to;

        return;
    }

    // Move n-1 disk from A to B using C axuillary

    tower_of_hanoi(num_of_disk - 1, from, aux, to);

    // Move remaining disk from A to C

    cout << "\nMove disk " << num_of_disk << " from " << from << " to " << to;

    // Move n-1 disk from B to C using A as axuillary

    tower_of_hanoi(num_of_disk- 1, aux, to, from);
}

int main() {

    int num_of_disk = 3;

    // cout << "Enter the number of disks\n";
    // cin >> num_of_disk;

    tower_of_hanoi(num_of_disk, 'A', 'C', 'B'); // tower_of_hanoi(num_of_disk, source, destination, axuillary)
    

    return 0;
}

// Computational complexity of TOH problem = O(2^n) [exponential complexity]
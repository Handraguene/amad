#include <iostream>
using namespace std;

enum ColumnType {
    ColTitle,
    ColAuthor,
    ColYear
};

void handleColumn(ColumnType column) {
    switch (column) {
        case ColTitle:
            cout << "Handling title column" << endl;
            break;
        case ColAuthor:
            cout << "Handling author column" << endl;
            break;
        case ColYear:
            cout << "Handling year column" << endl;
            break;
        default:
            cout << "Unknown column type" << endl;
            break;
    }
}

int main() {
    handleColumn(ColTitle);
    handleColumn(ColAuthor);
    handleColumn(ColYear);
    return 0;
}

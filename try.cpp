void ModifyFile(const string& filename, const string& username) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    vector<string> lines;
    string line;
    bool modified = false;

    while (getline(inputFile, line)) {
        // Find the line containing the user's name
        if (line.find("Name of the booker: ") != string::npos && line.find(username) != string::npos) {
            modified = true;

            // Modify the user's information
            cout << "Enter the new number of individuals: ";
            getline(cin, line);
            lines.push_back("No. Of individuals: " + line);

            cout << "Enter the new number of beds: ";
            getline(cin, line);
            lines.push_back("NO. of bed to be used: " + line);

            cout << "Enter the new staying time: ";
            getline(cin, line);
            lines.push_back("Staying time: " + line);

            // Skip the existing room choice line
            getline(inputFile, line);

            cout << "Enter the new room category: ";
            getline(cin, line);
            lines.push_back("Room Category: " + line);

            cout << "Enter the new room number: ";
            getline(cin, line);
            lines.push_back("Room Number: " + line);

            // Skip the existing total cost line
            getline(inputFile, line);
        } else {
            lines.push_back(line);
        }
    }
    inputFile.close();

    if (!modified) {
        cout << "User not found in the file." << endl;
        return;
    }

    ofstream outputFile(filename);
    if (!outputFile) {
        cout << "Error opening file for writing: " << filename << endl;
        return;
    }

    // Write the modified lines back to the file
    for (const string& modifiedLine : lines) {
        outputFile << modifiedLine << endl;
    }
    outputFile.close();

    cout << "File modified successfully." << endl;
}

int main() {
    // Example usage
    string filename = "allbookings.txt";
    string username;

    cout << "Enter the username to modify: ";
    getline(cin, username);

    ModifyFile(filename, username);

    return 0;
}
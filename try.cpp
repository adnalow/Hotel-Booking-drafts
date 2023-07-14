void receipt() {
    std::cout<<R"(


                                              
                                                                ______     ______     ______     ______     __     ______   ______  
                                                                /\  == \   /\  ___\   /\  ___\   /\  ___\   /\ \   /\  == \ /\__  _\ 
                                                                \ \  __<   \ \  __\   \ \ \____  \ \  __\   \ \ \  \ \  _-/ \/_/\ \/ 
                                                                 \ \_\ \_\  \ \_____\  \ \_____\  \ \_____\  \ \_\  \ \_\      \ \_\ 
                                                                  \/_/ /_/   \/_____/   \/_____/   \/_____/   \/_/   \/_/       \/_/ 
                                                                     


    )"<<std::endl;
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\tRECEIPT" << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------" << endl;

    // Read and display the receipt from the specific transaction's text file
    auto timestamp = chrono::system_clock::now();
    auto timestampSeconds = chrono::duration_cast<chrono::seconds>(timestamp.time_since_epoch()).count();
    string filename = "booking_" + to_string(timestampSeconds) + ".txt";

    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << "\t\t\t\t\t\t\t\t" << line << endl;
        }

        inFile.close();
    } else {
        cout << "Unable to open receipt file for reading." << endl;
    }

    cout << "\n\n\t\t\t\t\tPress any key to continue....";
    cin.ignore();
    cin.get();
}
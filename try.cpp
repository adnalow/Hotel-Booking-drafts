void receipt() {
    system("cls");
    std::cout<<R"(


                                              
                                                                ______     ______     ______     ______     __     ______   ______  
                                                                /\  == \   /\  ___\   /\  ___\   /\  ___\   /\ \   /\  == \ /\__  _\ 
                                                                \ \  __<   \ \  __\   \ \ \____  \ \  __\   \ \ \  \ \  _-/ \/_/\ \/ 
                                                                \ \_\ \_\  \ \_____\  \ \_____\  \ \_____\  \ \_\  \ \_\      \ \_\ 
                                                                \/_/ /_/   \/_____/   \/_____/   \/_____/   \/_/   \/_/       \/_/ 
                                                                     


    )"<<std::endl;
    cout << "\n\n\t\t\t\tRECEIPT" << endl;
    cout << "\t\t\t--------------------------------" << endl;

    int numBookings = 0;  // Counter for the number of bookings made in the current transaction
    Node* curr = head;    // Starting node for the current transaction

    while (curr != nullptr) {
        numBookings++;
        cout << "\t\t\tNo. Of individuals: " << curr->noInd << endl;
        cout << "\t\t\tName of the booker: " << curr->name << endl;
        cout << "\t\t\tNO. of bed to be used: " << curr->noBed << endl;
        cout << "\t\t\tStaying time: " << curr->stayTime << endl;
        cout << "\t\t\tRoom Category: " << opt2 << endl;
        cout << "\t\t\tRoom Number: " << curr->roomChoice << endl;

        int x = stoi(curr->stayTime);
        int cost = x * 350;
        cout << "\t\t\tTotal cost: " << cost << endl;

        cout << endl;
        curr = curr->next;
    }

    cout << "\n\t\t\t--------------------------------" << endl;
    cout << "\t\t\tNumber of Bookings: " << numBookings << endl;
    cout << "\n\n\nPress any key to continue....";
    cin.ignore();
    cin.get();
}

switch (direction) {
        case (1):
            //NORTH
                cout << "Robot has moved 1 block north! ";
                north = north + 1;
                //If statement to print distance from the starting point
                if (north > 0) { //If its going north (int north being greater than zero means its moving north)
                    cout << "Robot has moved " << north << " blocks north and ";
                    if (east >= 0) { //If its going east (int east being greater then zero means its moving east)
                        cout << east << " blocks east from the starting point" << endl;
                    }
                    if (east < 0) { //If its going west (int east being less then zero means its moving west)
                        cout << east * (-1) << " blocks west from the starting point" << endl; //Times by negative to make it print a pos number (negative * negative = pos)
                    }
                }
                if (north < 0) { //If its going south (int north being less than zero means its moving south)
                    cout << "Robot has moved " << north * (-1) << " blocks south and ";
                    if (east >= 0) {
                        cout << east << " blocks east from the starting point" << endl;
                    }
                    if (east < 0) {
                        cout << east * (-1) << " blocks west from the starting point" << endl;
                    }
                }
        break;

        
    }
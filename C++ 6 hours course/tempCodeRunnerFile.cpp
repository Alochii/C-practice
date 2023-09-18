
    cout << Pnum <<'\n';
    cout <<*Pnum <<'\n' ;

    delete Pnum;
    cout << Pnum <<'\n';
    cout <<*Pnum <<'\n' ;
    

    char *pgrades = NULL;
    pgrades = new char[5];
    for (int i = 0; i<5; i++){
        cin >> pgrades[i];
    }
    for (int i= 0; i<5; i++){

        cout << pgrades[i];
    }
    delete pgrades;
    for (int i= 0; i<5; i++){

        cout << pgrades[i];
    }
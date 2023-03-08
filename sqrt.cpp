//
//  sqrt.cpp
//  HelloWorld
//
//  Created by Shirakawa on 2023/03/08.
//

#include <iostream>
#include <cmath>

int sqrtmath()
{
    using namespace std;
    
    double area;
    cout << "Enter the floor area,  in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square"
        << " feet to the side. " << endl;
    cout << "How fascinating!'" << endl;
    return 0;
}

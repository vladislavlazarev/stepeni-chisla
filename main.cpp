/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write youar code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int chislo2 (int a) {
    while (a > 4) {
        a-=4;
    }
    if (a == 1) {
        return 2;
    } else if ( a == 2) {
        return 4;
    } else if (a == 3) {
        return 8;
    } else if (a == 4) {
        return 6;
    }
}

int chislo3 (int a) {
    while (a > 4) {
        a-=4;
    }
    if (a == 1) {
        return 3;
    } else if ( a == 2) {
        return 9;
    } else if (a == 3) {
        return 7;
    } else if (a == 4) {
        return 1;
    }
}
int chislo4 (int a) {
    while (a > 2) {
        a-=2;
    }
    if (a == 1) {
        return 4;
    } else if ( a == 2) {
        return 6;
    }
}

int chislo7 (int a) {
    while (a > 4) {
        a-=4;
    }
    if (a == 1) {
        return 7;
    } else if ( a == 2) {
        return 9;
    } else if (a == 3) {
        return 3;
    } else if (a == 4) {
        return 1;
    }
}
int chislo8 (int a) {
    while (a > 4) {
        a-=4;
    }
    if (a == 1) {
        return 8;
    } else if ( a == 2) {
        return 4;
    } else if (a == 3) {
        return 2;
    } else if (a == 4) {
        return 6;
    }
}
int chislo9 (int a) {
    while (a > 2) {
        a-=2;
    }
    if (a == 1) {
        return 9;
    } else if ( a == 2) {
        return 1;
    }
}


int main()
{
    long long b, w;
    string a;
    string c;
    cin >> a;
    cin >> c;
    w = a.size();
    w =  a[w-1] - '0';
    b = c.size();
    if (b > 9)  b = (c[b-1] - '0' ) + (c[b - 2] - '0')*10;
    else b = c[b-1] - '0';
    if ( b == 0) {
        cout << 1;
        return 0;
    }
    switch (w){
        case 0:
            cout << 0;
            break;
        case 1: cout << 1;
            break;
        case 2: cout <<chislo2(b);
            break;
        case 3: cout << chislo3(b);
            break;
        case 4:
            cout <<chislo4(b);
            break;
        case 5: cout << 5;
            break;
        case 6: cout << 6;
            break;
        case 7: cout <<chislo7(b);
            break;
        case 8:
            cout <<chislo8(b);
            break;
        case 9: cout << chislo9(b);
            break;
    }
    return 0;
}

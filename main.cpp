/*
 * main.cpp
 *
 *  Created on: 10-Jun-2020
 *      Author: praveen
 */

#include <iostream>
#include <stdio.h>
#include "Server.h"


int main()
{

    Server *server = new Server();                      // initialize
    int status = server->startServer();

    if(status == 0)     // may return 0 in case demon not started
    {
            cout << "server could not be started..." << endl;
            return 0;
    }
    (void) getchar ();                                  /* do not allow program to exit*/

    server->stopServer();
    return 0;
}




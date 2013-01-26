/*
 * main.cpp
 *
 *  Created on: Jan 13, 2013
 *      Author: developerSid@gmail.com
 */
#include <iostream>

#include "ClusterConnection.hpp"
#include "ClusterConnectionImpl.hpp"
#include "ClusterPoller.hpp"
#include "ClusterPollerImpl.hpp"

int main(int argc, char **argv)
{
   cluster::ClusterConnection *conn=new cluster::ClusterConnectionImpl(argc, argv);
   cluster::ClusterPoller *poller=new cluster::ClusterPollerImpl(conn);

   poller->poll();

   delete poller;
   delete conn;

   return 0;
}

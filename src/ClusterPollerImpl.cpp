/*
 * ClusterPollerImpl.cpp
 *
 *  Created on: Jan 23, 2013
 *      Author: developerSid@gmail.com
 */
#include <iostream>

#include <boost/chrono.hpp>
#include <boost/thread/thread.hpp>

#include "ClusterPollerImpl.hpp"

namespace cluster
{
   ClusterPollerImpl::ClusterPollerImpl(ClusterConnection *connection)
   {
      this->connection=connection;
   }
   void ClusterPollerImpl::poll()
   {
      while(true)
      {
         std::cout << connection->rank() << " " << connection->clusterSize() << std::endl;
         boost::this_thread::sleep_for(boost::chrono::milliseconds(1000));
      }
   }
   ClusterPollerImpl::~ClusterPollerImpl()
   {

   }
}

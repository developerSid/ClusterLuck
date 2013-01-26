/*
 * ClusterPollerImpl.cpp
 *
 *  Created on: Jan 23, 2013
 *      Author: developerSid@gmail.com
 */
#include <iostream>

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
         std::cout << connection->rank() <<std::endl;
         boost::this_thread::sleep(2);
      }
   }
   ClusterPollerImpl::~ClusterPollerImpl()
   {

   }
}

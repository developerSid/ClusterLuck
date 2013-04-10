/*
 * ClusterConnectionImpl.cpp
 *
 *  Created on: Jan 17, 2013
 *      Author: developerSid@gmail.com
 */

#include "ClusterConnectionImpl.hpp"

namespace cluster
{
   ClusterConnectionImpl::ClusterConnectionImpl(int argc, char **argv)
   {
      this->env=new boost::mpi::environment(argc, argv);
      this->world=new boost::mpi::communicator();
   }
   int ClusterConnectionImpl::rank()
   {
      return this->world->rank();
   }
   int ClusterConnectionImpl::clusterSize()
   {
	   return this->world->size();
   }
   ClusterConnectionImpl::~ClusterConnectionImpl()
   {
      delete this->world;
      delete this->env;
   }
} /* namespace cluster */

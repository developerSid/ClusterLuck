/*
 * ClusterConnectionImpl.h
 *
 *  Created on: Jan 17, 2013
 *      Author: developerSid@gmail.com
 */

#ifndef CLUSTERCONNECTIONIMPL_H_
#define CLUSTERCONNECTIONIMPL_H_

#include <boost/mpi.hpp>

#include "ClusterConnection.hpp"

namespace cluster
{
   class ClusterConnectionImpl : public ClusterConnection
   {
   public:
      ClusterConnectionImpl(int argc, char **argv);
      int rank();
      virtual ~ClusterConnectionImpl();
   private:
      boost::mpi::environment *env;
      boost::mpi::communicator *world;
   };
} /* namespace cluster */
#endif /* CLUSTERCONNECTIONIMPL_H_ */

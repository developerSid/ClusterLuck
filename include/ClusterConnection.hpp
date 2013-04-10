/*
 * ClusterConnection.h
 *
 *  Created on: Jan 13, 2013
 *      Author: developerSid@gmail.com
 */

#ifndef CLUSTERCONNECTION_H_
#define CLUSTERCONNECTION_H_

#include <boost/mpi/environment.hpp>
#include <boost/mpi/communicator.hpp>

namespace cluster
{
   struct ClusterConnection
   {
      virtual int rank()=0;
      virtual int clusterSize()=0;

      virtual ~ClusterConnection(){};
   };
} /* namespace cluster */
#endif /* CLUSTERCONNECTION_H_ */

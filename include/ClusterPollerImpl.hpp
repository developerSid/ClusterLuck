/*
 * ClusterPollerImpl.hpp
 *
 *  Created on: Jan 23, 2013
 *      Author: myersgw
 */

#ifndef CLUSTERPOLLERIMPL_HPP_
#define CLUSTERPOLLERIMPL_HPP_

#include "ClusterPoller.hpp"
#include "ClusterConnection.hpp"

namespace cluster
{
   class ClusterPollerImpl : public ClusterPoller
   {
   public:
      ClusterPollerImpl(ClusterConnection *connection);
      void poll();
      ~ClusterPollerImpl();
   private:
      ClusterConnection *connection;
   };
}

#endif /* CLUSTERPOLLERIMPL_HPP_ */

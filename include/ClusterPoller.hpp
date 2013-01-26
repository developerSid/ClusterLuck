/*
 * ConnectionPoller.hpp
 *
 *  Created on: Jan 23, 2013
 *      Author: myersgw
 */

#ifndef CONNECTIONPOLLER_HPP_
#define CONNECTIONPOLLER_HPP_

namespace cluster
{
   struct ClusterPoller
   {
      virtual void poll()=0;
      virtual ~ClusterPoller(){}
   };
}

#endif /* CONNECTIONPOLLER_HPP_ */

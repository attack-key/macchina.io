//
// ExplicitAddressingZigBeeTransmitRequestDeserializer.h
//
// Package: Generated
// Module:  TypeDeserializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015-2020, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TypeDeserializer_IoT_XBee_ExplicitAddressingZigBeeTransmitRequest_INCLUDED
#define TypeDeserializer_IoT_XBee_ExplicitAddressingZigBeeTransmitRequest_INCLUDED


#include "IoT/XBee/XBeeNode.h"
#include "Poco/RemotingNG/TypeDeserializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeDeserializer<IoT::XBee::ExplicitAddressingZigBeeTransmitRequest>
{
public:
	static bool deserialize(const std::string& name, bool isMandatory, Deserializer& deser, IoT::XBee::ExplicitAddressingZigBeeTransmitRequest& value)
	{
		using namespace std::string_literals;
		
		bool ret = deser.deserializeStructBegin(name, isMandatory);
		if (ret)
		{
			deserializeImpl(deser, value);
			deser.deserializeStructEnd(name);
		}
		return ret;
	}

	static void deserializeImpl(Deserializer& deser, IoT::XBee::ExplicitAddressingZigBeeTransmitRequest& value)
	{
		using namespace std::string_literals;
		
		static const std::string REMOTING__NAMES[] = {"broadcastRadius"s,"clusterID"s,"destinationEndpoint"s,"deviceAddress"s,"frameID"s,"networkAddress"s,"options"s,"payload"s,"profileID"s,"sourceEndpoint"s};
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[0], true, deser, value.broadcastRadius);
		TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[1], true, deser, value.clusterID);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[2], true, deser, value.destinationEndpoint);
		TypeDeserializer<std::string >::deserialize(REMOTING__NAMES[3], true, deser, value.deviceAddress);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[4], true, deser, value.frameID);
		TypeDeserializer<std::string >::deserialize(REMOTING__NAMES[5], true, deser, value.networkAddress);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[6], true, deser, value.options);
		TypeDeserializer<std::vector < Poco::UInt8 > >::deserialize(REMOTING__NAMES[7], true, deser, value.payload);
		TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[8], true, deser, value.profileID);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[9], true, deser, value.sourceEndpoint);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeDeserializer_IoT_XBee_ExplicitAddressingZigBeeTransmitRequest_INCLUDED


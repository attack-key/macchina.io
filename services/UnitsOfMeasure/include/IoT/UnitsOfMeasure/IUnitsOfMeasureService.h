//
// IUnitsOfMeasureService.h
//
// Library: IoT/UnitsOfMeasure
// Package: Generated
// Module:  IUnitsOfMeasureService
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2018, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_UnitsOfMeasure_IUnitsOfMeasureService_INCLUDED
#define IoT_UnitsOfMeasure_IUnitsOfMeasureService_INCLUDED


#include "IoT/UnitsOfMeasure/UnitsOfMeasureService.h"
#include "Poco/AutoPtr.h"
#include "Poco/OSP/Service.h"
#include "Poco/RemotingNG/Identifiable.h"


namespace IoT {
namespace UnitsOfMeasure {


class IUnitsOfMeasureService: public Poco::OSP::Service
	/// The UnitsOfMeasureService service is mainly used to map
	/// [[http://unitsofmeasure.org/ucum.html Unified Code for Units of Measure]] (UCUM),
	/// codes, such as used with the IoT::Devices::Sensor interface, to display/print units.
	///
	/// It provides a programmatic interface to the
	/// [[http://unitsofmeasure.org/ucum-essence.xml UCUM-Essence XML file]]
	/// containing unit definitions.
{
public:
	typedef Poco::AutoPtr<IUnitsOfMeasureService> Ptr;

	IUnitsOfMeasureService();
		/// Creates a IUnitsOfMeasureService.

	virtual ~IUnitsOfMeasureService();
		/// Destroys the IUnitsOfMeasureService.

	virtual Poco::SharedPtr < IoT::UnitsOfMeasure::Prefix > findPrefix(const std::string& code) const = 0;
		/// Looks up the prefix with the given code.
		///
		/// Returns the Prefix, or a null pointer if not found.

	virtual Poco::SharedPtr < IoT::UnitsOfMeasure::Unit > findUnit(const std::string& code) const = 0;
		/// Looks up the unit with the given (non-prefixed) code.
		///
		/// Returns the Unit, or a null pointer if not found.

	bool isA(const std::type_info& otherType) const;
		/// Returns true if the class is a subclass of the class given by otherType.

	virtual std::string print(const std::string& prefixedCode) const = 0;
		/// Looks up the given unit code with optional prefix (e.g., "cm")
		/// and returns a printable string.
		///
		/// Throws a Poco::NotFoundException if no matching unit is found.

	static const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId();
		/// Returns the TypeId of the class.

	virtual IoT::UnitsOfMeasure::PrefixedUnit resolve(const std::string& prefixedCode) const = 0;
		/// Looks up the given unit code with optional prefix (e.g., "cm")
		/// and returns a PrefixUnit structure containing the (optional) prefix
		/// and unit information.
		///
		/// Throws a Poco::NotFoundException if no matching unit is found.

	const std::type_info& type() const;
		/// Returns the type information for the object's class.

};


} // namespace UnitsOfMeasure
} // namespace IoT


#endif // IoT_UnitsOfMeasure_IUnitsOfMeasureService_INCLUDED


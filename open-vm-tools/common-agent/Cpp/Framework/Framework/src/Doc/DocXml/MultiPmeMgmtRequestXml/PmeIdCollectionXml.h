/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef PmeIdCollectionXml_h_
#define PmeIdCollectionXml_h_

namespace Caf {

	/// Streams the PmeIdCollection class to/from XML
	namespace PmeIdCollectionXml {

		/// Adds the PmeIdCollectionDoc into the XML.
		void MULTIPMEMGMTREQUESTXML_LINKAGE add(
			const SmartPtrCPmeIdCollectionDoc pmeIdCollectionDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the PmeIdCollectionDoc from the XML.
		SmartPtrCPmeIdCollectionDoc MULTIPMEMGMTREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
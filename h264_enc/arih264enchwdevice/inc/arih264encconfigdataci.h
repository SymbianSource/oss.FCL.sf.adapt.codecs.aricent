/*
* Copyright (c) 2009 Aricent and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of the License "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Aricent - initial contribution.
*
* Contributors:
*
* Description:
* User defined encoder init data custom interface for H264 encoder plugin.
*
*/

/**
* Example of the CI usage:
* 1. Create CI.
* MH324AnnexKDefinedEncoderConfigDataCI* userConfigCI = NULL;
* userConfigCI = (MH324AnnexKDefinedEncoderConfigDataCI*)
* 					iDevvrInstance->CustomInterface( hwdevUid,
* 					KH324AnnexKDefinedEncoderConfigDataCIUid );
*
* CDEVVRVideoRecord iDevvrInstance    - The instance of the DeviceVideoRecord;
* TUid hwdevUid                       - Encoder HwDevice Uid;
* KH324AnnexKDefinedEncoderConfigDataCIUid  - Custom Interface Uid;
*
*
* 2. TInt status = userConfigCI->H324AnnexKDefinedEncoderConfigDataOn();
*
*    if ( status != KErrNone )
*        {
*        // handle error
*        }
*
* 3. This CI API H324AnnexKDefinedEncoderConfigDataOn() can only be called
* before the initializing phase (Before Initialize() method is called by
* DevVideo).
*
*/

#ifndef ARIH264ENCCONFIGDATACI_H 
#define ARIH264ENCCONFIGDATACI_H


// CONSTANTS
// Custom Interface UId
const TUid KH324AnnexKDefinedEncoderConfigDataCIUid = {0x10204C0B};

// CLASS DECLARATION
/**
 *  User defined encoder confguration data custom interface
 */
class MH324AnnexKDefinedEncoderConfigDataCI
    {
    public:

        /**
        * Enables inserting H324 pre-defind config data (VOL / SPS PPS / etc.)
        * @param none
        * @return KErrNone - Success, otherwise KErrGeneral - Error, unable
        * to process operation
        */
        virtual TInt H324AnnexKDefinedEncoderConfigDataOn() = 0;

    };


#endif  // ARIH264ENCCONFIGDATACI_H

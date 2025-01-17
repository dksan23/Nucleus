/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/ietemplate.cpp.tt>
 ******************************************************************************/

#include "mmContextIe.h"
#include "dataTypeCodecUtils.h"

MmContextIe::MmContextIe() 
{
    ieType = 107;
    // TODO

}

MmContextIe::~MmContextIe() {
    // TODO Auto-generated destructor stub
}

bool MmContextIe::encodeMmContextIe(MsgBuffer &buffer, MmContextIeData const &data)
{
    if(!(buffer.writeBits(data.securityMode, 3)))
    {
        errorStream.add((char *)"Encoding of securityMode failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.nhiPresent, 1)))
    {
        errorStream.add((char *)"Encoding of nhiPresent failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.drxiPresent, 1)))
    {
        errorStream.add((char *)"Encoding of drxiPresent failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.ksiAsme, 3)))
    {
        errorStream.add((char *)"Encoding of ksiAsme failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.numberOfQuintuplets, 3)))
    {
        errorStream.add((char *)"Encoding of numberOfQuintuplets failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.numberOfQuadruplet, 3)))
    {
        errorStream.add((char *)"Encoding of numberOfQuadruplet failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.uambriPresent, 1)))
    {
        errorStream.add((char *)"Encoding of uambriPresent failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.osciPresent, 1)))
    {
        errorStream.add((char *)"Encoding of osciPresent failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.sambriPresent, 1)))
    {
        errorStream.add((char *)"Encoding of sambriPresent failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.usedNasIntegrity, 3)))
    {
        errorStream.add((char *)"Encoding of usedNasIntegrity failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.usedNasCipher, 4)))
    {
        errorStream.add((char *)"Encoding of usedNasCipher failed\n");
        return false;
    }
    if (!(buffer.writeUint32(data.nasDownlinkCount)))
    {
        errorStream.add((char *)"Encoding of nasDownlinkCount failed\n");
        return false;
    }
    if (!(buffer.writeUint32(data.nasUplinkCount)))
    {
        errorStream.add((char *)"Encoding of nasUplinkCount failed\n");
        return false;
    }
    if (!(buffer.writeUint8(data.kAsme)))
    {
        errorStream.add((char *)"Encoding of kAsme failed\n");
        return false;
    }
    if (data.numberOfQuadruplet !=0)
    {
        if (!(DataTypeCodecUtils::encodeAuthenticationQuadrupletArray5(buffer, data.authenticationQuadruplet)))
        {
            errorStream.add((char *)"Encoding of authenticationQuadruplet failed\n");
            return false;
        }
    }
    if (data.numberOfQuintuplets !=0)
    {
        if (!(DataTypeCodecUtils::encodeAuthenticationQuintupletArray5(buffer, data.authenticationQuintuplet)))
        {
            errorStream.add((char *)"Encoding of authenticationQuintuplet failed\n");
            return false;
        }
    }
    if (data.drxiPresent)
    {
        if (!(buffer.writeUint8(data.drxParameter)))
        {
    errorStream.add((char *)"Encoding of drxParameter failed\n");
    return false;
        }
    }
    if (data.nhiPresent)
    {
        if (!(buffer.writeUint8(data.nh)))
        {
    errorStream.add((char *)"Encoding of nh failed\n");
    return false;
        }
    }
    buffer.skipBits(4);

    if (data.nhiPresent)
    {
        if(!(buffer.writeBits(data.ncc, 4)))
        {
            errorStream.add((char *)"Encoding of ncc failed\n");
            return false;
        }
    }
    if (data.sambriPresent)
    {
        if (!(buffer.writeUint8(data.uplinkSubscribedUeAmbr)))
        {
    errorStream.add((char *)"Encoding of uplinkSubscribedUeAmbr failed\n");
    return false;
        }
    }
    if (data.sambriPresent)
    {
        if (!(buffer.writeUint8(data.downlinkSubscribedUeAmbr)))
        {
    errorStream.add((char *)"Encoding of downlinkSubscribedUeAmbr failed\n");
    return false;
        }
    }
    if (data.uambriPresent)
    {
        if (!(buffer.writeUint8(data.uplinkUsedUeAmbr)))
        {
    errorStream.add((char *)"Encoding of uplinkUsedUeAmbr failed\n");
    return false;
        }
    }
    if (data.uambriPresent)
    {
        if (!(buffer.writeUint8(data.downlinkUsedUeAmbr)))
        {
    errorStream.add((char *)"Encoding of downlinkUsedUeAmbr failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfUeNetworkCapability)))
    {
        errorStream.add((char *)"Encoding of lengthOfUeNetworkCapability failed\n");
        return false;
    }
    if (data.lengthOfUeNetworkCapability != 0)
    {
        if (!(buffer.writeUint8(data.ueNetworkCapability)))
        {
    errorStream.add((char *)"Encoding of ueNetworkCapability failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfMsNetworkCapability)))
    {
        errorStream.add((char *)"Encoding of lengthOfMsNetworkCapability failed\n");
        return false;
    }
    if (data.lengthOfMsNetworkCapability != 0)
    {
        if (!(buffer.writeUint8(data.msNetworkCapability)))
        {
    errorStream.add((char *)"Encoding of msNetworkCapability failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfMobileEquipmentIdentity)))
    {
        errorStream.add((char *)"Encoding of lengthOfMobileEquipmentIdentity failed\n");
        return false;
    }
    if (data.lengthOfMobileEquipmentIdentity != 0)
    {
        if (!(buffer.writeUint8(data.mobileEquipmentIdentity)))
        {
    errorStream.add((char *)"Encoding of mobileEquipmentIdentity failed\n");
    return false;
        }
    }
    if(!(buffer.writeBits(data.ecna, 1)))
    {
        errorStream.add((char *)"Encoding of ecna failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.nbna, 1)))
    {
        errorStream.add((char *)"Encoding of nbna failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.hnna, 1)))
    {
        errorStream.add((char *)"Encoding of hnna failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.ena, 1)))
    {
        errorStream.add((char *)"Encoding of ena failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.ina, 1)))
    {
        errorStream.add((char *)"Encoding of ina failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.gana, 1)))
    {
        errorStream.add((char *)"Encoding of gana failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.gena, 1)))
    {
        errorStream.add((char *)"Encoding of gena failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.una, 1)))
    {
        errorStream.add((char *)"Encoding of una failed\n");
        return false;
    }
    if(!(buffer.writeBits(data.nhiOIdPresent, 1)))
    {
        errorStream.add((char *)"Encoding of nhiOIdPresent failed\n");
        return false;
    }
    buffer.skipBits(1);

    if(!(buffer.writeBits(data.oldKsiAsme, 3)))
    {
        errorStream.add((char *)"Encoding of oldKsiAsme failed\n");
        return false;
    }
    if (data.nhiOIdPresent)
    {
        if(!(buffer.writeBits(data.oldNcc, 3)))
        {
            errorStream.add((char *)"Encoding of oldNcc failed\n");
            return false;
        }
    }
    if (!(buffer.writeUint8(data.oldKasme)))
    {
        errorStream.add((char *)"Encoding of oldKasme failed\n");
        return false;
    }
    if (data.nhiOIdPresent)
    {
        if (!(buffer.writeUint8(data.oldNh)))
        {
    errorStream.add((char *)"Encoding of oldNh failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfVoiceDomainPreferenceAndUesUsageSetting)))
    {
        errorStream.add((char *)"Encoding of lengthOfVoiceDomainPreferenceAndUesUsageSetting failed\n");
        return false;
    }
    if (data.lengthOfVoiceDomainPreferenceAndUesUsageSetting != 0)
    {
        if (!(buffer.writeUint8(data.voiceDomainPreferenceAndUesUsageSetting)))
        {
    errorStream.add((char *)"Encoding of voiceDomainPreferenceAndUesUsageSetting failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfUeRadioCapabilityForPagingInformation)))
    {
        errorStream.add((char *)"Encoding of lengthOfUeRadioCapabilityForPagingInformation failed\n");
        return false;
    }
    if (data.lengthOfUeRadioCapabilityForPagingInformation != 0)
    {
        if (!(buffer.writeUint8(data.ueRadioCapabilityForPagingInformation)))
        {
    errorStream.add((char *)"Encoding of ueRadioCapabilityForPagingInformation failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfExtendedAccessRestrictionData)))
    {
        errorStream.add((char *)"Encoding of lengthOfExtendedAccessRestrictionData failed\n");
        return false;
    }
    buffer.skipBits(6);

    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        if(!(buffer.writeBits(data.ussrna, 1)))
        {
            errorStream.add((char *)"Encoding of ussrna failed\n");
            return false;
        }
    }
    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        if(!(buffer.writeBits(data.nrsrna, 1)))
        {
            errorStream.add((char *)"Encoding of nrsrna failed\n");
            return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfUeAdditionalSecurityCapability)))
    {
        errorStream.add((char *)"Encoding of lengthOfUeAdditionalSecurityCapability failed\n");
        return false;
    }
    if (data.lengthOfUeAdditionalSecurityCapability !=0)
    {
        if (!(buffer.writeUint8(data.ueAdditionalSecurityCapability)))
        {
    errorStream.add((char *)"Encoding of ueAdditionalSecurityCapability failed\n");
    return false;
        }
    }
    if (!(buffer.writeUint8(data.lengthOfUeNrSecurityCapability)))
    {
        errorStream.add((char *)"Encoding of lengthOfUeNrSecurityCapability failed\n");
        return false;
    }
    if (data.lengthOfUeNrSecurityCapability !=0)
    {
        if (!(buffer.writeUint8(data.ueNrSecurityCapability)))
        {
    errorStream.add((char *)"Encoding of ueNrSecurityCapability failed\n");
    return false;
        }
    }

    return true;
}

bool MmContextIe::decodeMmContextIe(MsgBuffer &buffer, MmContextIeData &data, Uint16 length)
{     
    // TODO optimize the length checks
    
    Uint16 ieBoundary = buffer.getCurrentIndex() + length;
    data.securityMode = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: securityMode\n");
        return false;
    }
    data.nhiPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: nhiPresent\n");
        return false;
    }
    data.drxiPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: drxiPresent\n");
        return false;
    }
    data.ksiAsme = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: ksiAsme\n");
        return false;
    }
    data.numberOfQuintuplets = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: numberOfQuintuplets\n");
        return false;
    }
    data.numberOfQuadruplet = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: numberOfQuadruplet\n");
        return false;
    }
    data.uambriPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: uambriPresent\n");
        return false;
    }
    data.osciPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: osciPresent\n");
        return false;
    }
    data.sambriPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: sambriPresent\n");
        return false;
    }
    data.usedNasIntegrity = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: usedNasIntegrity\n");
        return false;
    }
    data.usedNasCipher = buffer.readBits(4);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: usedNasCipher\n");
        return false;
    }

    buffer.readUint32(data.nasDownlinkCount);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: nasDownlinkCount\n");
        return false;
    }

    buffer.readUint32(data.nasUplinkCount);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: nasUplinkCount\n");
        return false;
    }

    buffer.readUint8(data.kAsme);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: kAsme\n");
        return false;
    }

    Uint16 lengthLeft = length;

    if (data.numberOfQuadruplet !=0)
    {
        lengthLeft = ieBoundary - buffer.getCurrentIndex();
        if (!(DataTypeCodecUtils::decodeAuthenticationQuadrupletArray5(buffer, data.authenticationQuadruplet, lengthLeft, data.numberOfQuadruplet)))
        {
            errorStream.add((char *)"Failed to decode: authenticationQuadruplet\n");
            return false;
        }
    }

    if (data.numberOfQuintuplets !=0)
    {
        lengthLeft = ieBoundary - buffer.getCurrentIndex();
        if (!(DataTypeCodecUtils::decodeAuthenticationQuintupletArray5(buffer, data.authenticationQuintuplet, lengthLeft, data.numberOfQuintuplets)))
        {
            errorStream.add((char *)"Failed to decode: authenticationQuintuplet\n");
            return false;
        }
    }

    if (data.drxiPresent)
    {

        buffer.readUint8(data.drxParameter);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: drxParameter\n");
            return false;
        }
    }

    if (data.nhiPresent)
    {

        buffer.readUint8(data.nh);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: nh\n");
            return false;
        }
    }
    buffer.skipBits(4);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: \n");
        return false;
    }


    if (data.nhiPresent)
    {
        data.ncc = buffer.readBits(4);
        // confirm that we are not reading beyond the IE boundary
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ncc\n");
            return false;
        }
    }

    if (data.sambriPresent)
    {

        buffer.readUint8(data.uplinkSubscribedUeAmbr);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: uplinkSubscribedUeAmbr\n");
            return false;
        }
    }

    if (data.sambriPresent)
    {

        buffer.readUint8(data.downlinkSubscribedUeAmbr);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: downlinkSubscribedUeAmbr\n");
            return false;
        }
    }

    if (data.uambriPresent)
    {

        buffer.readUint8(data.uplinkUsedUeAmbr);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: uplinkUsedUeAmbr\n");
            return false;
        }
    }

    if (data.uambriPresent)
    {

        buffer.readUint8(data.downlinkUsedUeAmbr);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: downlinkUsedUeAmbr\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfUeNetworkCapability);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfUeNetworkCapability\n");
        return false;
    }

    if (data.lengthOfUeNetworkCapability != 0)
    {

        buffer.readUint8(data.ueNetworkCapability);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ueNetworkCapability\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfMsNetworkCapability);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfMsNetworkCapability\n");
        return false;
    }

    if (data.lengthOfMsNetworkCapability != 0)
    {

        buffer.readUint8(data.msNetworkCapability);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: msNetworkCapability\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfMobileEquipmentIdentity);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfMobileEquipmentIdentity\n");
        return false;
    }

    if (data.lengthOfMobileEquipmentIdentity != 0)
    {

        buffer.readUint8(data.mobileEquipmentIdentity);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: mobileEquipmentIdentity\n");
            return false;
        }
    }
    data.ecna = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: ecna\n");
        return false;
    }
    data.nbna = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: nbna\n");
        return false;
    }
    data.hnna = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: hnna\n");
        return false;
    }
    data.ena = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: ena\n");
        return false;
    }
    data.ina = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: ina\n");
        return false;
    }
    data.gana = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: gana\n");
        return false;
    }
    data.gena = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: gena\n");
        return false;
    }
    data.una = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: una\n");
        return false;
    }
    data.nhiOIdPresent = buffer.readBits(1);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: nhiOIdPresent\n");
        return false;
    }
    buffer.skipBits(1);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: \n");
        return false;
    }

    data.oldKsiAsme = buffer.readBits(3);
    // confirm that we are not reading beyond the IE boundary
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: oldKsiAsme\n");
        return false;
    }

    if (data.nhiOIdPresent)
    {
        data.oldNcc = buffer.readBits(3);
        // confirm that we are not reading beyond the IE boundary
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: oldNcc\n");
            return false;
        }
    }

    buffer.readUint8(data.oldKasme);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: oldKasme\n");
        return false;
    }

    if (data.nhiOIdPresent)
    {

        buffer.readUint8(data.oldNh);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: oldNh\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfVoiceDomainPreferenceAndUesUsageSetting);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfVoiceDomainPreferenceAndUesUsageSetting\n");
        return false;
    }

    if (data.lengthOfVoiceDomainPreferenceAndUesUsageSetting != 0)
    {

        buffer.readUint8(data.voiceDomainPreferenceAndUesUsageSetting);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: voiceDomainPreferenceAndUesUsageSetting\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfUeRadioCapabilityForPagingInformation);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfUeRadioCapabilityForPagingInformation\n");
        return false;
    }

    if (data.lengthOfUeRadioCapabilityForPagingInformation != 0)
    {

        buffer.readUint8(data.ueRadioCapabilityForPagingInformation);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ueRadioCapabilityForPagingInformation\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfExtendedAccessRestrictionData);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfExtendedAccessRestrictionData\n");
        return false;
    }
    buffer.skipBits(6);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: \n");
        return false;
    }


    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        data.ussrna = buffer.readBits(1);
        // confirm that we are not reading beyond the IE boundary
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ussrna\n");
            return false;
        }
    }

    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        data.nrsrna = buffer.readBits(1);
        // confirm that we are not reading beyond the IE boundary
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: nrsrna\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfUeAdditionalSecurityCapability);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfUeAdditionalSecurityCapability\n");
        return false;
    }

    if (data.lengthOfUeAdditionalSecurityCapability !=0)
    {

        buffer.readUint8(data.ueAdditionalSecurityCapability);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ueAdditionalSecurityCapability\n");
            return false;
        }
    }

    buffer.readUint8(data.lengthOfUeNrSecurityCapability);
    if (buffer.getCurrentIndex() > ieBoundary)
    {
        errorStream.add((char *)"Attempt to read beyond IE boundary: lengthOfUeNrSecurityCapability\n");
        return false;
    }

    if (data.lengthOfUeNrSecurityCapability !=0)
    {

        buffer.readUint8(data.ueNrSecurityCapability);
        if (buffer.getCurrentIndex() > ieBoundary)
        {
            errorStream.add((char *)"Attempt to read beyond IE boundary: ueNrSecurityCapability\n");
            return false;
        }
    }

    // The IE is decoded now. The buffer index should be pointing to the 
    // IE Boundary. If not, we have some more data left for the IE which we don't know
    // how to decode
    if (ieBoundary == buffer.getCurrentIndex())
    {
        return true;
    }
    else
    {
        errorStream.add((char *)"Unable to decode IE MmContextIe\n");
        return false;
    }
}
void MmContextIe::displayMmContextIe_v(MmContextIeData const &data, Debug &stream)
{
    stream.incrIndent();
    stream.add((char *)"MmContextIeData:");
    stream.incrIndent();
    stream.endOfLine();
  
    stream.add( (char *)"securityMode: "); 
    stream.add((Uint8)data.securityMode);
    stream.endOfLine();
  
    stream.add( (char *)"nhiPresent: "); 
    stream.add((Uint8)data.nhiPresent);
    stream.endOfLine();
  
    stream.add( (char *)"drxiPresent: "); 
    stream.add((Uint8)data.drxiPresent);
    stream.endOfLine();
  
    stream.add( (char *)"ksiAsme: "); 
    stream.add((Uint8)data.ksiAsme);
    stream.endOfLine();
  
    stream.add( (char *)"numberOfQuintuplets: "); 
    stream.add((Uint8)data.numberOfQuintuplets);
    stream.endOfLine();
  
    stream.add( (char *)"numberOfQuadruplet: "); 
    stream.add((Uint8)data.numberOfQuadruplet);
    stream.endOfLine();
  
    stream.add( (char *)"uambriPresent: "); 
    stream.add((Uint8)data.uambriPresent);
    stream.endOfLine();
  
    stream.add( (char *)"osciPresent: "); 
    stream.add((Uint8)data.osciPresent);
    stream.endOfLine();
  
    stream.add( (char *)"sambriPresent: "); 
    stream.add((Uint8)data.sambriPresent);
    stream.endOfLine();
  
    stream.add( (char *)"usedNasIntegrity: "); 
    stream.add((Uint8)data.usedNasIntegrity);
    stream.endOfLine();
  
    stream.add( (char *)"usedNasCipher: "); 
    stream.add((Uint8)data.usedNasCipher);
    stream.endOfLine();
  
    stream.add((char *)"nasDownlinkCount: ");
    stream.add(data.nasDownlinkCount);
    stream.endOfLine();
  
    stream.add((char *)"nasUplinkCount: ");
    stream.add(data.nasUplinkCount);
    stream.endOfLine();
  
    stream.add((char *)"kAsme: ");
    stream.add(data.kAsme);
    stream.endOfLine();
  
    if (data.numberOfQuadruplet !=0)
    {
        stream.add((char *)"authenticationQuadruplet:");
        stream.endOfLine();
        DataTypeCodecUtils::displayAuthenticationQuadrupletArray5_v(data.authenticationQuadruplet, stream);
    }
  
    if (data.numberOfQuintuplets !=0)
    {
        stream.add((char *)"authenticationQuintuplet:");
        stream.endOfLine();
        DataTypeCodecUtils::displayAuthenticationQuintupletArray5_v(data.authenticationQuintuplet, stream);
    }
  
    if (data.drxiPresent)
    {
        stream.add((char *)"drxParameter: ");
        stream.add(data.drxParameter);
        stream.endOfLine();
    }
  
    if (data.nhiPresent)
    {
        stream.add((char *)"nh: ");
        stream.add(data.nh);
        stream.endOfLine();
    }
  
    if (data.nhiPresent)
    {
        stream.add( (char *)"ncc: "); 
        stream.add((Uint8)data.ncc);
        stream.endOfLine();
    }
  
    if (data.sambriPresent)
    {
        stream.add((char *)"uplinkSubscribedUeAmbr: ");
        stream.add(data.uplinkSubscribedUeAmbr);
        stream.endOfLine();
    }
  
    if (data.sambriPresent)
    {
        stream.add((char *)"downlinkSubscribedUeAmbr: ");
        stream.add(data.downlinkSubscribedUeAmbr);
        stream.endOfLine();
    }
  
    if (data.uambriPresent)
    {
        stream.add((char *)"uplinkUsedUeAmbr: ");
        stream.add(data.uplinkUsedUeAmbr);
        stream.endOfLine();
    }
  
    if (data.uambriPresent)
    {
        stream.add((char *)"downlinkUsedUeAmbr: ");
        stream.add(data.downlinkUsedUeAmbr);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfUeNetworkCapability: ");
    stream.add(data.lengthOfUeNetworkCapability);
    stream.endOfLine();
  
    if (data.lengthOfUeNetworkCapability != 0)
    {
        stream.add((char *)"ueNetworkCapability: ");
        stream.add(data.ueNetworkCapability);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfMsNetworkCapability: ");
    stream.add(data.lengthOfMsNetworkCapability);
    stream.endOfLine();
  
    if (data.lengthOfMsNetworkCapability != 0)
    {
        stream.add((char *)"msNetworkCapability: ");
        stream.add(data.msNetworkCapability);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfMobileEquipmentIdentity: ");
    stream.add(data.lengthOfMobileEquipmentIdentity);
    stream.endOfLine();
  
    if (data.lengthOfMobileEquipmentIdentity != 0)
    {
        stream.add((char *)"mobileEquipmentIdentity: ");
        stream.add(data.mobileEquipmentIdentity);
        stream.endOfLine();
    }
  
    stream.add( (char *)"ecna: "); 
    stream.add((Uint8)data.ecna);
    stream.endOfLine();
  
    stream.add( (char *)"nbna: "); 
    stream.add((Uint8)data.nbna);
    stream.endOfLine();
  
    stream.add( (char *)"hnna: "); 
    stream.add((Uint8)data.hnna);
    stream.endOfLine();
  
    stream.add( (char *)"ena: "); 
    stream.add((Uint8)data.ena);
    stream.endOfLine();
  
    stream.add( (char *)"ina: "); 
    stream.add((Uint8)data.ina);
    stream.endOfLine();
  
    stream.add( (char *)"gana: "); 
    stream.add((Uint8)data.gana);
    stream.endOfLine();
  
    stream.add( (char *)"gena: "); 
    stream.add((Uint8)data.gena);
    stream.endOfLine();
  
    stream.add( (char *)"una: "); 
    stream.add((Uint8)data.una);
    stream.endOfLine();
  
    stream.add( (char *)"nhiOIdPresent: "); 
    stream.add((Uint8)data.nhiOIdPresent);
    stream.endOfLine();
  
    stream.add( (char *)"oldKsiAsme: "); 
    stream.add((Uint8)data.oldKsiAsme);
    stream.endOfLine();
  
    if (data.nhiOIdPresent)
    {
        stream.add( (char *)"oldNcc: "); 
        stream.add((Uint8)data.oldNcc);
        stream.endOfLine();
    }
  
    stream.add((char *)"oldKasme: ");
    stream.add(data.oldKasme);
    stream.endOfLine();
  
    if (data.nhiOIdPresent)
    {
        stream.add((char *)"oldNh: ");
        stream.add(data.oldNh);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfVoiceDomainPreferenceAndUesUsageSetting: ");
    stream.add(data.lengthOfVoiceDomainPreferenceAndUesUsageSetting);
    stream.endOfLine();
  
    if (data.lengthOfVoiceDomainPreferenceAndUesUsageSetting != 0)
    {
        stream.add((char *)"voiceDomainPreferenceAndUesUsageSetting: ");
        stream.add(data.voiceDomainPreferenceAndUesUsageSetting);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfUeRadioCapabilityForPagingInformation: ");
    stream.add(data.lengthOfUeRadioCapabilityForPagingInformation);
    stream.endOfLine();
  
    if (data.lengthOfUeRadioCapabilityForPagingInformation != 0)
    {
        stream.add((char *)"ueRadioCapabilityForPagingInformation: ");
        stream.add(data.ueRadioCapabilityForPagingInformation);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfExtendedAccessRestrictionData: ");
    stream.add(data.lengthOfExtendedAccessRestrictionData);
    stream.endOfLine();
  
    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        stream.add( (char *)"ussrna: "); 
        stream.add((Uint8)data.ussrna);
        stream.endOfLine();
    }
  
    if (data.lengthOfExtendedAccessRestrictionData != 0)
    {
        stream.add( (char *)"nrsrna: "); 
        stream.add((Uint8)data.nrsrna);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfUeAdditionalSecurityCapability: ");
    stream.add(data.lengthOfUeAdditionalSecurityCapability);
    stream.endOfLine();
  
    if (data.lengthOfUeAdditionalSecurityCapability !=0)
    {
        stream.add((char *)"ueAdditionalSecurityCapability: ");
        stream.add(data.ueAdditionalSecurityCapability);
        stream.endOfLine();
    }
  
    stream.add((char *)"lengthOfUeNrSecurityCapability: ");
    stream.add(data.lengthOfUeNrSecurityCapability);
    stream.endOfLine();
  
    if (data.lengthOfUeNrSecurityCapability !=0)
    {
        stream.add((char *)"ueNrSecurityCapability: ");
        stream.add(data.ueNrSecurityCapability);
        stream.endOfLine();
    }
    stream.decrIndent();
    stream.decrIndent();
}

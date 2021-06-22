/*
 *  
 *  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
 *  project.
 *  
 *  Copyright (C) 1998-2021 OpenLink Software
 *  
 *  This project is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; only version 2 of the License, dated June 1991.
 *  
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *  
 *  
*/

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Mon Nov 06 14:26:24 2000
 */
/* Compiler settings for D:\Program Files\Microsoft Platform SDK\Include\SmtpEvent.Idl:
    Os (OptLev=s), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AXP64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISmtpInCommandContext,0x5F15C533,0xE90E,0x11D1,0x88,0x52,0x00,0xC0,0x4F,0xA3,0x5B,0x86);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCallbackContext,0x5e4fc9da,0x3e3b,0x11d3,0x88,0xf1,0x00,0xc0,0x4f,0xa3,0x5b,0x86);


MIDL_DEFINE_GUID(IID, IID_ISmtpOutCommandContext,0xc849b5f2,0x0a80,0x11d2,0xaa,0x67,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpServerResponseContext,0xe38f9ad2,0x0a82,0x11d2,0xaa,0x67,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCommandSink,0xb2d42a0e,0x0d5f,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpOutCommandSink,0xcfdbb9b0,0x0ca0,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpServerResponseSink,0xd7e10222,0x0ca1,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCallbackSink,0x0012b624,0x3e3c,0x11d3,0x88,0xf1,0x00,0xc0,0x4f,0xa3,0x5b,0x86);


MIDL_DEFINE_GUID(IID, IID_IMailTransportNotify,0x6E1CAA77,0xFCD4,0x11d1,0x9D,0xF9,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportSubmission,0xCE681916,0xFF14,0x11d1,0x9D,0xFB,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportOnPreCategorize,0xA3ACFB0E,0x83FF,0x11d2,0x9E,0x14,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportOnPostCategorize,0x76719653,0x05A6,0x11d2,0x9D,0xFD,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRouterReset,0xA928AD12,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportSetRouterReset,0xA928AD11,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMessageRouter,0xA928AD14,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRouterSetLinkState,0xB870CE28,0xA755,0x11d2,0xA6,0xA9,0x00,0xC0,0x4F,0xA3,0x49,0x0A);


MIDL_DEFINE_GUID(IID, IID_IMessageRouterLinkStateNotification,0xB870CE29,0xA755,0x11d2,0xA6,0xA9,0x00,0xC0,0x4F,0xA3,0x49,0x0A);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRoutingEngine,0xA928AD13,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMsgTrackLog,0x1bc3580e,0x7e4f,0x11d2,0x94,0xf4,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_IDnsResolverRecord,0xe5b89c52,0x8e0b,0x11d2,0x94,0xf6,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_IDnsResolverRecordSink,0xd95a4d0c,0x8e06,0x11d2,0x94,0xf6,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_ISmtpMaxMsgSize,0xb997f192,0xa67d,0x11d2,0x94,0xf7,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_ICategorizerProperties,0x96BF3199,0x79D8,0x11d2,0x9E,0x11,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerParameters,0x86F9DA7B,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerQueries,0x86F9DA7D,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerMailMsgs,0x86F9DA80,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItemAttributes,0x86F9DA7F,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItemRawAttributes,0x34C3D389,0x8FA7,0x11d2,0x9E,0x16,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItem,0x86F9DA7C,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerAsyncContext,0x86F9DA7E,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerListResolve,0x960252A4,0x0A3A,0x11d2,0x9E,0x00,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportCategorize,0x86F9DA7A,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizer,0xB23C35B8,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizerCompletion,0xB23C35B9,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizerDLCompletion,0xB23C35BA,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerDomainInfo,0xE210EDC6,0xF27D,0x481f,0x9D,0xFC,0x1C,0xA8,0x40,0x90,0x5F,0xD9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AXP64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 5.03.0280 */
/* at Mon Nov 06 14:26:24 2000
 */
/* Compiler settings for D:\Program Files\Microsoft Platform SDK\Include\SmtpEvent.Idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win64 (32b run,appending), ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AXP64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISmtpInCommandContext,0x5F15C533,0xE90E,0x11D1,0x88,0x52,0x00,0xC0,0x4F,0xA3,0x5B,0x86);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCallbackContext,0x5e4fc9da,0x3e3b,0x11d3,0x88,0xf1,0x00,0xc0,0x4f,0xa3,0x5b,0x86);


MIDL_DEFINE_GUID(IID, IID_ISmtpOutCommandContext,0xc849b5f2,0x0a80,0x11d2,0xaa,0x67,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpServerResponseContext,0xe38f9ad2,0x0a82,0x11d2,0xaa,0x67,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCommandSink,0xb2d42a0e,0x0d5f,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpOutCommandSink,0xcfdbb9b0,0x0ca0,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpServerResponseSink,0xd7e10222,0x0ca1,0x11d2,0xaa,0x68,0x00,0xc0,0x4f,0xa3,0x5b,0x82);


MIDL_DEFINE_GUID(IID, IID_ISmtpInCallbackSink,0x0012b624,0x3e3c,0x11d3,0x88,0xf1,0x00,0xc0,0x4f,0xa3,0x5b,0x86);


MIDL_DEFINE_GUID(IID, IID_IMailTransportNotify,0x6E1CAA77,0xFCD4,0x11d1,0x9D,0xF9,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportSubmission,0xCE681916,0xFF14,0x11d1,0x9D,0xFB,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportOnPreCategorize,0xA3ACFB0E,0x83FF,0x11d2,0x9E,0x14,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportOnPostCategorize,0x76719653,0x05A6,0x11d2,0x9D,0xFD,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRouterReset,0xA928AD12,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportSetRouterReset,0xA928AD11,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMessageRouter,0xA928AD14,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRouterSetLinkState,0xB870CE28,0xA755,0x11d2,0xA6,0xA9,0x00,0xC0,0x4F,0xA3,0x49,0x0A);


MIDL_DEFINE_GUID(IID, IID_IMessageRouterLinkStateNotification,0xB870CE29,0xA755,0x11d2,0xA6,0xA9,0x00,0xC0,0x4F,0xA3,0x49,0x0A);


MIDL_DEFINE_GUID(IID, IID_IMailTransportRoutingEngine,0xA928AD13,0x1610,0x11d2,0x9E,0x02,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMsgTrackLog,0x1bc3580e,0x7e4f,0x11d2,0x94,0xf4,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_IDnsResolverRecord,0xe5b89c52,0x8e0b,0x11d2,0x94,0xf6,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_IDnsResolverRecordSink,0xd95a4d0c,0x8e06,0x11d2,0x94,0xf6,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_ISmtpMaxMsgSize,0xb997f192,0xa67d,0x11d2,0x94,0xf7,0x00,0xC0,0x4f,0x79,0xf1,0xd6);


MIDL_DEFINE_GUID(IID, IID_ICategorizerProperties,0x96BF3199,0x79D8,0x11d2,0x9E,0x11,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerParameters,0x86F9DA7B,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerQueries,0x86F9DA7D,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerMailMsgs,0x86F9DA80,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItemAttributes,0x86F9DA7F,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItemRawAttributes,0x34C3D389,0x8FA7,0x11d2,0x9E,0x16,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerItem,0x86F9DA7C,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerAsyncContext,0x86F9DA7E,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerListResolve,0x960252A4,0x0A3A,0x11d2,0x9E,0x00,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_IMailTransportCategorize,0x86F9DA7A,0xEB6E,0x11d1,0x9D,0xF3,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizer,0xB23C35B8,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizerCompletion,0xB23C35B9,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISMTPCategorizerDLCompletion,0xB23C35BA,0x9219,0x11d2,0x9E,0x17,0x00,0xC0,0x4F,0xA3,0x22,0xBA);


MIDL_DEFINE_GUID(IID, IID_ICategorizerDomainInfo,0xE210EDC6,0xF27D,0x481f,0x9D,0xFC,0x1C,0xA8,0x40,0x90,0x5F,0xD9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AXP64)*/


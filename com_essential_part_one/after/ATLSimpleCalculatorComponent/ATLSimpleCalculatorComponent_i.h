

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ATLSimpleCalculatorComponent.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLSimpleCalculatorComponent_i_h__
#define __ATLSimpleCalculatorComponent_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISimpleCalculator_FWD_DEFINED__
#define __ISimpleCalculator_FWD_DEFINED__
typedef interface ISimpleCalculator ISimpleCalculator;

#endif 	/* __ISimpleCalculator_FWD_DEFINED__ */


#ifndef __Calculator_FWD_DEFINED__
#define __Calculator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Calculator Calculator;
#else
typedef struct Calculator Calculator;
#endif /* __cplusplus */

#endif 	/* __Calculator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISimpleCalculator_INTERFACE_DEFINED__
#define __ISimpleCalculator_INTERFACE_DEFINED__

/* interface ISimpleCalculator */
/* [unique][nonextensible][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ISimpleCalculator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91E4BC03-6E63-49C7-913D-6F66329514A4")
    ISimpleCalculator : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ int a,
            /* [in] */ int b,
            /* [retval][out] */ int *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISimpleCalculatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleCalculator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleCalculator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleCalculator * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISimpleCalculator * This,
            /* [in] */ int a,
            /* [in] */ int b,
            /* [retval][out] */ int *result);
        
        END_INTERFACE
    } ISimpleCalculatorVtbl;

    interface ISimpleCalculator
    {
        CONST_VTBL struct ISimpleCalculatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleCalculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimpleCalculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimpleCalculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimpleCalculator_Add(This,a,b,result)	\
    ( (This)->lpVtbl -> Add(This,a,b,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimpleCalculator_INTERFACE_DEFINED__ */



#ifndef __ATLSimpleCalculatorComponentLib_LIBRARY_DEFINED__
#define __ATLSimpleCalculatorComponentLib_LIBRARY_DEFINED__

/* library ATLSimpleCalculatorComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLSimpleCalculatorComponentLib;

EXTERN_C const CLSID CLSID_Calculator;

#ifdef __cplusplus

class DECLSPEC_UUID("179a5a24-b7f1-43d4-978c-36b585fcac8c")
Calculator;
#endif
#endif /* __ATLSimpleCalculatorComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



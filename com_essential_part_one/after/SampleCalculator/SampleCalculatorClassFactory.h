#pragma once


#include	<objbase.h>

///////////////////////////////////////////////////////////
//
// Class factory
//
class  __declspec(uuid("9b917e02-65bc-49b0-b862-dd061af8d9ba"))  SampleCalculatorClassFactory : public IClassFactory
{
public:
	// IUnknown
	virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv);
	virtual ULONG   __stdcall AddRef();
	virtual ULONG   __stdcall Release();

	// Interface IClassFactory
	virtual HRESULT __stdcall CreateInstance(IUnknown* pUnknownOuter,
		const IID& iid,
		void** ppv);

	virtual HRESULT __stdcall LockServer(BOOL bLock);

	// Constructor
	SampleCalculatorClassFactory() : m_cRef(1) {}

	// Destructor
	~SampleCalculatorClassFactory() {

	}

private:
	long m_cRef;
};
